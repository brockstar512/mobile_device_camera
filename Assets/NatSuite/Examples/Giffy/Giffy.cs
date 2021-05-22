/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba
*/

namespace NatSuite.Examples {

    using UnityEngine;
    using Recorders;
    using Recorders.Inputs;
    using UnityEngine.UI;

    public class Giffy : MonoBehaviour {
        [Header("Marshalls Stuff")]
        public FindCamera findCamera;
        public RawImage cameraImage;

        [Header("GIF Settings")]
        public int imageWidth = 640;
        public int imageHeight = 480;
        public float frameDuration = 0.1f; // seconds

        private GIFRecorder recorder;
        private CameraInput cameraInput;


        private void Awake()
        {
            cameraImage = findCamera.background;

        }
        private void Update()
        {
            if (cameraImage != null)
            {
                cameraImage = findCamera.background;
            }
            //findCamera.background.texture;


        }

        public void StartRecording () {
            // Start recording
            recorder = new GIFRecorder(cameraImage.texture.width, cameraImage.texture.height, frameDuration);
            cameraInput = new CameraInput(recorder, Camera.main);
            // Get a real GIF look by skipping frames
            cameraInput.frameSkip = 4;
        }

        public async void StopRecording () {
            // Stop the recording
            cameraInput.Dispose();
            var path = await recorder.FinishWriting();
            // Log path
            Debug.Log($"Saved animated GIF image to: {path}");
            Application.OpenURL($"file://{path}");
        }
    }
}