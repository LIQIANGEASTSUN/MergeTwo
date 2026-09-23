using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializable]
	public interface ICalculateCollectValue
	{
		(Currencies, int) CalculateCollectValue(IItemDefinition itemDefinition);
	}
}
