using GameLogic.Config.Types;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializable]
	public interface IBubbleLogic
	{
		IItemDefinition ShouldSpawn(IPlayer player, IBoard currentBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp);

		void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime);

		void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime);
	}
}
