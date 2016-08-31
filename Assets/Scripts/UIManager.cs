using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityStandardAssets.ImageEffects;

public class UIManager : MonoBehaviour 
{
    public enum UIState {main,inGame, endGame};
    public GameObject mainMenu;
    public GameObject inGame;
    public GameObject endScreen;
    public UIState gameState;
    public GameObject mainCamera;

    public Text lblScore;


    // Static singleton property
    public static UIManager Instance { get; private set; }

    void Awake()
    {

        // Save a reference to the AudioHandler component as our singleton instance
        Instance = this;
    }

	// Use this for initialization
	void Start () 
    {
        gameState = UIState.inGame;
	}
	
	// Update is called once per frame
	void Update () 
    {
        switch (gameState)
        {
            case UIState.main:
                mainMenu.gameObject.SetActive(true);
                inGame.gameObject.SetActive(false);
                endScreen.gameObject.SetActive(false);

                mainCamera.GetComponent<BlurOptimized>().enabled = false;
                break;
            case UIState.inGame:
                mainMenu.gameObject.SetActive(false);
                inGame.gameObject.SetActive(true);
                endScreen.gameObject.SetActive(false);


                //lblScore.transform.position = new Vector3(0, 0, 0);
                mainCamera.GetComponent<BlurOptimized>().enabled = false;
                break;
            case UIState.endGame:
                mainMenu.gameObject.SetActive(false);
                inGame.gameObject.SetActive(true);
                endScreen.gameObject.SetActive(true);

                lblScore.transform.position = new Vector3(177, 314 + 190, 0);
                mainCamera.GetComponent<BlurOptimized>().enabled = true;
                break;
        }
	}

    public void restartGame()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("SnakeDown");
    }
}
