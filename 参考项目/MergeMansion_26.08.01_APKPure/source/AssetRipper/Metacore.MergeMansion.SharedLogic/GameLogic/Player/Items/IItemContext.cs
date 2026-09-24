using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public interface IItemContext
	{
		bool IsItemUnlockedAndAvailable(IItemDefinition itemDefinition, IPlayer player);
	}
}
