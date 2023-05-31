using System;
using System.Collections.Generic;
using System.Timers;
using UnityEngine;
using UnityEngine.UI;

public class TextChanger : MonoBehaviour
{
    // Start is called before the first frame update
    public Text text;

    private string GetRandomDirection()
    {
        var directions = new List<string>
        {
            "Forward",
            "Left",
            "Right",
            "Backward"
        };
        var randomIndex = UnityEngine.Random.Range(0, directions.Count);
        return directions[randomIndex];
    }
    void Start()
    {
        var timer = new Timer();
        timer.Interval = 100;
        timer.Elapsed += (s, e) =>
        {
            try
            {
                UnityMainThread.worker.AddJob(() =>
                {
                    var randomInt1 = UnityEngine.Random.Range(1, 320);
                    var randomInt2 = UnityEngine.Random.Range(1, 5);
                    var randomInt3 = UnityEngine.Random.Range(1, 60);
                    var str = $"Status:\n{randomInt1}m left\nETA: {randomInt2}min {randomInt3}sec\nDirection: {GetRandomDirection()}\nNext Direction: {GetRandomDirection()}";
                    text.text = str;
                });
            }
            catch (Exception ex)
            {
                Debug.LogError($"{ex.Message}\n{ex.StackTrace}");
            }
        };
        timer.Start();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
