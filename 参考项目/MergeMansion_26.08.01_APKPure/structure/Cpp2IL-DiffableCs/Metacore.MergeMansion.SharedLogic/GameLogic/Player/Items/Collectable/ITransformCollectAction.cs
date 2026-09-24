namespace GameLogic.Player.Items.Collectable;

public interface ITransformCollectAction : ICollectAction
{

	public IItemDefinition TransformsInto(IPlayer player) { }

}

