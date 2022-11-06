using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unfreeze : MonoBehaviour
{
    Rigidbody rigidbody;

    public void unfreeze()
    {
        rigidbody = GetComponent<Rigidbody>();
        rigidbody.constraints = RigidbodyConstraints.None;
    }
}
