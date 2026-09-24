using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Random;
using Metaplay.Core;

namespace Events
{
	public interface IMergeBoardGenerator
	{
		MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime);
	}
}
