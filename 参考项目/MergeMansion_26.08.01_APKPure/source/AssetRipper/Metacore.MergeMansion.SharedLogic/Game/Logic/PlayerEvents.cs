using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Player;

namespace Game.Logic
{
	public static class PlayerEvents
	{
		public const int CurrencyUsed = 1;

		public const int ItemSold = 2;

		public const int GemsGained = 3;

		public const int SupportReducedCurrency = 4;

		public const int GainedItem = 5;

		public const int GainedIAP = 6;

		public const int CompletedDailyTask = 7;

		public const int DailyTaskFinalRewardCollected = 8;

		public const int GameEventExtended = 9;

		public const int SupportRemovedItem = 10;

		public const int ItemMovedFromPocketToBoard = 11;

		public const int PocketChanged = 12;

		public const int GainedEnergy = 13;

		public const int GarageCleanupLeveledUp = 14;

		public const int CoinsGained = 15;

		public const int CoinsUsed = 16;

		public const int GemsUsed = 17;

		public const int EventCurrencyUsed = 18;

		public const int ProgressionEventPremiumIAPConsumed = 19;

		public const int GarageCleanupStartedLevel = 20;

		public const int CollectibleBoardEventExtended = 21;

		public const int ItemSpawnedFromZeroEnergyProducer = 22;

		public const int InventoryChanged = 23;

		public const int SideBoardEventResourceItemGained = 24;

		public const int DailyTasksV2StreakCountChanged = 25;

		public const int OpenedCardPack = 26;

		public const int OpenedWildCard = 27;

		public const int OpeningChest = 28;

		public const int BaseProgressionEventPremiumIAPConsumed = 29;

		public const int RestoredStateFixup = 30;

		public static PlayerEventBase GetCurrencyUsedEvent(Currencies currency, Option<EventCurrencyId> eventCurrencyIdOption, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext context, string flashSaleContext = "None")
		{
			return null;
		}

		public static PlayerEventGainedCurrency GetCurrencyGainedEvent(Currencies currency, long amount, CurrencySource source, long totalAfterAdd, string itemType, AnalyticsContext context)
		{
			return null;
		}
	}
}
