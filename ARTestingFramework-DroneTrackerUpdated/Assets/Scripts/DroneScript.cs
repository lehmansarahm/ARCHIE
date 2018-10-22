using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class DroneScript : MonoBehaviour {

    public GameObject destSprite;
    public GameObject markerGoal;
    Vector3 parentPos;
    NavMeshAgent agent;

    void Start ()
    {
        agent = GetComponent<NavMeshAgent>();
    }
	
	void Update ()
    {
        if (markerGoal.active)
        {
            parentPos = markerGoal.transform.parent.position;
            destSprite.transform.position = new Vector3(parentPos.x, 0, parentPos.z);
            agent.SetDestination(parentPos);
            PitchCtrl();
        }
    }

    void PitchCtrl()
    {
        transform.GetChild(0).eulerAngles = new Vector3(
            MapRange(agent.velocity.magnitude, 0f, 2f, 0f, 20f),
            transform.eulerAngles.y,
            transform.eulerAngles.z
            );
    }

    float MapRange(float s, float a1, float a2, float b1, float b2)
    {
        if (s >= a2) return b2;
        if (s <= a1) return b1;
        return b1 + (s - a1) * (b2 - b1) / (a2 - a1);
    }

}