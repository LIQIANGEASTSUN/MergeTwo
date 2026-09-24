using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ItemUnboxingSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _mergeBoardLayout;

		public const string MergeItemReason = "merge_item";

		public const string ResourceConsumeReason = "resource_consumed";

		public const string ItemConsumeReason = "interaction_item";

		public void Tick(TickContext context)
		{
		}

		public void UnboxOnMerge(TickContext context)
		{
		}

		public void UnboxOnConsume(TickContext context)
		{
		}

		public void UnboxOnResourceConsume(TickContext context)
		{
		}

		public void UnboxOnDemand(TickContext context)
		{
		}

		public IList<Entity> GetAdjacentBoxedEntities(TickContext context, int position)
		{
			return null;
		}

		public bool TryGetBoxedEntity(TickContext context, int position, out Entity entity)
		{
			entity = null;
			return false;
		}

		public void UnboxItem(TickContext context, Entity boxedEntity, BoxComponent boxComponent, string reason, int interactionPosition)
		{
		}

		public (string, string) GetSourcesForAnalytics(TickContext context, int position)
		{
			return default((string, string));
		}
	}
}
