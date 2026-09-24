using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Zenject;

namespace Merger.Game.ViewModel
{
	public class ItemViewModelBase : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _configurationModel;

		[Inject]
		[NonSerialized]
		public IPlayerItemsCollectionModel _itemsCollectionModel;

		public IMergeGraphItem GetGraphFor(IMergeItem mergeItem)
		{
			return null;
		}

		public int GetItemIndex(IMergeItem mergeItem)
		{
			return 0;
		}

		public int GetItemLevel(IMergeItem item)
		{
			return 0;
		}

		public IMergeItem GetNextItem(IMergeItem item)
		{
			return null;
		}

		public IMergeItem GetItemFromComponent(IComponentBase component)
		{
			return null;
		}

		public string GetResourceName(PlayerResourceEnum resource)
		{
			return null;
		}

		public string GetResourceSpriteTag(PlayerResourceEnum resource)
		{
			return null;
		}

		public bool IsCollected(IMergeItem mergeItem)
		{
			return false;
		}
	}
}
