using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeMaterial : MonoBehaviour
{
    [SerializeField] Material basic;
    [SerializeField] Material invisiable;
    // Start is called before the first frame update


    public void changeBasic()
    {
        this.gameObject.GetComponent<SpriteRenderer>().material = basic;
    } 
    
    public void changeInvisiable()
    {
        this.gameObject.GetComponent<SpriteRenderer>().material = invisiable;
    }
}
