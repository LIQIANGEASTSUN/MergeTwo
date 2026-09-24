using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemCollectionData", menuName = "Scriptable/Board/BoardItemCollectionData", order = 2)]
	public class BoardItemCollectionData : ScriptableObject
	{
		[FormerlySerializedAs("ItemSetList")]
		[SerializeField]
		public List<int> SerializedItemSetList;

		[NonSerialized]
		[NonSerialized]
		public List<int> _itemSetList;

		public List<int> ItemSetList => null;

		public void Reset()
		{
		}
	}
}
