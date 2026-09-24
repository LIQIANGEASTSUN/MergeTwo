//Type is in global namespace

public class ItemId
{
	public static int activityCurrency; //Field offset: 0x0
	public const int Bubble = 300; //Field offset: 0x0
	public const int SeedBasketFTUE = 1312; //Field offset: 0x0
	public const int BookBasketFTUE = 1313; //Field offset: 0x0
	public const int BulbBasketFTUE = 1314; //Field offset: 0x0
	public const int PlasmaBasketFTUE = 1315; //Field offset: 0x0
	public static int SoapBasket; //Field offset: 0x4
	public static int ToolsBasket; //Field offset: 0x8
	public static int FurnitureBasket; //Field offset: 0xC
	public static int KitchenBasket; //Field offset: 0x10
	public static int ToyBasket; //Field offset: 0x14
	public static int ChessBasket; //Field offset: 0x18
	public static int SandwichBasket; //Field offset: 0x1C
	public static int CookieBasket; //Field offset: 0x20
	public static int ToasterBasket; //Field offset: 0x24
	public static int CleaningBasket; //Field offset: 0x28

	public static int ActivityCurrency
	{
		 get { } //Length: 88
		 set { } //Length: 92
	}

	public static int Battery
	{
		 get { } //Length: 80
	}

	public static int ChainBreaker
	{
		 get { } //Length: 8
	}

	public static int Chest
	{
		 get { } //Length: 80
	}

	public static int ChestTutorial
	{
		 get { } //Length: 80
	}

	public static int ChestV2Tutorial
	{
		 get { } //Length: 80
	}

	public static int ChestV3Tutorial
	{
		 get { } //Length: 80
	}

	public static int ChestV4Tutorial
	{
		 get { } //Length: 80
	}

	public static int ChestV5Tutorial
	{
		 get { } //Length: 80
	}

	public static int CleaningTools
	{
		 get { } //Length: 80
	}

	public static int CoinTree
	{
		 get { } //Length: 80
	}

	public static int DailyQuestChest
	{
		 get { } //Length: 80
	}

	public static int Energy
	{
		 get { } //Length: 80
	}

	public static int EnergyChest
	{
		 get { } //Length: 80
	}

	public static int Gold
	{
		 get { } //Length: 80
	}

	public static int Joker
	{
		 get { } //Length: 8
	}

	public static int KitchenCabinet
	{
		 get { } //Length: 80
	}

	public static int KitchenCabinetLockedBox
	{
		 get { } //Length: 80
	}

	public static int Mixer
	{
		 get { } //Length: 80
	}

	public static int PlasmaBall
	{
		 get { } //Length: 80
	}

	public static int SafeBox
	{
		 get { } //Length: 80
	}

	public static int Sandwich
	{
		 get { } //Length: 80
	}

	public static int SewingMachine
	{
		 get { } //Length: 80
	}

	public static int SewingMachineLockedBox
	{
		 get { } //Length: 80
	}

	public static int SewingMachineTutorial
	{
		 get { } //Length: 80
	}

	public static int Soap
	{
		 get { } //Length: 80
	}

	public static int TimeSkipper
	{
		 get { } //Length: 8
	}

	public static int Toaster
	{
		 get { } //Length: 80
	}

	public static int ToolBox
	{
		 get { } //Length: 80
	}

	public static int ToolBoxLockedBox
	{
		 get { } //Length: 80
	}

	public static int ToyBox
	{
		 get { } //Length: 80
	}

	public static int ToyBoxLockedBox
	{
		 get { } //Length: 80
	}

	public static int Tree
	{
		 get { } //Length: 80
	}

	public static int UnlimitedEnergy
	{
		 get { } //Length: 8
	}

	private static ItemId() { }

	public ItemId() { }

	public static int get_ActivityCurrency() { }

	public static int get_Battery() { }

	public static int get_ChainBreaker() { }

	public static int get_Chest() { }

	public static int get_ChestTutorial() { }

	public static int get_ChestV2Tutorial() { }

	public static int get_ChestV3Tutorial() { }

	public static int get_ChestV4Tutorial() { }

	public static int get_ChestV5Tutorial() { }

	public static int get_CleaningTools() { }

	public static int get_CoinTree() { }

	public static int get_DailyQuestChest() { }

	public static int get_Energy() { }

	public static int get_EnergyChest() { }

	public static int get_Gold() { }

	public static int get_Joker() { }

	public static int get_KitchenCabinet() { }

	public static int get_KitchenCabinetLockedBox() { }

	public static int get_Mixer() { }

	public static int get_PlasmaBall() { }

	public static int get_SafeBox() { }

	public static int get_Sandwich() { }

	public static int get_SewingMachine() { }

	public static int get_SewingMachineLockedBox() { }

	public static int get_SewingMachineTutorial() { }

	public static int get_Soap() { }

	public static int get_TimeSkipper() { }

	public static int get_Toaster() { }

	public static int get_ToolBox() { }

	public static int get_ToolBoxLockedBox() { }

	public static int get_ToyBox() { }

	public static int get_ToyBoxLockedBox() { }

	public static int get_Tree() { }

	public static int get_UnlimitedEnergy() { }

	public static int GetAdjustedId(int realId) { }

	public static int GetAdjustedIdIncludeBoosters(int realId) { }

	public static bool IsBooster(int itemId) { }

	public static bool IsChest(int itemId) { }

	public static bool IsConsumable(int itemId) { }

	public static bool IsDailyQuestChest(int itemId) { }

	public static bool IsLockedBox(int itemId) { }

	public static bool IsSame(int firstId, int secondId) { }

	public static bool IsTreasure(int itemId) { }

	public static bool IsTutorialChest(int itemId) { }

	public static bool IsTutorialItem(int itemId) { }

	public static void set_ActivityCurrency(int value) { }

	public static int TutorialItemIdToItemId(int itemId) { }

}

