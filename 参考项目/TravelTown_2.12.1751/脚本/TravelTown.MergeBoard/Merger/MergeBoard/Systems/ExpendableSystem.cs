using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Utils;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ExpendableSystem : ISystem
	{
		public const string TapReason = "tap";

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IExpendSpawnService _expendSpawnService;

		public void Tick(TickContext context)
		{
		}

		public void ProcessExpendableItem(TickContext context, Entity entity, ExpendableComponent expendableComponent, BoardTilePositionComponent positionComponent, IdComponent idComponent, InteractionComponent interactionComponent, PendingInteractionComponent? pendingInteraction)
		{
		}

		public bool HasSpawnedAnItemThisTick(TickContext context, Entity expendableEntity)
		{
			return false;
		}
	}
}
