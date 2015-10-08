using UnityEngine;
using System.Collections;

public class DisplayInfo : MonoBehaviour
{

	// target impact on game
    public string name;
	public float radiusInfo = 0.0f;
	public double distanceInfo = 0;



	// when collided with another gameObject
	void OnCollisionEnter (Collision newCollision)
	{


		// only do stuff if hit by a projectile
        if (newCollision.gameObject.tag == "Selector")
        {


			// if game manager exists, make adjustments based on target properties
			if (GameManager.gm) {
                GameManager.gm.targetHit(name,radiusInfo, distanceInfo);
			}

            Destroy(newCollision.gameObject);
		}
	}

}
