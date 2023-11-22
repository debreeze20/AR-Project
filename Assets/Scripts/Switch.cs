using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Switch : MonoBehaviour
{

    public GameObject[] tombol;
    int index;
    // Start is called before the first frame update
    void Start()
    {
        index = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (index >= 14) index = 14;
        if (index < 0) index = 0;

        if (index == 0) {
            tombol[0].gameObject.SetActive(true);
        }
    }

    public void Next() {
        index += 1;
        for (int i = 0; i < tombol.Length; i++) {
            tombol[i].gameObject.SetActive(false);
            tombol[index].gameObject.SetActive(true);
        }
            Debug.Log(index);
    }

    public void Prev() {
        index -= 1;
        for (int i = 0; i < tombol.Length; i++) {
            tombol[i].gameObject.SetActive(false);
            tombol[index].gameObject.SetActive(true);
        }
            Debug.Log(index);
    }
}
