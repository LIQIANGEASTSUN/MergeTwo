using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace Code.GameLogic.ExtraSpawns
{
	public class ExtraSpawnValueSource : IHasGameConfigKey<string>
	{
		public string ConfigKey { get; set; }

		public ExtraSpawnValueType Type { get; set; }

		public F32 Value { get; set; }

		public List<string> CustomValueIds { get; set; }

		public List<F32> CustomValues { get; set; }

		public int ExperimentPriority { get; set; }

		public ExtraSpawnItemValueInfo ToItemValue()
		{
			return null;
		}

		public ExtraSpawnCurrencyValueInfo ToCurrencyValue()
		{
			return null;
		}

		public ExtraSpawnCardStackValueInfo ToCardStackValue()
		{
			return null;
		}

		public ExtraSpawnIllustrationValueInfo ToIllustrationValue()
		{
			return null;
		}

		public (MetaDictionary<Currencies, F32>, MetaDictionary<CoreSupportEventTokenId, F32>) ParseCustomValues()
		{
			return default((MetaDictionary<Currencies, F32>, MetaDictionary<CoreSupportEventTokenId, F32>));
		}
	}
}
