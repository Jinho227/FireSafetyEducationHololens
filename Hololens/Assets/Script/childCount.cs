using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class childCount : MonoBehaviour
{
    bool a = true;
    public GameObject ThirdAudio;

    public static childCount instance;
    void Awake()
    {
    }
    // Update is called once per frame
    void Update()
    {
        if ((this.transform.childCount >= 4) && a)
        {
            ThirdAudio.SetActive(true);
            a = false;
        }
    }
}