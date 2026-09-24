using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data.TickInputActions;
using Merger.MergeBoard.Logic.CombineValidators;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class PendingItemsCombinationSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public AnyItemCombinerValidator _anyItemCombinerValidator;

		[Inject]
		[NonSerialized]
		public SplitterItemCombinerValidator _splitterItemCombinerValidator;

		public void Tick(TickContext context)
		{
		}

		public static void SetPendingConfirmationState(TickContext context, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) fromEntity, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) toEntity, MoveAction moveAction)
		{
		}

		public static bool FindEntityAtPosition(TickContext context, int position, out (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) result)
		{
			result = default((Entity, BoardTilePositionComponent, MergeComponent));
			return false;
		}

		public void HandleCombinationVerification(TickContext context, ItemsCombinationConfirmationAction confirmationAction)
		{
		}

		public IEnumerable<((Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent), (Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent))> FindPendingVerificationPairs(TickContext context, string firstEntityUuid, string secondEntityUuid)
		{
			return null;
		}

		public void PendingMergeConfirmation(TickContext context, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) entity, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) otherEntity)
		{
		}

		public void PendingSplitConfirmation(TickContext context, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) entity, (Entity entity, BoardTilePositionComponent positionComp, MergeComponent mergeComponent) otherEntity)
		{
		}
	}
}
