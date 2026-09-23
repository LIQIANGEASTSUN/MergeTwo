using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using Framework.Core.Services;
using MergeEngine.Configuration;
using Zenject;

namespace Merger.DynamicMergeItems.MergeItemModifiers
{
	public class DynamicMergeItemModificationModel : ModelBase, IDynamicMergeItemModificationModel
	{
		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[NonSerialized]
		public List<IDynamicMergeItemModifier> _mergeItemModifiers;

		public override void InitializeModel()
		{
		}

		public void ModifyMergeItem(IMergeItem mergeItem, DynamicMergeItemConfig dynamicMergeItemData)
		{
		}
	}
}
