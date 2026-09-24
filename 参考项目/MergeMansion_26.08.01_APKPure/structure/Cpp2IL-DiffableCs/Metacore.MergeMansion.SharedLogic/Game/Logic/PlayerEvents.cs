namespace Game.Logic;

public static class PlayerEvents
{
	public const int CurrencyUsed = 1; //Field offset: 0x0
	public const int OpeningChest = 28; //Field offset: 0x0
	public const int OpenedWildCard = 27; //Field offset: 0x0
	public const int OpenedCardPack = 26; //Field offset: 0x0
	public const int DailyTasksV2StreakCountChanged = 25; //Field offset: 0x0
	public const int SideBoardEventResourceItemGained = 24; //Field offset: 0x0
	public const int InventoryChanged = 23; //Field offset: 0x0
	public const int ItemSpawnedFromZeroEnergyProducer = 22; //Field offset: 0x0
	public const int CollectibleBoardEventExtended = 21; //Field offset: 0x0
	public const int GarageCleanupStartedLevel = 20; //Field offset: 0x0
	public const int ProgressionEventPremiumIAPConsumed = 19; //Field offset: 0x0
	public const int EventCurrencyUsed = 18; //Field offset: 0x0
	public const int GemsUsed = 17; //Field offset: 0x0
	public const int CoinsUsed = 16; //Field offset: 0x0
	public const int CoinsGained = 15; //Field offset: 0x0
	public const int GarageCleanupLeveledUp = 14; //Field offset: 0x0
	public const int GainedEnergy = 13; //Field offset: 0x0
	public const int PocketChanged = 12; //Field offset: 0x0
	public const int ItemMovedFromPocketToBoard = 11; //Field offset: 0x0
	public const int SupportRemovedItem = 10; //Field offset: 0x0
	public const int GameEventExtended = 9; //Field offset: 0x0
	public const int DailyTaskFinalRewardCollected = 8; //Field offset: 0x0
	public const int CompletedDailyTask = 7; //Field offset: 0x0
	public const int GainedIAP = 6; //Field offset: 0x0
	public const int GainedItem = 5; //Field offset: 0x0
	public const int SupportReducedCurrency = 4; //Field offset: 0x0
	public const int GemsGained = 3; //Field offset: 0x0
	public const int ItemSold = 2; //Field offset: 0x0
	public const int BaseProgressionEventPremiumIAPConsumed = 29; //Field offset: 0x0
	public const int RestoredStateFixup = 30; //Field offset: 0x0

	public static PlayerEventGainedCurrency GetCurrencyGainedEvent(Currencies currency, long amount, CurrencySource source, long totalAfterAdd, string itemType, AnalyticsContext context) { }

	public static PlayerEventBase GetCurrencyUsedEvent(Currencies currency, Option<EventCurrencyId> eventCurrencyIdOption, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext context, string flashSaleContext = "None") { }

}

