using UnityEngine;

public class HumanButtonInteraction : MonoBehaviour
{
    // Start is called before the first frame update
    public void OnButtonClicked() => gameObject.SetActive(false);
}
