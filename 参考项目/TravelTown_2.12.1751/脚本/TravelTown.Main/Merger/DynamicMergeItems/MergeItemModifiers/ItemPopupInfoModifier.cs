using System;
using Framework.Core.Services;
using MergeEngine.Configuration;

namespace Merger.DynamicMergeItems.MergeItemModifiers
{
	public class ItemPopupInfoModifier : IDynamicMergeItemModifier
	{
		[NonSerialized]
		public readonly IJsonService _jsonService;

		public ItemPopupInfoModifier(IJsonService jsonService)
		{
		}

		public void Modify(IMergeItem mergeItem, DynamicMergeItemConfig dynamicMergeItemData)
		{
		}
	}
}
