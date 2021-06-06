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



        [Header(@"Recording")]
        public int videoWidth = 1080;
        public int videoHeight = 1920;
        public bool recordMicrophone;

        //private GIFRecorder recorder;
        private CameraInput cameraInput;
        private WebCamTexture webCamTexture;
        private MP4Recorder mp4Recorder;
        //private IClock clock;
        private bool recording;
        private Color32[] pixelBuffer;


        //audio
        private AudioInput audioInput;
        private AudioSource microphoneSource;





        private IEnumerator Start()
        {
            cameraImage = findCamera.background;
            recorderTexture = findCamera.GetCurrentCam();
            //recorderTexture = new WebCamTexture(1280, 720, 30);
            //recorderTexture.Play();
            ////yield return new WaitUntil(() => recorderTexture.width != 16 && recorderTexture.height != 16); // Workaround for weird bug on macOS
            //cameraImage.texture = webCamTexture;


            //new stuff
            // Start microphone
            microphoneSource = gameObject.AddComponent<AudioSource>();
                microphoneSource.mute =
                microphoneSource.loop = true;
                microphoneSource.bypassEffects =
                microphoneSource.bypassListenerEffects = false;
                microphoneSource.clip = Microphone.Start(null, true, 1, AudioSettings.outputSampleRate);
                yield return new WaitUntil(() => Microphone.GetPosition(null) > 0);
                microphoneSource.Play();
            
        }

        public void StartRecording()
        {
            // Start recording
            var frameRate = 30;
            var sampleRate = AudioSettings.outputSampleRate;
            var channelCount = (int)AudioSettings.speakerMode;
            var clock = new RealtimeClock();
            mp4Recorder = new MP4Recorder(videoWidth, videoHeight, frameRate, sampleRate, channelCount, audioBitRate: 96_000);
            // Create recording inputs
            cameraInput = new CameraInput(mp4Recorder, clock, Camera.main);
            audioInput = new AudioInput(mp4Recorder, clock, microphoneSource, true);
            // Unmute microphone
            microphoneSource.mute = audioInput == null;
        }

        public async void StopRecording()
        {
            // Mute microphone
            microphoneSource.mute = true;
            // Stop recording
            audioInput?.Dispose();
            cameraInput.Dispose();
            var path = await mp4Recorder.FinishWriting();
            // Playback recording
            Debug.Log($"Saved recording to: {path}");
            Handheld.PlayFullScreenMovie($"file://{path}");

        }

        private void OnDestroy()
        {
            // Stop microphone
            microphoneSource.Stop();
            Microphone.End(null);
        }



    }
}