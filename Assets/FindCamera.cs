using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindCamera : MonoBehaviour
{
    private bool camAvailable;
    private WebCamTexture backCam;
    // Start is called before the first frame update
    private void Start()
    {
        Debug.Log("on start");
        WebCamDevice[] devices = WebCamTexture.devices;
        if (devices.Length == 0)
        {
            Debug.Log("No Camera Detected");
            camAvailable = false;
            return;
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
