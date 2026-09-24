namespace GameLogic.Player.Items.Sink;

[MetaSerializable]
public interface ISinkStateFactory
{

	public ISinkState Create() { }

	public IEnumerable<Int32> GetAcceptedItems(IMergeMansionGameConfig config) { }

	public IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetSinkProducts(IMergeMansionGameConfig config) { }

}

