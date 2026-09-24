using System;
using Framework.Core.Services;
using GameCore.Configuration.WeakReferences;
using GameCore.Configuration.WeakReferences.Providers;
using MergeEngine.Model.Configuration;
using Merger.DynamicMergeItems;
using Merger.DynamicMergeItems.MergeItemModifiers;
using Zenject;

namespace MergeEngine.Configuration.Definitions.WeakReferences.Providers
{
	public class MergeItemProvider : WeakReferenceTargetProvider<IMergeItem, string>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IDynamicMergeItemModificationModel _dynamicMergeItemModificationModel;

		[Inject]
		[NonSerialized]
		public IDynamicMergeItemConfigurationModel _dynamicMergeItemConfigurationModel;

		public override IMergeItem ProvideInstance(WeakReference<IMergeItem, string> reference)
		{
			return null;
		}

		public IMergeItem GetDynamicMergeItem(IMergeItem originalMergeItem, DynamicMergeItemConfig mergeItemDynamicMergeData)
		{
			return null;
		}

		public IMergeItem CloneMergeItem(IMergeItem originalMergeItem)
		{
			return null;
		}
	}
}
