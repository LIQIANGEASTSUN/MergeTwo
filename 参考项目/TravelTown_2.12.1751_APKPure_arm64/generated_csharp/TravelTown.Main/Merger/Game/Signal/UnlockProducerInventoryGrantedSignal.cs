using System;
using UnityEngine;

namespace Merger.Game.Signal
{
	public class UnlockProducerInventoryGrantedSignal
	{
		public Vector2 Position;

		public Func<GameObject> GetPrefabInstance;

		public UnlockProducerInventoryGrantedSignal(Vector2 position, Func<GameObject> getPrefabInstance)
		{
		}
	}
}
