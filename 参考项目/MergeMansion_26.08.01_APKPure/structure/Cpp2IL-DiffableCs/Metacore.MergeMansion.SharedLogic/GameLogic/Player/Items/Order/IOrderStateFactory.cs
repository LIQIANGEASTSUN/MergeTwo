namespace GameLogic.Player.Items.Order;

[MetaSerializable]
public interface IOrderStateFactory
{

	public IOrderState Create(IGenerationContext context) { }

}

