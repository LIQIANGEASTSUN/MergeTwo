using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "ItemLinkData", menuName = "Scriptable/NewSpawner/ItemLinkData", order = 1)]
	public class ItemLinkScriptableData : ScriptableObject
	{
		[Serializable]
		public class ItemLinkScriptableSetData
		{
			public int SetId;

			public int DefaultSetId;

			public BoardItemSetData ItemSetData;
		}

		[HideInInspector]
		public int ChainIndex;

		[HideInInspector]
		public int LinkIndex;

		public bool ExcludeFromInventory;

		public bool SpawnerArchiveRemovable;

		public ItemLinkScriptableSetData SpawnerSet;

		public List<ItemLinkScriptableSetData> ItemSets;

		public ItemLinkID LinkID => default(ItemLinkID);

		public ItemLinkModel ToModel()
		{
			return null;
		}

		public ItemLinkScriptableSetData GetItemSet(int setId)
		{
			return null;
		}
	}
}
