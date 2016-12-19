using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class FBScript : MonoBehaviour, IVirtualButtonEventHandler {

	private GameObject vbButtonObject;
	// Use this for initialization
	void Start () {

		vbButtonObject = GameObject.Find ("FbButton");
		vbButtonObject.GetComponent<VirtualButtonBehaviour> ().RegisterEventHandler (this);
	}

	public void OnButtonPressed (VirtualButtonAbstractBehaviour vb){

		Debug.Log ("Button DOWN");
		Application.OpenURL ("http://www.facebook.com");
	}

	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb){
		Debug.Log ("Button UP");
	}
}
