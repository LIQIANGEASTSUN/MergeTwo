using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Model.Configuration
{
	public class DynamicMergeItemConfigurationModel : ModelBase, IDynamicMergeItemConfigurationModel
	{
		[NonSerialized]
		public readonly Dictionary<string, IMergeItem> _dynamicMergeItemsCache;

		public void AddDynamicMergeItem(string id, IMergeItem mergeItem)
		{
		}

		public IMergeItem GetDynamicMergeItem(string id)
		{
			return null;
		}

		public IMergeItem GetDynamicMergeItemFromComponent(IComponentBase component)
		{
			return null;
		}

		public IMergeItem GetDynamicMergeItemWithItemId(string itemId)
		{
			return null;
		}
	}
}
