using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Charges
{
	public class ChargesFeaturesSource : IItemConfigPart<ChargesFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public int InitialCharges;

		public ChargeMergeBehavior MergeBehavior;

		public string ConfigKey => null;

		public string ItemType => null;

		public ChargesFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
