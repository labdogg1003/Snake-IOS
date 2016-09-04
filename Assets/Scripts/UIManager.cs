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
    public Text lblScoreEndGame;

    public Button btnPause;
    public Sprite play;

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
                gameManager.Instance.paused = true;

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
                inGame.gameObject.SetActive(false);
                endScreen.gameObject.SetActive(true);

                lblScoreEndGame.text = gameManager.Instance.score.ToString();
                mainCamera.GetComponent<BlurOptimized>().enabled = true;
                break;
        }
	}

    public void restartGame()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("SnakeDown");
        setState();
    }

    public void quitGame()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("SnakeDownTitle");
    }
        
    public void btnPauseGame()
    {
        bool paused = gameManager.Instance.pauseGame();

        if (paused)
        {
            btnPause.GetComponent<Image>().overrideSprite = play;
        }
        else
        {
            btnPause.GetComponent<Image>().overrideSprite = null;
        }
    }

    public void setState()
    {
        this.gameState = UIState.inGame;
    }
}
