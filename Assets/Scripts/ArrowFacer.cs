using UnityEngine;
using UnityEngine.SceneManagement;

public class ArrowFacer : MonoBehaviour
{
    public GameObject[] targets;
    public GameObject arrow;

    public static GameObject[] Targets;
    public static int TargetIndex = 0;
    void Start()
    {
        Targets = targets;
    }

    // Update is called once per frame
    void Update()
    {
        var target = targets[TargetIndex];
        var targetPos = target.transform.position;
        var arrowPos = arrow.transform.position;

        if (SceneManager.GetActiveScene().name == "Scenario1" || SceneManager.GetActiveScene().name == "Scenario2")
        {
            if (TouchEvent.RescueCount < 2)
                targetPos.Set(targetPos.x - 0.5f, 0, targetPos.z);
            else targetPos.Set(targetPos.x, 0, targetPos.z);
        }
        else targetPos.Set(targetPos.x, 0, targetPos.z);

        arrowPos.Set(arrowPos.x, 0, arrowPos.z);
        var lookPos = targetPos - arrowPos;
        var rotation = Quaternion.LookRotation(lookPos, Vector3.zero);
        arrow.transform.rotation = rotation;
    }
}
