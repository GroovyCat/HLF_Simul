using UnityEngine;

public class ImageRotator : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject CameraObject;
    private float startX;
    private float startZ;

    void Start()
    {
        startX = CameraObject.transform.position.x;
        startZ = CameraObject.transform.position.z;
    }

    // Update is called once per frame
    void Update()
    {
        Transform cameraTransform = Camera.main.transform;
        var cameraY = cameraTransform.rotation.eulerAngles.y;
        CameraObject.transform.rotation = Quaternion.Euler(90, (float)cameraY, CameraObject.transform.rotation.z);
        CameraObject.transform.position = new Vector3(cameraTransform.position.x/5f + startX, CameraObject.transform.position.y, cameraTransform.position.z/5f + startZ);
    }
}
