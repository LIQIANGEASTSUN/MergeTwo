using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.ItemsRelations.Data;
using Merger.Services.User;
using Zenject;

namespace Merger.ItemsRelations.Model
{
	public class ItemsRelationsModel : ModelBase, IItemsRelationsModel
	{
		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		public Dictionary<MergeItemWeakReference, ItemRelation> Relations { get; set; }

		public bool ItemsRelationsEnabled => false;

		public override void InitializeModel()
		{
		}

		public ItemRelation GetItemRelation(MergeItemWeakReference mergeItem)
		{
			return null;
		}

		public HashSet<MergeItemWeakReference> GetRelatedMergeItems(MergeItemWeakReference mergeItem)
		{
			return null;
		}

		public HashSet<IMergeGraphItem> GetRelatedMergeGraphItems(MergeItemWeakReference mergeItem)
		{
			return null;
		}

		public HashSet<MergeItemWeakReference> GetChildren(MergeItemWeakReference node, HashSet<MergeItemWeakReference> visitedNodes, Func<ItemRelationEdge, bool> includedWithSelectedGraph, ref bool hasCalculatedRootGraphRelations)
		{
			return null;
		}

		public MergeItemWeakReference GetLastItemInGraph(MergeItemWeakReference node)
		{
			return null;
		}

		public void ItemsRelationsListLoaded(Dictionary<MergeItemWeakReference, ItemRelation> itemsRelations)
		{
		}

		public override void DisposeModel()
		{
		}
	}
}
