using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "ItemChainData", menuName = "Scriptable/NewSpawner/ItemChainData", order = 0)]
	public class ItemChainScriptableData : ScriptableObject
	{
		public int ChainIndex;

		[SerializeField]
		public List<ItemChainScriptableData> ChildrenChains;

		[SerializeField]
		public List<ItemLinkScriptableData> SerializedLinks;

		public IReadOnlyList<ItemLinkScriptableData> Links => null;

		public ItemChainModel ToModel()
		{
			return null;
		}

		public ItemLinkScriptableData GetLinkDataByID(ItemLinkID linkID)
		{
			return null;
		}

		public List<ItemChainScriptableData> GetChildrenList()
		{
			return null;
		}
	}
}
