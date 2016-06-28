using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class GameManager : MonoBehaviour {

	// make game manager public static so can access this from other scripts
	public static GameManager gm;

	// public variables	
    public Text nameDisplay;
	public Text radiusDisplay;
	public Text distanceDisplay;
    public GameObject Credits;
    public GameObject Instructions;
    bool _inMenu = false;

    public bool getInMenu()
    {
        return _inMenu;
    }

    public void setInMenu(bool value)
    {
        _inMenu = value;
    }

	// setup the game
	void Start () {
		// get a reference to the GameManager component for use by other scripts
		if (gm == null) 
			gm = this.gameObject.GetComponent<GameManager>();	}

	// this is the main game event loop
	void Update () 
    {

	}


	// public function that can be called to update the score or time
    public void targetHit(string name,float radius, double distance)
	{
		// update the text UI
        nameDisplay.text = name;
        radiusDisplay.text = radius.ToString() + " km";
        distanceDisplay.text = distance.ToString() + " km";
	}

	// public function that can be called to restart the game
	public void RestartGame ()
	{
		// we are just loading a scene (or reloading this scene)
		// which is an easy way to restart the level
		Application.LoadLevel (0);
	}	

    public void showMenu (int menuToShow)
    {
        switch (menuToShow)
        {
            case 1:
                hideMenus();
                Instructions.SetActive(true);
                break;
            case 2:
                hideMenus();
                Credits.SetActive(true);
                break;
            default:
                hideMenus();
                break;
        }
    }

    public void hideMenus()
    {
        Instructions.SetActive(false);
        Credits.SetActive(false);
    }

    public void PauseGame()
    {
        Time.timeScale = 0;
        setInMenu(true);
    }

    public void UnpauseGame()
    {
        setInMenu(false);
        Time.timeScale = 1;
        
    }

}
