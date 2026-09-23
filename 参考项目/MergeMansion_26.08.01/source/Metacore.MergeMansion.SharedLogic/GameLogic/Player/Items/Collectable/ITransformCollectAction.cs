namespace GameLogic.Player.Items.Collectable
{
	public interface ITransformCollectAction : ICollectAction
	{
		IItemDefinition TransformsInto(IPlayer player);
	}
}
