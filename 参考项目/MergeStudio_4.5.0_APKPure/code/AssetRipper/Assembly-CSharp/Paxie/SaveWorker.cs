using System;
using System.Collections.Generic;
using UnityEngine;

namespace Paxie
{
	public class SaveWorker : MonoBehaviour
	{
		public static readonly string SkipDiskWriteKey;

		public Queue<Action> RunInUpdate;

		public static SaveWorker _instance;

		public static SaveWorker Instance => null;

		public void Awake()
		{
		}

		public void Initialize()
		{
		}

		public void SaveMapAsync(object threadInput)
		{
		}

		public void SaveMap(Dictionary<string, object> map, bool skipDiskWrite)
		{
		}

		public void FixedUpdate()
		{
		}
	}
}
