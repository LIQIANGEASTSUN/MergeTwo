using System;
using UnityEngine;

namespace FAT
{
	public class MBBoardOrderAttachment
	{
		[NonSerialized]
		public Transform attachRoot;

		[NonSerialized]
		public string resLoadRequestId;

		[NonSerialized]
		public GameObject objLoaded;

		public bool HasLoaded => false;

		public GameObject AttachedObject => null;

		public string poolKey { get; set; }

		public void Clear()
		{
		}

		public void OnPrefabLoaded(GameObject obj, string curResId, Action<GameObject> act)
		{
		}

		public void RefreshAttachment(string res, Transform root, Action<GameObject> act)
		{
		}
	}
}
