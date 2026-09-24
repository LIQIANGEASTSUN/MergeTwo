using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(2)]
	public class MergeMathBasedCollectValue : ICalculateCollectValue
	{
		public static readonly int[] levelToValueConversion;

		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Multiplier { get; set; }

		public MergeMathBasedCollectValue()
		{
		}

		public MergeMathBasedCollectValue(Currencies currency)
		{
		}

		public MergeMathBasedCollectValue(Currencies currency, int multiplier)
		{
		}

		public (Currencies, int) CalculateCollectValue(IItemDefinition itemDefinition)
		{
			return default((Currencies, int));
		}

		public bool Equals(MergeMathBasedCollectValue other)
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
