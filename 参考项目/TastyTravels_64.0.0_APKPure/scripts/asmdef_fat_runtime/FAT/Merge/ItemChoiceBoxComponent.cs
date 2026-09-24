using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemChoiceBoxComponent : ItemComponentBase
	{
		public const int DefaultChoiceCount = 3;

		[NonSerialized]
		public ComMergeChoiceBox mConfig;

		[NonSerialized]
		public readonly List<int> mChoices;

		[NonSerialized]
		public readonly List<int> mRelateCommonOrders;

		[NonSerialized]
		public readonly List<int> mRelateRandomOrders;

		[NonSerialized]
		public bool mFallback;

		public ComMergeChoiceBox config => null;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public IReadOnlyList<int> EnsureChoiceBoxOutput()
		{
			return null;
		}

		public int ResolveChoiceCount()
		{
			return 0;
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public void ClearChoiceBoxOutput()
		{
		}

		public void ClearRelateOrders()
		{
		}

		public bool ResolveActDiffRange(out int minDffy, out int maxDffy)
		{
			minDffy = default(int);
			maxDffy = default(int);
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}
	}
}
