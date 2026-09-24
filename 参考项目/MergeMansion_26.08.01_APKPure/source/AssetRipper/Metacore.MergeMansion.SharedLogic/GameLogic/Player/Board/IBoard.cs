using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Items;
using GameLogic.Random;
using Merge;

namespace GameLogic.Player.Board
{
	public interface IBoard : IBoardQuery
	{
		MetacoreTime BoardCreationTime { get; }

		MergeBoardId BoardIdentifier { get; }

		List<MergeItem> MergeItemsNonAlloc { get; }

		IEnumerable<MergeItem> MergeItems { get; }

		IEnumerable<Coordinate> Coordinates { get; }

		MergeItem this[Coordinate coord] { get; }

		BoardBubbleState BubbleState { get; }

		IEnumerable<MergeBoardAct> ReplaceItems(IPlayer player, MetacoreTime replacementTimestamp, Predicate<MergeItem> matcher, IGenerationContext generationContext, IItemDefinition replacementItem);

		IEnumerable<MergeBoardAct> EnqueueAutoSellItemsFromBoard(MergeBoardId mergeBoardId, IPlayer player, Predicate<MergeItem> matcher, MetacoreTime sellTimestamp);

		void UpdateListOfBoostedCoordinatesAndApplyBoosts(MetacoreTime timestamp, IPlayer player);

		bool MatchesActionRequirements(IPlayer player, BoardActionType actionType);

		bool IsOnFireActive(IPlayer player, MetacoreTime timestamp);
	}
}
