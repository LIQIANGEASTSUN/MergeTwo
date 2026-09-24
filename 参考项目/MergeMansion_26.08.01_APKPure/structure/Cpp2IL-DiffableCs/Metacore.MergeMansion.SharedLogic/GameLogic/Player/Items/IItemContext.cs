namespace GameLogic.Player.Items;

[MetaSerializable]
public interface IItemContext
{

	public bool IsItemUnlockedAndAvailable(IItemDefinition itemDefinition, IPlayer player) { }

}

