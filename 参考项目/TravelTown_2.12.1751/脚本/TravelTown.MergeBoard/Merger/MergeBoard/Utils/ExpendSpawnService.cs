using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Utils
{
	public class ExpendSpawnService : IExpendSpawnService
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public const string ExpendSpawnNoSpaceReason = "expend_no_space";

		public void TrySpawnExpendedItems(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, IMergeBoardLayout layout, ExpendableComponent expendableComponent, int sourcePosition)
		{
		}

		public void TransformAtSamePosition(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, ExpendableComponent expendableComponent, int sourcePosition, string reason)
		{
		}

		public void AddSpawnFailedResult(EmptiableWeightedItemSpawnable item, IEntityFactory entityFactory, TickContext context)
		{
		}

		public WeightedItemSpawnable SelectWeightedItem(List<WeightedItemSpawnable> items)
		{
			return null;
		}
	}
}
