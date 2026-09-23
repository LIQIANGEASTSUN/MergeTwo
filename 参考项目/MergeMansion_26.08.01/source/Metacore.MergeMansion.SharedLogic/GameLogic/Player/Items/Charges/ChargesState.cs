using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Charges
{
	[MetaSerializable]
	public class ChargesState
	{
		public static readonly ChargesState empty;

		[MetaMember(1, MetaMemberFlags.None)]
		public int Charges { get; set; }

		public static ChargesState Combine(ChargesState source, ChargesState target, IChargesFeatures targetFeatures)
		{
			return null;
		}
	}
}
