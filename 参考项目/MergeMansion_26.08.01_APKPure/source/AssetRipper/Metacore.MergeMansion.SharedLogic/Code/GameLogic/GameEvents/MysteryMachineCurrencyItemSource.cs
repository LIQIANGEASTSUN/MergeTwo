using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineCurrencyItemSource : IConfigItemSource<MysteryMachineCurrencyItemInfo, MysteryMachineCurrencyItemId>, IGameConfigSourceItem<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo>, IHasGameConfigKey<MysteryMachineCurrencyItemId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineCurrencyItemId ConfigKey { get; set; }

		public Currencies Currency { get; set; }

		public int Amount { get; set; }

		public int DisplayAmount { get; set; }

		public MysteryMachineCurrencyItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
