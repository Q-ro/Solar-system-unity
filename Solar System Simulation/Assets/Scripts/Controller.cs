using UnityEngine;
using System.Collections;

public class Controller : MonoBehaviour {
	
	// public variables
	public float moveSpeed = 3.0f;
	public float gravity = 9.81f;

	private CharacterController myController;

	// Use this for initialization
	void Start () {
		// store a reference to the CharacterController component on this gameObject
		// it is much more efficient to use GetComponent() once in Start and store
		// the result rather than continually use getComponent() in the Update function
		myController = gameObject.GetComponent<CharacterController>();
	}
	
	// Update is called once per frame
	void Update () {
		// Determine how much should move in the z-direction
		Vector3 movementZ = Input.GetAxis("Vertical") * Vector3.forward * moveSpeed * Time.deltaTime;

		// Determine how much should move in the x-direction
		Vector3 movementX = Input.GetAxis("Horizontal") * Vector3.right * moveSpeed * Time.deltaTime;

        // Determine how much should move in the y-direction
        Vector3 movementY = Input.GetAxis("Mouse ScrollWheel") *Vector3.up * moveSpeed * Time.deltaTime;

        //Debug.Log("Movement Y: " + movementY + " Scroll : " + Input.GetAxis("Mouse ScrollWheel"));


		// Convert combined Vector3 from local space to world space based on the position of the current gameobject (player)
        Vector3 movement = transform.TransformDirection(movementZ + movementX + movementY);
		
		// Apply gravity (so the object will fall if not grounded)
		//movement.y -= gravity * Time.deltaTime;

		//Debug.Log ("Movement Vector = " + movement);

        //Show the credits menu
        if (Input.GetButtonDown("C"))
        {
            if(GameManager.gm.getInMenu() == false)
            {
                GameManager.gm.showMenu(2);
                GameManager.gm.PauseGame();
            }
            
        }

        //Show the Instructions menu
        if (Input.GetButtonDown("I"))
        {
            if (GameManager.gm.getInMenu() == false)
            {
                GameManager.gm.showMenu(1);
                GameManager.gm.PauseGame();
            }
        }

        if (Input.GetButtonDown("Cancel"))
        {
            if (GameManager.gm.getInMenu() == true)
            {
                GameManager.gm.hideMenus();
                GameManager.gm.UnpauseGame();
            }
        }

		// Actually move the character controller in the movement direction if the player is not curretly looking at a menu
        if(GameManager.gm.getInMenu() != true)
        {
            myController.Move(movement);
        }
		
	}
}
