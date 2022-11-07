using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Score : MonoBehaviour
{
    public TextMeshPro scoreText;
    private int score = 0;

    public void AddScore(int num)
    {
        score += num;
        scoreText.SetText("Score : {0}", score);
    }

    public void initScore()
    {
        score = 0;
        scoreText.SetText("Score : {0}", score);
    }

}
