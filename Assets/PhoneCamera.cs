using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PhoneCamera : MonoBehaviour
{
    private bool camAvailable;
    private WebCamTexture backCam;
    private WebCamTexture frontCam;

    private Texture defaultBackground;

    public RawImage background;
    public AspectRatioFitter fit;

    private void Start()
    {
        Debug.Log("on start");

        defaultBackground = background.texture;
        WebCamDevice[] devices = WebCamTexture.devices;
        if(devices.Length == 0)
        {
            Debug.Log("No Camera Detected");
            camAvailable = false;
            return;
        }
        for(int i = 0; i<devices.Length; i++)
        {
            if(!devices[i].isFrontFacing)
            {
                backCam = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
            }
            else if(devices[i].isFrontFacing)
            {
                frontCam = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
            }
        }
        if(backCam == null)
        {
            Debug.Log("Not able to find back camera");
            return;
        }
        backCam.Play();
        background.texture = backCam;

        camAvailable = true;

    }

    private void Update()
    {
        if (!camAvailable)
            return;
        float ratio = (float)backCam.width / (float)backCam.height;
        fit.aspectRatio = ratio;

        float scaleY = backCam.videoVerticallyMirrored ? -1f : 1f;
        background.rectTransform.localScale = new Vector3(1f,scaleY,1f);

        int orient = -backCam.videoRotationAngle;
        background.rectTransform.localEulerAngles = new Vector3(0, 0, orient);
    }

    public void SwitchCamera()
    {
        //if(background.texture == backCam)
        if (backCam.isPlaying)
        {
            backCam.Stop();
            frontCam.Play();
        }
        else
        {
            frontCam.Stop();
            backCam.Play();
        }
    }
}
