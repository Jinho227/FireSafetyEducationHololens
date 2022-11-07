using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class Timer : MonoBehaviour
{
    private bool isEnded = false;
    private float timeCurrent;
    private float timeStart;
    public TextMeshPro time;

    private void Update()
    {
        if (!isEnded)
            return;
        else
            checkTimer();
    }

    private void checkTimer()
    {
        timeCurrent = Time.time - timeStart;
        time.SetText($"Time : {timeCurrent:N2}");
    }

    public void startTime()
    {
        timeStart = Time.time;
        timeCurrent = 0;
        time.SetText($"Time : {timeCurrent:N2}");
        isEnded = true;
    }

    public void endTime()
    {
        time.SetText($"Time : {timeCurrent:N2}");
        isEnded = false;
    }
}
