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
    using NatSuite.Devices;


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


        //audio
        private IAudioDevice audioDevice;
        private WAVRecorder audioRecorder;


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

            var frameRate = 30;
            var sampleRate = audioDevice.sampleRate;//outputSampleRate
            var channelCount = audioDevice.channelCount;
            //recorder = new MP4Recorder(videoWidth, videoHeight, frameRate, sampleRate, channelCount, audioBitRate: 96_000);

            // Start recording
            clock = new RealtimeClock();
            mp4Recorder = new MP4Recorder(recorderTexture.width, recorderTexture.height, frameRate, sampleRate, channelCount, audioBitRate: 96_000);
            pixelBuffer = recorderTexture.GetPixels32();
            recording = true;

            //audio
            // Create a recorder
            audioRecorder = new WAVRecorder(audioDevice.sampleRate, audioDevice.channelCount);
            // Start the microphone
            audioDevice.StartRunning((sampleBuffer, timestamp) => {
                // And pass sample buffers directly to the recorder
                audioRecorder.CommitSamples(sampleBuffer, timestamp);
            });
        }
        public async void StopRecording()
        {
            // Stop streaming audio samples to the recorder
            audioDevice.StopRunning();
            // Then stop recording
            var audioPath = await audioRecorder.FinishWriting();

            Debug.Log($"Saved audio to: {audioPath}");


            // Stop recording
            recording = false;
            //--how to preview...should you upload then preview
            //if you are connected to the wifi an

            var videoPath = await mp4Recorder.FinishWriting();

            // Playback recording
            Debug.Log($"Saved recording to: {videoPath}");
            Handheld.PlayFullScreenMovie($"file://{videoPath}");


            //-if you are not connected to wifi 
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


            //-microphone
            var criterion = MediaDeviceQuery.Criteria.AudioDevice;
            var query = new MediaDeviceQuery(criterion);
            audioDevice = query.currentDevice as AudioDevice;
            Debug.Log($"{audioDevice}");

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