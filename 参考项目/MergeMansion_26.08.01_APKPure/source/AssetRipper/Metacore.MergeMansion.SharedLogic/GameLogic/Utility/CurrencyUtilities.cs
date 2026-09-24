using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Utility
{
	public static class CurrencyUtilities
	{
		public struct CurrencyEnergyTypeMapping
		{
			public Currencies Currency;

			public EnergyType EnergyType;

			public CurrencyEnergyTypeMapping(Currencies currency, EnergyType energyType)
			{
				Currency = default(Currencies);
				EnergyType = default(EnergyType);
			}
		}

		public static readonly CurrencyEnergyTypeMapping[] CurrencyEnergyTypeMappings;

		public static Currencies GetCurrencyForEnergyType(EnergyType type)
		{
			return default(Currencies);
		}

		public static bool TryGetEnergyTypeForCurrency(Currencies currency, out EnergyType energyType)
		{
			energyType = default(EnergyType);
			return false;
		}

		public static bool IsCurrencyEnergy(Currencies currencies)
		{
			return false;
		}

		public static CurrencySink GetCurrencySinkForEnergyType(EnergyType energyType)
		{
			return default(CurrencySink);
		}

		public static Option<CoreSupportEventType> GetCurrencyCoreSupportEventType(Currencies currency)
		{
			return default(Option<CoreSupportEventType>);
		}

		public static string GetCurrencyName(Currencies currency, Option<EventCurrencyId> eventCurrencyIdOption)
		{
			return null;
		}
	}
}
