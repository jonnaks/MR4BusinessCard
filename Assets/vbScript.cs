using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class vbScript : MonoBehaviour, IVirtualButtonEventHandler {

	#region PUBLIC_METHODS

	/// <summary>
	/// Called when the virtual button has just been pressed:
	/// </summary>
	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb)
	{
		Debug.Log("OnButtonPressed for " + vb.name );
		Application.OpenURL ("http://www.google.com");

	}


	/// <summary>
	/// Called when the virtual button has just been released:
	/// </summary>
	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb)
	{
		Debug.Log("OnButtonReleased for " + vb.name );
	}

	#endregion // PUBLIC_METHODS



	#region UNTIY_MONOBEHAVIOUR_METHODS

	void Start()
	{

		// Register with the virtual buttons TrackableBehaviour
		VirtualButtonBehaviour vb = GetComponentInChildren<VirtualButtonBehaviour>();
		if (vb)
		{
			vb.RegisterEventHandler(this);
		}

	}


	void Update()
	{

	}

	#endregion // UNTIY_MONOBEHAVIOUR_METHODS



	#region PRIVATE_METHODS



	#endregion // PRIVATE_METHODS


//	private GameObject vbButtonObject;
//	// Use this for initialization
//	void Start () {
//
//		vbButtonObject = GameObject.Find ("linkedInButton");
//		vbButtonObject.GetComponent<VirtualButtonBehaviour> ().RegisterEventHandler (this);
//	}
//
//	public void OnButtonPressed (VirtualButtonAbstractBehaviour vb){
//
//		Debug.Log ("Button Pressed!!!!!!!!");
//		Application.OpenURL ("http://www.google.com");
//	}
//
//	public void OnButtonReleased (VirtualButtonAbstractBehaviour vb){
//		Debug.Log ("Button Released!!!!!!!!!");
//	}
//		

}
