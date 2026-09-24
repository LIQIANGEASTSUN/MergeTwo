namespace GameLogic.Player.Items.Collectable;

[MetaSerializable]
public interface ICalculateCollectValue
{

	public ValueTuple<Currencies, Int32> CalculateCollectValue(IItemDefinition itemDefinition) { }

}

