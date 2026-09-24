using System;
using System.Collections.Generic;
using Paxie.MergePuzzle.ItemCollections.Config;
using Paxie.MergeStudio.GameCore.Meta;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "MetaData", menuName = "Scriptable/Meta/MetaData", order = 1)]
	public class MetaData : ScriptableObject
	{
		public List<MetaVisitData> MetaCharacterList;

		public List<MetaTaskItemData> MetaTaskItemList;

		public ItemCollectionConfig ItemCollectionConfig;

		public MetaCommonAssetContainer MetaCommonAssetContainer;

		public int MetaTaskRewardCoinCount;

		public int ShopPurchaseAnimatedGemCount;

		[NonSerialized]
		public MetaTaskData _metaTaskData;

		public MetaTaskData MetaTaskData => null;

		public ShopBasePackage FindPackage(MetaEntity metaEntity, ShopBasePackage package, string platformBasedID)
		{
			return null;
		}

		public ShopBasePackage GetPackageFromID(string platformBasedID)
		{
			return null;
		}

		public void SetMetaTaskData(MetaTaskData metaTaskData)
		{
		}

		public HashSet<string> GetCompletedMetaTaskSkinsOfLevel(MetaEntity metaEntity, int level)
		{
			return null;
		}

		public HashSet<string> GetCompletedPreviouslyRemovedMetaTaskSkinsOfLevel(MetaEntity metaEntity, int level)
		{
			return null;
		}

		public MetaVisitData GetMetaCharacter(int metaLevel)
		{
			return null;
		}

		public MetaTaskItem GetMetaTaskItem(int level, int taskNo)
		{
			return null;
		}

		public List<MetaTaskItem> GetMetaTaskItemsOfLevel(int level)
		{
			return null;
		}

		public List<MetaTaskItem> GetEditableMetaTaskItemsOfLevel(int level, bool isClothes)
		{
			return null;
		}

		public List<MetaTaskItem> GetEditableMetaTaskItemsOfLevel(int level)
		{
			return null;
		}

		public bool UpdateMetaLevelIfRequired(MetaEntity metaEntity)
		{
			return false;
		}

		public MetaTaskItemData GetRevealTaskForLevel(int level)
		{
			return null;
		}

		public int GetRevealTaskNoForLevel(int level)
		{
			return 0;
		}

		public MetaTaskItem GetActiveMetaTaskItem(MetaEntity metaEntity)
		{
			return null;
		}

		public List<MetaTaskItem> GetActiveMetaTaskItems(MetaEntity metaEntity)
		{
			return null;
		}
	}
}
