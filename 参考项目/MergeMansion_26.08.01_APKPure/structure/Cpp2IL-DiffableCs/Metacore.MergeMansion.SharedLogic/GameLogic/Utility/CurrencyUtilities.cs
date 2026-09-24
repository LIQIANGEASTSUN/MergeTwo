namespace GameLogic.Utility;

public static class CurrencyUtilities
{
	private struct CurrencyEnergyTypeMapping
	{
		public Currencies Currency; //Field offset: 0x0
		public EnergyType EnergyType; //Field offset: 0x4

		public CurrencyEnergyTypeMapping(Currencies currency, EnergyType energyType) { }

	}

	private static readonly CurrencyEnergyTypeMapping[] CurrencyEnergyTypeMappings; //Field offset: 0x0

	private static CurrencyUtilities() { }

	public static Option<CoreSupportEventType> GetCurrencyCoreSupportEventType(Currencies currency) { }

	public static Currencies GetCurrencyForEnergyType(EnergyType type) { }

	public static string GetCurrencyName(Currencies currency, Option<EventCurrencyId> eventCurrencyIdOption) { }

	public static CurrencySink GetCurrencySinkForEnergyType(EnergyType energyType) { }

	public static bool IsCurrencyEnergy(Currencies currencies) { }

	public static bool TryGetEnergyTypeForCurrency(Currencies currency, out EnergyType energyType) { }

}

