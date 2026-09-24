using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[Serializable]
	public class ItemChainModel
	{
		public int ChainIndex;

		[SerializeField]
		public List<ItemLinkModel> SerializedLinks;

		public IReadOnlyList<ItemLinkModel> Links => null;

		public ItemChainModel()
		{
		}

		public ItemChainModel(int chainIndex)
		{
		}

		public ItemLinkModel AddLink(int unlockLevel, int archiveLevel, int spawnerSetId, bool spawnerArchiveRemovable, List<int> itemSetIds = null)
		{
			return null;
		}

		public bool RemoveLink(ItemLinkModel link, bool reindexLinks = false)
		{
			return false;
		}

		public ItemLinkModel GetLinkByIndex(int linkIndex)
		{
			return null;
		}

		public ItemLinkModel GetLinkByID(ItemLinkID linkID)
		{
			return null;
		}

		public List<ItemLinkModel> GetLinksByUnlockLevel(int unlockLevel)
		{
			return null;
		}

		public bool IsLinkIndexUsed(int linkIndex)
		{
			return false;
		}

		public int GetNextAvailableLinkIndex()
		{
			return 0;
		}

		public void ReindexLinks()
		{
		}

		public List<string> ValidateChain()
		{
			return null;
		}

		public void UpdateChainIndex(int newChainIndex)
		{
		}
	}
}
