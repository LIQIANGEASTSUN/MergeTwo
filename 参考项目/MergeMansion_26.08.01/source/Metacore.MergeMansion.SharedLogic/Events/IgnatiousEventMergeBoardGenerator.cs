using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Random;
using Metaplay.Core;

namespace Events
{
	public class IgnatiousEventMergeBoardGenerator : IMergeBoardGenerator
	{
		public class BoardSlot
		{
			public int ItemId;

			public ItemVisibility ItemVisibility;

			public int X;

			public int Y;

			public float Probability;

			public BoardSlot(int itemId, ItemVisibility itemVisibility, int x, int y, float probability)
			{
			}
		}

		public const int TreasureCount = 8;

		public const float MatchMultiplier = 0.5f;

		public const float InitialChance = 1f;

		public static void UpgradeItem(IList<(ItemDefinition, ItemVisibility)> board, int x, int y, IMergeMansionGameConfig gameConfig)
		{
		}

		public static MergeBoard GetEventBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime)
		{
			return null;
		}

		public static List<(ItemDefinition, ItemVisibility)> MakeBoard(RandomPCG random, IMergeMansionGameConfig gameConfig)
		{
			return null;
		}

		public static void AddItem(int itemId, ItemVisibility itemVisibility, BoardSlot[,] board2d, RandomPCG random)
		{
		}

		public static BoardSlot GetRandomSlot(List<BoardSlot> boardSlots, RandomPCG random)
		{
			return null;
		}

		public static BoardSlot GetSlotAt(BoardSlot[,] slots, int x, int y)
		{
			return null;
		}

		public MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime)
		{
			return null;
		}
	}
}
