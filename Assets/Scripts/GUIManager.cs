using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using UnityEngine.UI;

public class GUIManager : MonoBehaviour
{
     
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void onMain() {
        SceneManager.LoadScene("Menu");
    }

    public void onGuide() {
        SceneManager.LoadScene("Guide");
    }

    public void onStart() {
        SceneManager.LoadScene("Object");
    }

    public void onQuiz() {
        SceneManager.LoadScene("Quiz");
    }
    
    public void onBottle() {
        SceneManager.LoadScene("Bottle");
    }

    public void botHow() {
        SceneManager.LoadScene("bottleHow");
    }

    public void onSpoon() {
        SceneManager.LoadScene("Spoon");
    }

    public void spoonHow() {
        SceneManager.LoadScene("spoonHow");
    }

    public void onStyrofoam() {
        SceneManager.LoadScene("Styrofoam");
    }
    public void styHow() {
        SceneManager.LoadScene("styrofoamHow");
    }

    public void onQuit() {
        SceneManager.LoadScene("Menu");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
