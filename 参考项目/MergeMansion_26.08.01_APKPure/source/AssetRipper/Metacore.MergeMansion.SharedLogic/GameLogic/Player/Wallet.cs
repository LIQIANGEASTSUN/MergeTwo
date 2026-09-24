using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Config.Costs;
using GameLogic.Config.Types;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Attachments;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 5, 8, 9, 10, 13 })]
	public sealed class Wallet
	{
		public struct CurrencyCounts
		{
			public Func<long> Soft { get; set; }

			public Action<long> SoftSetter { get; set; }

			public Func<long> Hard { get; set; }

			public Action<long> HardSetter { get; set; }

			public long Total => 0L;

			public CurrencyCounts(Func<long> soft, Func<long> hard, Action<long> softSet, Action<long> hardSet)
			{
				Soft = null;
				SoftSetter = null;
				Hard = null;
				HardSetter = null;
			}
		}

		[MetaMember(21, MetaMemberFlags.None)]
		public MetaDictionary<EnergyType, AuxEnergyState> AuxEnergyStates;

		public PocketChangedEvent PocketContentChanged;

		public PocketChangedEvent EventPocketContentChanged;

		public PocketChangedEvent LiveOpsEventPocketContentChanged;

		public CurrencyAddedEvent CurrencyAdded;

		public CurrencyRemovedEvent CurrencyRemoved;

		[MetaMember(1, MetaMemberFlags.None)]
		public long Coins { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public long Experience { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public long Diamonds { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<long> BoughtDiamonds { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public long Energy { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public MetaTime? NextPossibleEnergyRefillTime { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public List<IBoardItem> PocketItems { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public List<IBoardItem> EventPocketItems { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public long HardDiamonds { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public long HardCoins { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MetaDictionary<EventCurrencyId, long> EventCurrencies { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MetaDictionary<EventCurrencyId, long> BoughtEventCurrencies { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public List<AuthenticationPlatform> CollectedRewards { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public List<long> BoughtCoins { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		[Obsolete("Replaced by AuxEnergyStates. Required for migration.")]
		public SecondaryEnergyState SecondaryEnergyState_DEPRECATED { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public long CardCollectionStars { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public long DigEventTaps { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public MetaDictionary<CoreSupportEventTokenId, long> CoreSupportEventTokens { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, SortedDictionary<int, long>> CurrencySpentPerDay { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public MetaDictionary<EnergyType, long> InitialEnergyTotalThisSession { get; set; }

		[IgnoreDataMember]
		public long[] CurrenciesGainedThisSession { get; set; }

		[IgnoreDataMember]
		public long[] CurrenciesSpentThisSession { get; set; }

		[IgnoreDataMember]
		public long[] InitialCurrenciesThisSession { get; set; }

		[IgnoreDataMember]
		public LogChannel Log { get; set; }

		[IgnoreDataMember]
		public List<IBoardItem> PocketItemsNonAlloc => null;

		[IgnoreDataMember]
		public List<IBoardItem> EventPocketItemsNonAlloc => null;

		[IgnoreDataMember]
		public long TotalCoins => 0L;

		[IgnoreDataMember]
		public long TotalDiamonds => 0L;

		[IgnoreDataMember]
		public long PurchasedDiamondsSum => 0L;

		[IgnoreDataMember]
		public long PurchasedCoinsSum => 0L;

		[IgnoreDataMember]
		public IEnumerable<EventCurrencyId> AllEventCurrencies => null;

		public Wallet()
		{
		}

		public Wallet(long coins, long experience, long diamonds, long energy)
		{
		}

		public void SetInitialValues(int initialCoins, int initialDiamonds, int initialEnergy)
		{
		}

		public void AddCurrency(IPlayer player, (Currencies currency, long amount) add, CurrencySource currencySource, int itemType, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}

		public bool IsWalletAtMax(Currencies currency)
		{
			return false;
		}

		public (bool, long) CanAfford((Currencies currency, long amount) cost)
		{
			return default((bool, long));
		}

		public CurrencyUsageResult TryToUse(IPlayer player, (Currencies currency, long amount) cost, CurrencySink currencySink, int itemType, EventCurrencyId eventCurrencyId, AnalyticsContext context, string flashSaleContext = "None")
		{
			return default(CurrencyUsageResult);
		}

		public void TrackCurrencySpent(IPlayer player, Currencies currency, long amount)
		{
		}

		public long GetCurrencyAmount(Currencies currencies, EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public long GetCurrencyAmountIgnoreExceptions(Currencies currency, EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public long GetCurrencyAmountFree(Currencies currency, EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public long GetCurrencyAmountHard(Currencies currency, EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public long GetEventCurrencyAmountSoft(EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public long GetEventCurrencyAmountHard(EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public Dictionary<EventCurrencyId, long> GetAmountOfEventCurrencies()
		{
			return null;
		}

		public void AddCoins(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public CurrencyUsageResult TryToUseCoins(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context, string flashSaleContext)
		{
			return default(CurrencyUsageResult);
		}

		public void SetAmountOfExperience(long experience)
		{
		}

		public void AddExperience(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public void AddDiamonds(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public bool HasEnoughDiamonds(long howMuchIsNeeded)
		{
			return false;
		}

		public CurrencyUsageResult TryToUseDiamonds(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context, string flashSaleContext)
		{
			return default(CurrencyUsageResult);
		}

		public void AddEnergy(IPlayer player, EnergyType type, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public void AddEnergy(IPlayer player, EnergyType type, long addAmount)
		{
		}

		public bool HasEnoughEnergy(EnergyType type, long howMuchIsNeeded)
		{
			return false;
		}

		public long GetEnergy(EnergyType type)
		{
			return 0L;
		}

		public CurrencyUsageResult TryToUseEnergy(IPlayer player, EnergyType type, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context)
		{
			return default(CurrencyUsageResult);
		}

		public long HowMuchEnergyTimeFillCanGive(IPlayer player)
		{
			return 0L;
		}

		public void SetNextPossibleEnergyRefillTimeIfNeeded(IPlayer player, MetacoreTime nextPossibleRefillTime, bool energyRegenerated)
		{
		}

		public MetaTime? GetNextPossibleEnergyRefillTime()
		{
			return null;
		}

		public MetaTime? GetNextPossibleEnergyRefillTime(EnergyType type)
		{
			return null;
		}

		public void CheckIfEnergyShouldBeRegenerated(IPlayer player, MetacoreTime currentTimestamp, MetaDuration energyRestoreInterval)
		{
		}

		public void AddCardCollectionStars(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public void AddDigEventTaps(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context)
		{
		}

		public CurrencyUsageResult TryToUseCardCollectionStars(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context)
		{
			return default(CurrencyUsageResult);
		}

		public CurrencyUsageResult TryToUseDigEventTaps(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context)
		{
			return default(CurrencyUsageResult);
		}

		public void ResetCardCollectionStars()
		{
		}

		public void AddItemToPocket(int itemIdToAdd, IMergeMansionGameConfig gameConfig, MergeBoardId mergeBoardId, IBoardEventModel eventModel = null)
		{
		}

		public void AddItemToPocket(IBoardItem item, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null)
		{
		}

		public (List<IBoardItem>, PocketChangedEvent) GetPocketItemsAndChangedEvent(MergeBoardId boardId, IBoardEventModel eventModel)
		{
			return default((List<IBoardItem>, PocketChangedEvent));
		}

		public List<IBoardItem> GetPocket(MergeBoardId boardId, IBoardEventModel eventModel)
		{
			return null;
		}

		public void AddItemToFirstSlotInPocket(int itemIdToAdd, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null)
		{
		}

		public void AddItemToFirstSlotInPocket(IBoardItem item, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null)
		{
		}

		public IEnumerable<int> GetAllItemsInPocket(MergeBoardId boardId)
		{
			return null;
		}

		public IEnumerable<IBoardItem> GetAllBoardItemsInPocket(MergeBoardId boardId)
		{
			return null;
		}

		public IEnumerable<string> GetAllItemTypesInPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId)
		{
			return null;
		}

		public IBoardItem GetFirstItemInPocket(MergeBoardId boardId, IBoardEventModel eventModel)
		{
			return null;
		}

		public int GetPocketItemCount(MergeBoardId boardId)
		{
			return 0;
		}

		public IBoardItem RemoveFirstItemFromPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel)
		{
			return null;
		}

		public void FindAndRemoveAllItemTypesFromPocket(MergeBoardId boardId, IBoardEventModel eventModel, int itemId)
		{
		}

		public void FindAndRemoveMatchingItemsFromPocket(MergeBoardId boardId, IBoardEventModel eventModel, Predicate<IBoardItem> predicate)
		{
		}

		public void RemoveDigEventData()
		{
		}

		public void FindAndMoveItemAsFirstInPocket(MergeBoardId boardId, IBoardEventModel eventModel, int itemId)
		{
		}

		public void FindAndRemoveAllItemTypesFromPocketAndAddSellAmount(PlayerModel playerModel, MergeBoardId boardId, IBoardEventModel eventModel, int itemId)
		{
		}

		public void FindAndRemoveAllItemTypesFromPocketChests(IPlayer player, MergeBoardId boardId, IBoardEventModel eventModel, IEnumerable<int> itemIds, bool addSellPrice = false)
		{
		}

		public void RemoveItems(MergeBoardId boardId, Predicate<int> itemMatcher, Action<int> onRemoved)
		{
		}

		public bool FindAndRemoveFirstOfTypeFromPocket(MergeBoardId boardId, int itemId, IBoardEventModel eventModel)
		{
			return false;
		}

		public (bool, int) ReOrderItemsInPocket(MergeBoardId boardId, IBoardEventModel eventBoardModel, int source, int target)
		{
			return default((bool, int));
		}

		public bool RemoveItemFromPocket(IMergeMansionGameConfig gameConfig, MergeBoardId mergeBoardId, IBoardEventModel eventBoardModel, int index, string itemType)
		{
			return false;
		}

		public void ReplaceItemsInPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel, Dictionary<int, int> replacementMapping)
		{
		}

		public void ReplaceItemsInPocket(IPlayer player, MergeBoardId boardId, Predicate<IItemDefinition> matcher, IItemDefinition replacementItem)
		{
		}

		public void ReplaceExpiredCardCollectionItems(IPlayer player, MergeBoardId mergeBoardId, RestoredStateFixupChangeLog changeLog = null)
		{
		}

		public void ClearWallet(MergeBoardId boardId, IBoardEventModel eventModel)
		{
		}

		public bool HasCollectedSocialAuthReward(AuthenticationPlatform platform)
		{
			return false;
		}

		public void MarkSocialAuthRewardAsCollected(AuthenticationPlatform platform)
		{
		}

		public void RemoveSocialAuthRewardCollected(AuthenticationPlatform platform)
		{
		}

		public MetaDictionary<EventCurrencyId, long> GetTargetEventCurrency(bool isPurchase)
		{
			return null;
		}

		public void AddEventCurrency(IPlayer player, EventCurrencyId eventCurrencyId, long addAmount, CurrencySource currencySource, AnalyticsContext context)
		{
		}

		public long GetEventCurrencyCount(EventCurrencyId eventCurrencyId)
		{
			return 0L;
		}

		public CurrencyUsageResult TryToPayCost(IPlayer player, CurrencyCost cost, CurrencySink currencySink, int itemId, AnalyticsContext context)
		{
			return default(CurrencyUsageResult);
		}

		public bool CanAfford(IPlayer player, CurrencyCost cost, out long diff)
		{
			diff = default(long);
			return false;
		}

		public CurrencyCounts CoinsCounts()
		{
			return default(CurrencyCounts);
		}

		public CurrencyCounts DiamondCounts()
		{
			return default(CurrencyCounts);
		}

		public CurrencyCounts GetEventCurrencyCounts(EventCurrencyId id)
		{
			return default(CurrencyCounts);
		}

		public CurrencyCounts GetEnergyCurrencyCounts(IPlayer player, EnergyType type)
		{
			return default(CurrencyCounts);
		}

		public CurrencyCounts GetAmountsFromPrice(IPlayer player, ICost cost)
		{
			return default(CurrencyCounts);
		}

		public void EnsureEventCurrencies(ICost cost)
		{
		}

		public bool HasItemInPocket(IItemDefinition itemDefinition)
		{
			return false;
		}

		public bool PocketContainsItemWithinRange(MergeBoardId boardId, IBoardEventModel eventModel, int maxCount, params int[] itemIds)
		{
			return false;
		}

		public void StartRefillEnergyIfBugged(IPlayer player)
		{
		}

		public void RemoveAttachmentsFromPocket(Predicate<IItemAttachment> matcher)
		{
		}

		public (long, MetaTime?) GetEnergyAmountAndNextRestoreTime(EnergyType energyType)
		{
			return default((long, MetaTime?));
		}

		public long GetCoreSupportEventTokenAmount(CoreSupportEventTokenId tokenId)
		{
			return 0L;
		}

		public void SetCoreSupportEventTokenAmount(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source, AnalyticsContext analyticsContext)
		{
		}

		public void GiveCoreSupportEventTokens(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source, AnalyticsContext analyticsContext)
		{
		}

		public CurrencyUsageResult CanSpendCoreSupportEventTokens(CoreSupportEventTokenId tokenId, long amount)
		{
			return default(CurrencyUsageResult);
		}

		public void SpendCoreSupportEventTokens(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySink sinkSource, AnalyticsContext analyticsContext)
		{
		}

		public void OnCoreSupportEventTokenAmountChanged(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source)
		{
		}

		public void SetInitialEnergyTotalsThisSession(PlayerModel playerModel)
		{
		}
	}
}
