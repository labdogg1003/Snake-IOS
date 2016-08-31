using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class gameManager : MonoBehaviour 
{
    int score = 0;
    public Text txtScore;
    public Tile[] tiles;
    public GameObject pellet;
    public float seconds = 0.0f;
    public float minutes = 0.0f;
    public float hours = 0.0f;
    public bool died = false;
    private UIManager _uiManager;
    public GameObject endGameUI;
    public Text lblTime;
	public int targetFrameRate = 75;

    // Static singleton property
    public static gameManager Instance { get; private set; }

    void Awake()
    {

        // Save a reference to the AudioHandler component as our singleton instance
        Instance = this;
		//Application.targetFrameRate = targetFrameRate;
        //QualitySettings.vSyncCount = 0;  // VSync must be disabled
    }

	// Use this for initialization
	void Start () 
    {
        Screen.SetResolution (354, 629, false);
        died = false;
        tiles = GameObject.FindObjectsOfType<Tile>();
        GameObject p = Instantiate(pellet);
        p.transform.position = tiles[Random.Range( 0, tiles.Length )].pelletLocation;   

        GameObject p1 = Instantiate(pellet);
        p1.transform.position = tiles[Random.Range( 0, tiles.Length )].pelletLocation;  

        updateUI();
        _uiManager = this.gameObject.GetComponent<UIManager>();
        endGameUI.GetComponent<CanvasGroup>().alpha = 0;
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


}
