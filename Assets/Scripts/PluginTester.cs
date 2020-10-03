using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class PluginTester : MonoBehaviour
{
    public GameObject player;

    private const string DLL_NAME = "INFR3110-F2020-DLL Plugin";

    [StructLayout(LayoutKind.Sequential)]
    struct Vector3D
    {
        public float x;
        public float y;
        public float z;
    }

    [DllImport(DLL_NAME)]
    private static extern int getID();

    [DllImport(DLL_NAME)]
    private static extern void setID(int id);

    [DllImport(DLL_NAME)]
    private static extern Vector3D getPosition();

    [DllImport(DLL_NAME)]
    private static extern void setPosition(float x, float y, float z);


    

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            setID(64);

            Debug.Log(getID());

            setPosition(5.1f, 6.3f, 3.4f);
            Debug.Log(getPosition().x);
            Debug.Log(getPosition().y);
            Debug.Log(getPosition().z);

            player.transform.position = new Vector3(getPosition().x, getPosition().y,
                getPosition().z);
        }
    }
}
