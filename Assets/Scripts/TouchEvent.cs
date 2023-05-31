using Microsoft.MixedReality.Toolkit;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TouchEvent : MonoBehaviour
{
    public Text text;
    public GameObject holoLensCamera;
    public static int RescueCount;

    public void OnButtonClicked()
    {
        RescueCount++;
        if (SceneManager.GetActiveScene().name == "Scenario1" || SceneManager.GetActiveScene().name == "Scenario2")
        {
            if (RescueCount <= 2)
                text.text = $"Rescued! ({RescueCount}/2)";
        }
        else if (SceneManager.GetActiveScene().name == "Scenario3")
        {
            if (RescueCount <= 2)
                text.text = $"Rescued! ({RescueCount}/2)";
            else if (RescueCount <= 4)
                text.text = $"Rescued! ({RescueCount}/4)";
        }
    }

    // Update is called once per frame
    async void Update()
    {
        var holoLensPosition = holoLensCamera.transform.position;
        if (SceneManager.GetActiveScene().name == "Scenario1")
        {
            if (RescueCount == 0 && ArrowFacer.TargetIndex == 0 && holoLensPosition.x < -3)
                ArrowFacer.TargetIndex = 1;
            else if (RescueCount <= 2 && ArrowFacer.TargetIndex <= 2 && ArrowFacer.TargetIndex > 0)
                ArrowFacer.TargetIndex = RescueCount + 1;

            if (ArrowFacer.TargetIndex == 3 && holoLensPosition.z > -2)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 4 && holoLensPosition.x < -39)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 5 && holoLensPosition.y < -0.5)
                text.text = "DONE!";
        }
        else if (SceneManager.GetActiveScene().name == "Scenario2")
        {
            if (RescueCount == 0 && ArrowFacer.TargetIndex == 0 && holoLensPosition.x < -3)
                ArrowFacer.TargetIndex = 1;
            else if (RescueCount <= 2 && ArrowFacer.TargetIndex <= 2 && ArrowFacer.TargetIndex > 0)
                ArrowFacer.TargetIndex = RescueCount + 1;

            if (ArrowFacer.TargetIndex == 3 && holoLensPosition.z > -2)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 4 && holoLensPosition.x < -25)
            {
                var fireGenerator = GetComponent<FireGenerator>();
                fireGenerator.GenerateFire(holoLensPosition);
                ArrowFacer.TargetIndex++;
            }

            if (ArrowFacer.TargetIndex == 5 && holoLensPosition.x > -11)
                ArrowFacer.TargetIndex++;
            
            if (ArrowFacer.TargetIndex == 6 && holoLensPosition.z > 5.0)
            {
                text.text = "DONE!";
            }

        }
        else if (SceneManager.GetActiveScene().name == "Scenario3")
        {
            if (RescueCount == 0 && ArrowFacer.TargetIndex == 0 && holoLensPosition.x < -3)
                ArrowFacer.TargetIndex = 1;
            else if (RescueCount <= 2 && ArrowFacer.TargetIndex <= 2 && ArrowFacer.TargetIndex > 0)
                ArrowFacer.TargetIndex = RescueCount + 1;

            if (ArrowFacer.TargetIndex == 3 && holoLensPosition.z > -2)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 4 && holoLensPosition.x < -25)
            {
                var fireGenerator = GetComponent<FireGenerator>();
                fireGenerator.GenerateFire( new Vector3(-25, 0, -6));
                text.text = $"Rescued! ({RescueCount}/4)";
                ArrowFacer.TargetIndex++;
            }
            
            if (ArrowFacer.TargetIndex >= 5 && ArrowFacer.TargetIndex <= 6)
            {
                ArrowFacer.TargetIndex = RescueCount + 3;
            }

            if (ArrowFacer.TargetIndex == 7 && holoLensPosition.z > -2)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 8 && holoLensPosition.x < -39)
                ArrowFacer.TargetIndex++;

            if (ArrowFacer.TargetIndex == 9 && holoLensPosition.y < -0.5)
                text.text = "DONE!";
        }
    }
}
