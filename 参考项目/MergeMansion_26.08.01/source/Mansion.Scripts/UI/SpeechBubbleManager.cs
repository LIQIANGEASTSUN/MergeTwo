using System;
using System.Collections.Generic;
using Metacore.Rendering;
using UnityEngine;

namespace UI
{
	public class SpeechBubbleManager : MonoBehaviour
	{
		[Tooltip("Area where speech bubbles can appear, defined by RectTransform")]
		[SerializeField]
		public RectTransform uiArea;

		public static readonly float DefaultAutoCloseTime;

		public GameObject bubbleToClone;

		[NonSerialized]
		public List<SpeechBubbleFollower> freeSpeechBubbles;

		[NonSerialized]
		public List<SpeechBubbleFollower> usedSpeechBubbles;

		[NonSerialized]
		public Dictionary<string, SpeechBubbleFollower> currentSpeechBubbles;

		[NonSerialized]
		public ISceneCamera sceneCamera;

		[NonSerialized]
		public ICameraProjection cameraProjection;

		public static SpeechBubbleManager Instance => null;

		public static bool HasInstance => false;

		public SpeechBubbleManager Init(ISceneCamera sceneCamera, ICameraProjection cameraProjection)
		{
			return null;
		}

		public void Awake()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnCameraZoomChanged(float zoom)
		{
		}

		public void OnMergeBoardBecameVisible()
		{
		}

		public SpeechBubbleFollower SetFollowingSpeechBubble(Transform transformToFollow, string id, string localisationKey = "", float delay = 0f, float autoCloseAfter = 0f)
		{
			return null;
		}

		public void RemoveSpeechBubbles()
		{
		}

		public void RemoveSpeechBubble(string id, bool instant = false)
		{
		}
	}
}
