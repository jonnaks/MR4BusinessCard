using UnityEngine;
using System.Collections;
using Vuforia;

public class vbscript : MonoBehaviour, IVirtualButtonEventHandler{

	private GameObject vbButtonObject;
	private GameObject manInSuit;
	// Use this for initialization
	void Start () {
		vbButtonObject = GameObject.Find ("actionButton");
		vbButtonObject.GetComponent<VirtualButtonBehaviour> ().RegisterEventHandler (this);
	}

	public void OnButtonPressed (VirtualButtonAbstractBehaviour vb){
		vbButtonObject = GameObject.Find ("manInSuit");
		Debug.Log ("Button Pressed!!!!!");
		 
	}

	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb){
	
	}

}
