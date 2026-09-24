using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "ItemSet_", menuName = "Scriptable/BoardItemSet/BoardItemSetData", order = 4)]
	public class BoardItemSetData : ScriptableObject
	{
		public int SetID;

		public string Name;

		public List<BoardItemData> Items;

		public BoardItemData ItemSpawnedByLastLevel;

		public PriceGroupData PriceGroup;

		public JellyGroupData JellyGroupData;

		public bool HasTip;

		public bool HasSplitTip;

		public bool HasShortTip;

		public List<BoardItemData> TipItems;

		public int RemoveLevel;

		public bool UseVariantLocalization;

		public int FeatureID;

		public Sprite TutorialImage;

		public bool IsFeature()
		{
			return false;
		}

		public bool IsBoardEventFeature()
		{
			return false;
		}

		public bool IsRecurringEventFeature()
		{
			return false;
		}

		public bool IsDefaultBoardFeature()
		{
			return false;
		}

		public bool IsDailyChallengeFeature()
		{
			return false;
		}
	}
}
