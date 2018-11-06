using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalScript : MonoBehaviour {

    LineRenderer line;

    void Start()
    {
        line = GetComponent<LineRenderer>();
        line.SetWidth(.05f, .05f);
    }

    void Update()
    {
        //current ring position
        line.SetPosition(0, transform.parent.position);
        //respective ring position on the ground
        line.SetPosition(1, new Vector3(transform.parent.position.x, 0, transform.parent.position.z));
    }

}
