using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class gameManager : MonoBehaviour 
{
    //Score
    public int score = 0;
    public Text txtScore;

    //In Game Assets
    public Tile[] tiles;
    public GameObject pellet;

    //Game Time
    public bool paused = false;
    public float seconds = 0.0f;
    public float minutes = 0.0f;
    public float hours = 0.0f;
    public Text lblTime;

    //UI instance
    private UIManager _uiManager;
    public GameObject endGameUI;

    //Game Settings
	public int targetFrameRate = 75;

    //player State
    public bool died = false;

    // Static singleton property
    public static gameManager Instance { get; private set; }

    void Awake()
    {
        Instance = this;
		//Application.targetFrameRate = targetFrameRate;
        //QualitySettings.vSyncCount = 0;  // VSync must be disabled
    }

	// Use this for initialization
	void Start ()
    {
        //Screen.SetResolution (354, 629, false);  //TODO - DELETE IF UNECESSARY

        //Reset the player state
        died = false;

        //Get all the tiles on the board
        tiles = GameObject.FindObjectsOfType<Tile>();

        //add the 
        GameObject p = Instantiate(pellet);
        p.transform.position = tiles[Random.Range( 0, tiles.Length )].pelletLocation;   

        GameObject p1 = Instantiate(pellet);
        p1.transform.position = tiles[Random.Range( 0, tiles.Length )].pelletLocation;  


        updateUI();
        _uiManager = this.gameObject.GetComponent<UIManager>();
	}
	
	// Update is called once per frame
	void Update () 
    {
        if (!died)
        {
            seconds += Time.deltaTime;
       
            if (seconds > 60)
            {
                minutes += 1;
                seconds = 0;
            }
        
            if (minutes > 60)
            {
                hours += 1;
                minutes = 0;
            }
        }
        else
        {
            StartCoroutine("endGame");
        }
	}

    void updateUI()
    {
        txtScore.text = score.ToString();
    }

    public void increaseScore()
    {
        score++;
        updateUI();
    }

    public void SetTileSpeed()
    {
        foreach(Tile tile in tiles)
        {
            tile.increaseTimers();
        }
    }

    public void respawnPellet(GameObject p)
    {

        p.GetComponentInParent<Transform>().position = tiles[Random.Range( 0, tiles.Length )].pelletLocation;
    }

    IEnumerator endGame()
    {
        yield return new WaitForSeconds(1f);
        gameManager.Instance._uiManager.gameState = UIManager.UIState.endGame;

        while (endGameUI.GetComponent<CanvasGroup>().alpha < 1)
        {
            endGameUI.GetComponent<CanvasGroup>().alpha += Time.deltaTime;
            yield return null;
        }

        lblTime.text = minutes + " : " + ((int)seconds).ToString("00");

    }

    //Game Pause Boolean Toggle
    public bool pauseGame()
    {
        if (paused == false)
        {
            //pauses the game and sets the game speed to 0
            Time.timeScale = 0;
            paused = true;
        }
        else
        {
            //unpauses the game and sets the game speed to 1
            Time.timeScale = 1;
            paused = false;
        }

        return paused;
    }


}
