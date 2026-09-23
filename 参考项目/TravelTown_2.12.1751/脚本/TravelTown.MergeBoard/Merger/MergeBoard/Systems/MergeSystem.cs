using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic.CombineValidators;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class MergeSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public MergeItemCombinerValidator _mergeItemCombinerValidator;

		public void Tick(TickContext context)
		{
		}

		public void PerformMerge((Entity entity, BoardTilePositionComponent boardTilePosition, MergeComponent mergeComponent, IdComponent idComponent) entity, (Entity entity, BoardTilePositionComponent boardTilePosition, MergeComponent mergeComponent, IdComponent idComponent) otherEntity, TickContext context)
		{
		}
	}
}
