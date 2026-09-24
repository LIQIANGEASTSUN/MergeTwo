using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(1)]
	public class LevelBasedCollectValue : ICalculateCollectValue
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int Factor { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		public LevelBasedCollectValue()
		{
		}

		public LevelBasedCollectValue(Currencies currency, int multiplyFactor)
		{
		}

		public (Currencies, int) CalculateCollectValue(IItemDefinition itemDefinition)
		{
			return default((Currencies, int));
		}

		public bool Equals(LevelBasedCollectValue other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
