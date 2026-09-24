namespace GameLogic.Utility;

public static class EnergyUtilities
{
	public static readonly EnergyType[] AuxEnergyTypes; //Field offset: 0x0

	private static EnergyUtilities() { }

	public static ShopItemId GetEnergyRechargeShopItemId(EnergyType energyType) { }

	public static string GetEnergySkinName(EnergyType energyType) { }

	public static List<EnergyType> GetUsableEnergyTypes() { }

	public static bool IsAuxEnergyType(EnergyType energyType) { }

}

