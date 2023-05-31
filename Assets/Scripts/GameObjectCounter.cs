using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameObjectCounter : MonoBehaviour
{
    public static async Task SendLogAsync(string log)
    {
        var client = new HttpClient();
        var content = new StringContent(log);
    }
    public List<GameObject> Targets;
    public Text text;

    private async Task IterateGameObject(GameObject target, string parentName)
    {
        var childrens = target.transform;
        foreach (Transform childrenTransform in childrens)
        {
            var children = childrenTransform.gameObject;
            var isGameObject = children is GameObject;
            if (!isGameObject) continue;
            var nameToSend = $"{parentName}/{children.name}";
            await SendLogAsync($"{nameToSend} FOUND");
            await IterateGameObject(children, nameToSend);
        }
    }
    async void Start()
    {
        await SendLogAsync($"Waiting 10000ms");
        await Task.Delay(10000);
        Targets = SceneManager.GetActiveScene().GetRootGameObjects().ToList();
        foreach (var target in Targets)
        {
            await SendLogAsync($"Target: {target.name}");
            await IterateGameObject(target, target.name);
        }
        var vertices = new List<Vector3>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
