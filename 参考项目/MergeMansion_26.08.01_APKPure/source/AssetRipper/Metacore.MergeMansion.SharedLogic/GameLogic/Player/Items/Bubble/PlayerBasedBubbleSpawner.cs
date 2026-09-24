using GameLogic.Config.Types;
using GameLogic.Player.Board;

namespace GameLogic.Player.Items.Bubble
{
	public class PlayerBasedBubbleSpawner : IBubbleSpawner
	{
		public IPlayer Player { get; }

		public MergeBoard Board { get; }

		public IBubbleLogic Logic { get; }

		public PlayerBasedBubbleSpawner(IPlayer player, MergeBoard board, IBubbleLogic bubbleLogic)
		{
		}

		public IItemDefinition ShouldSpawn(IItemDefinition itemDefinition, MetacoreTime currentTime)
		{
			return null;
		}
	}
}
