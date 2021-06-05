/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba
*/

namespace NatSuite.Examples {

    using UnityEngine;
    using System.Collections;
    using UnityEngine.UI;
    using Recorders;
    using Recorders.Inputs;
    using UnityEngine.UI;
    using Recorders.Clocks;

    public class Giffy : MonoBehaviour {
        [Header("Marshalls Stuff")]
        public FindCamera findCamera;
        public RawImage cameraImage;
        private WebCamTexture recorderTexture;


        [Header("GIF Settings")]
        //public int imageWidth = 640;
        //public int imageHeight = 480;
        public float frameDuration = 0.1f; // seconds

        //private GIFRecorder recorder;
        private CameraInput cameraInput;
        private WebCamTexture webCamTexture;
        private MP4Recorder mp4Recorder;
        private IClock clock;
        private bool recording;
        private Color32[] pixelBuffer;

        /*
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


        }*/
        /*
        public void StartRecording () {
            // Start recording
            recorder = new GIFRecorder(cameraImage.texture.width, cameraImage.texture.height, frameDuration);
            cameraInput = new CameraInput(recorder, Camera.main);
            // Get a real GIF look by skipping frames
            //cameraInput.frameSkip = 4;
        }
        */



        //--
        /*
        public async void StopRecording () {
            // Stop the recording
            cameraInput.Dispose();
            var path = await recorder.FinishWriting();
            // Log path
            Debug.Log($"Saved animated GIF image to: {path}");
            Application.OpenURL($"file://{path}");
        }
        */


        //-mp4


        public void StartRecording()
        {
            //recorderTexture = findCamera.GetCurrentCam();
            
            // Start recording
            clock = new RealtimeClock();
            mp4Recorder = new MP4Recorder(recorderTexture.width, recorderTexture.height, 30);
            pixelBuffer = recorderTexture.GetPixels32();
            recording = true;
        }
        public async void StopRecording()
        {
            // Stop recording
            recording = false;
            var path = await mp4Recorder.FinishWriting();
            // Playback recording
            Debug.Log($"Saved recording to: {path}");
            Handheld.PlayFullScreenMovie($"file://{path}");
        }

        //IEnumerator Start()
        void Start()
        {
            cameraImage = findCamera.background;
            recorderTexture = findCamera.GetCurrentCam();
            // Request camera permission
            //yield return Application.RequestUserAuthorization(UserAuthorization.WebCam);
            //if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
            //    yield break;
            //// Start the WebCamTexture
            recorderTexture = new WebCamTexture(1280, 720, 30);
            recorderTexture.Play();
            // Display webcam
            //yield return new WaitUntil(() => recorderTexture.width != 16 && recorderTexture.height != 16); // Workaround for weird bug on macOS
            cameraImage.texture = webCamTexture;
            //aspectFitter.aspectRatio = (float)webCamTexture.width / webCamTexture.height;
            //return new WaitUntil(() => webCamTexture.width != 16 && webCamTexture.height != 16);
        }

        void Update()
        {
            // Record frames from the webcam
            if (recording && recorderTexture.didUpdateThisFrame)
            {
                recorderTexture.GetPixels32(pixelBuffer);
                mp4Recorder.CommitFrame(pixelBuffer, clock.timestamp);
            }
        }

    }
}