using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class SplitSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public SplitterItemCombinerValidator _splitterItemCombinerValidator;

		public void Tick(TickContext context)
		{
		}

		public bool CanPerformSplit(Entity firstEntity, Entity secondEntity)
		{
			return false;
		}

		public void PerformSplit((Entity entity, BoardTilePositionComponent position, MergeComponent mergeComponent, IdComponent idComponent) firstEntity, (Entity entity, BoardTilePositionComponent position, MergeComponent mergeComponent, IdComponent idComponent) secondEntity, TickContext context)
		{
		}

		public int GetOriginalSplitterPosition(TickContext context, (Entity entity, BoardTilePositionComponent position, MergeComponent mergeComponent, IdComponent idComponent) splitterEntity, (Entity entity, BoardTilePositionComponent position, MergeComponent mergeComponent, IdComponent idComponent) targetEntity)
		{
			return 0;
		}

		public Entity CreateSplitResultEntity(string itemId, int position)
		{
			return null;
		}

		public int FindNearestPosition(TickContext context, int targetPosition)
		{
			return 0;
		}
	}
}
