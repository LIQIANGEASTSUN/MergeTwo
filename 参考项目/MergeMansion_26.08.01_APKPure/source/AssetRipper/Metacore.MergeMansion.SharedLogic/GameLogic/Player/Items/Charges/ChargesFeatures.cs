using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Charges
{
	[MetaSerializable]
	public class ChargesFeatures : IChargesFeatures
	{
		public static readonly ChargesFeatures NoCharges;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool SupportsCharges { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int DefaultInitialCharges { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public ChargeMergeBehavior MergeBehavior { get; set; }

		public ChargesFeatures()
		{
		}

		public ChargesFeatures(bool supportsCharges, int defaultInitialCharges, ChargeMergeBehavior mergeBehavior)
		{
		}

		public static ChargesFeatures WithCharges(int number, ChargeMergeBehavior mergeBehavior)
		{
			return null;
		}

		public bool Equals(ChargesFeatures other)
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
