using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class FireGenerator : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject camera;
    public GameObject playSpace;
    public GameObject firePrefeb;
    public GameObject fireParent;
    public Text text;
    public int fireCount = 30;
    private readonly List<GameObject> _fires = new List<GameObject>();
    void Start()
    {
        text.transform.SetAsFirstSibling();
        GenerateFire(new Vector3(-5.2722211f, 0.4193834f, -5.204135f));
        
    }

    public void GenerateFire(Vector3 basePos)
    {
        for (int i = 0; i < fireCount; i++)
        {
            float randomPosX = UnityEngine.Random.Range(-2000, 2000) / 1000.0f;
            float randomPosY = UnityEngine.Random.Range(-2000, 2000) / 1000.0f;
            float randomPosZ = UnityEngine.Random.Range(-2000, 2000) / 1000.0f;
            var posDiff = new Vector3(randomPosX, randomPosY, randomPosZ);
            var newPos = basePos + posDiff;
            var fire = Instantiate(firePrefeb, newPos, Quaternion.identity);
            fire.transform.SetParent(fireParent.transform);

            float randomSize = UnityEngine.Random.Range(1000, 4000) / 300.0f;
            fire.gameObject.transform.localScale = Vector3.one * randomSize;
            fire.transform.SetAsFirstSibling();
        }
    }

    /*private async Task SpawnFireAsync(int delay = 0)
    {
        try
        {
            
        }
        catch (Exception ex)
        {
            await GameObjectCounter.SendLogAsync($"{ex.Message}/{ex.StackTrace}");
        }
    }*/

    // Update is called once per frame
    void Update()
    {
        
    }
}
