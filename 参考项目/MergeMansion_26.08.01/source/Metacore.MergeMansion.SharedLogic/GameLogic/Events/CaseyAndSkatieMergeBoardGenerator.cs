using System.Collections.Generic;
using Events;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Random;
using Metaplay.Core;

namespace GameLogic.Events
{
	public class CaseyAndSkatieMergeBoardGenerator : IMergeBoardGenerator
	{
		public static readonly List<(List<Coordinate>, List<int>)> groups;

		public static MergeBoard GetEventBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime)
		{
			return null;
		}

		public MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime)
		{
			return null;
		}
	}
}
