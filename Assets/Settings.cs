using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using NatSuite.Recorders.Clocks;




[System.Serializable]
public class CachedVideos
{
    public List<Video> games;
    //load 
    //save

    public CachedVideos()
    {
        games = new List<Video>();
    }

    public CachedVideos(CachedVideos incoming)
    {
        this.games = incoming.games;
    }
    public void RetrieveChachedVideos()
    {
        CachedVideos data = SaveSystem.LoadVideos();
        games = data.games;

    }
    public void KeepVideo()
    {
        SaveSystem.SaveVideoForLaterUpload(this);
    }
}
[System.Serializable]
public class Video
{
    private Color32[] pixelBuffer;
    private IClock clock;
    //figure out audio too

    public Video(Color32[] buffer, IClock timstamp)
    {
        pixelBuffer = buffer;
        clock = timstamp;
    }


}

public static class SaveSystem
{


    public static void SaveVideoForLaterUpload(CachedVideos videosToUpload)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath + "/cachedvideos.txt";
        FileStream stream = new FileStream(path, FileMode.Create);
        CachedVideos data = new CachedVideos(videosToUpload);
        formatter.Serialize(stream, data);
        stream.Close();
    }


    public static CachedVideos LoadVideos()
    {
        string path = Application.persistentDataPath + "/cachedvideos.txt";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);
            CachedVideos data = formatter.Deserialize(stream) as CachedVideos;
            stream.Close();
            return data;
        }
        else
        {
            Debug.LogError("File does not exists in " + path);
            //return default settings?
            CachedVideos data = new CachedVideos();
            return data;

        }

    }
}

