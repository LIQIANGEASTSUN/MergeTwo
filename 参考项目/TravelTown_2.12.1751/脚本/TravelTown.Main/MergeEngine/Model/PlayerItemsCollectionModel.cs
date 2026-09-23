using System;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Player;
using Zenject;

namespace MergeEngine.Model
{
	public class PlayerItemsCollectionModel : ModelBase, IPlayerItemsCollectionModel
	{
		[Inject]
		[NonSerialized]
		public IEntityManager entityManager;

		public PlayerItemsCollectionComponent _playerItemsCollectionComponent => null;

		public virtual bool IsItemCollected(string id)
		{
			return false;
		}

		public virtual bool IsItemCreated(string id)
		{
			return false;
		}

		public bool TryAddDiscoveredItem(IMergeItem item)
		{
			return false;
		}

		public bool TryAddCreatedItem(IMergeItem item)
		{
			return false;
		}
	}
}
