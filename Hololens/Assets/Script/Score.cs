using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public Text scoreText;
    private int score = 0;

    public void AddScore(int num)
    {
        score += num;
        scoreText.text = "Score : " + score;
    }

    public void initScore()
    {
        score = 0;
        scoreText.text = "Score : " + score;
    }

}
