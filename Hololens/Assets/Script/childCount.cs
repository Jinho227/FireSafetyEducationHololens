using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class childCount : MonoBehaviour
{
    bool a = true;
    public GameObject ThirdAudio;

    public static childCount instance;
    
    bool Count(int count)
    {
        if ((this.transform.childCount >= count) && a)
            return true;
        else
            return false;
    }

    void Awake()
    {
    }
    // Update is called once per frame
    void Update()
    {
        if (Count(4))
        {
            ThirdAudio.SetActive(true);
            a = false;
        }
    }
}