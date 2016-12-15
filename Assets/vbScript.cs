using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class vbScript : MonoBehaviour, IVirtualButtonEventHandler {

	private GameObject vbButtonObject;
	// Use this for initialization
	void Start () {

		vbButtonObject = GameObject.Find ("linkedInButton");
		vbButtonObject.GetComponent<VirtualButtonBehaviour> ().RegisterEventHandler (this);
	}

	public void OnButtonPressed (VirtualButtonAbstractBehaviour vb){

		Debug.Log ("Button Pressed!!!!!!!!!");
	}

	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb){
		Debug.Log ("Button Released!!!!!!!!!");
	}

	void Update () {

	}

}
