using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Board;

namespace Merger.Services.User.Data.Profile.Game.StartingBoard
{
	[Serializable]
	public class StartingBoard : IBoard, IUniqueStringKeyAsset
	{
		public List<StartingBoardRow> BoardRows;

		[NonSerialized]
		public MergeBoardItem[,] _boardItems;

		public string UniqueId { get; set; }

		public MergeBoardItem[,] GetBoardItems()
		{
			return null;
		}

		public StartingBoard()
		{
		}

		public StartingBoard(string uniqueId, List<StartingBoardRow> boardRows)
		{
		}

		public MergeBoardItem[,] CreateBoardItems()
		{
			return null;
		}
	}
}
