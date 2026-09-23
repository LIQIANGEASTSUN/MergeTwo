using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.ItemsRelations.Data;

namespace Merger.ItemsRelations.Model
{
	public interface IItemsRelationsModel
	{
		bool ItemsRelationsEnabled { get; }

		Dictionary<MergeItemWeakReference, ItemRelation> Relations { get; }

		ItemRelation GetItemRelation(MergeItemWeakReference mergeItem);

		HashSet<MergeItemWeakReference> GetRelatedMergeItems(MergeItemWeakReference mergeItem);

		HashSet<IMergeGraphItem> GetRelatedMergeGraphItems(MergeItemWeakReference mergeItem);
	}
}
