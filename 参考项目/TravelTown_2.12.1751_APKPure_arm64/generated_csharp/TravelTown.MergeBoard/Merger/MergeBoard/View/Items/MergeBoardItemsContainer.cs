using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using ContextualizedECS;
using Framework.Core.MVVM.View;
using Framework.Util.Pooling;
using Merger.Game.Views;
using Merger.MergeBoard.Providers;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View.Items
{
	public class MergeBoardItemsContainer : ViewBase<MergeBoardItemCreatorViewModel>, IBoardItemsContainerProvider
	{
		[SerializeField]
		public PrefabObjectPool _itemsPool;

		[SerializeField]
		public MergeBoardItemBehavioursHandler _itemBehavioursHandler;

		[SerializeField]
		public BlockerItemViewLoader _blockerItemViewLoader;

		[NonSerialized]
		public readonly Dictionary<Entity, IBoardItemView> _items;

		[NonSerialized]
		public bool _initialized;

		public event Action<IBoardItemView> ItemAdded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<IBoardItemView> ItemRemoved
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void Initialize()
		{
		}

		public IBoardItemView AddBoardItem(int index, Entity entity)
		{
			return null;
		}

		public bool IsItemExists(Entity entity)
		{
			return false;
		}

		public IBoardItemView GetItemView(Entity entity)
		{
			return null;
		}

		public bool RemoveItem(Entity entity)
		{
			return false;
		}

		public IEnumerable<IBoardItemView> GetAllItemViews()
		{
			return null;
		}

		public IEnumerable<KeyValuePair<Entity, IBoardItemView>> GetAllItems()
		{
			return null;
		}

		public Entity GetEntityForItemView(IBoardItemView itemView)
		{
			return null;
		}

		public void AddItemView(Entity entity, IBoardItemView itemView)
		{
		}

		public void CreateBlockerView(int index, IBoardItemView boardItemView)
		{
		}
	}
}
