using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//public static bool PlayFullScreenMovie(string /Users/David/Desktop/KTH/Github/MR4BusinessCard/Assets/StreamingAssets, Color bgColor = Color.black, FullScreenMovieControlMode controlMode = FullScreenMovieControlMode.Full, FullScreenMovieScalingMode scalingMode = FullScreenMovieScalingMode.AspectFit);
public class vbScript : MonoBehaviour {

	private string movPath = "Jonna2.mov";

	// Use this for initialization
	void Start () {

		if (Input.GetButtonDown ("Jump")) {
			StartCoroutine (PlayStreamingVideo (movPath));  //ska spela om man trycker på mellanslag
		}
	}

	private IEnumerator PlayStreamingVideo(string url)
	{
		Handheld.PlayFullScreenMovie(url, Color.black, FullScreenMovieControlMode.Full, FullScreenMovieScalingMode.AspectFill);
		yield return new WaitForEndOfFrame();
		yield return new WaitForEndOfFrame();
		Debug.Log("Video playback completed.");
	}
}
