namespace GameLogic.Player.Items;

public interface IItemConfigPart : IItemConfigPart, IHasGameConfigKey<String>
{

	public TOutput ToConfigData(IProducerFactory producerFactory) { }

}

