using System;
using System.Runtime.Serialization;
using Analytics;
using Code.GameLogic.GameEvents;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Banks
{
	[MetaSerializableDerived(6)]
	[MetaBlockedMembers(new int[] { 2 })]
	[MetaActivableSet("CurrencyBankEvent", false)]
	public class CurrencyBanksModel : MetaActivableSet<CurrencyBankId, CurrencyBankInfo, CurrencyBankModel>
	{
		[MetaActivableKindMetadata("CurrencyBankEvent", "Currency Bank Events", "Game events include Currency Bank as a playable element.", "Event")]
		public static class ActivableKindMetadataCurrencyBankEvents
		{
		}

		public const string ActivableKindId = "CurrencyBankEvent";

		[MetaMember(1, MetaMemberFlags.None)]
		[ServerOnly]
		public string AnalyticsId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public CurrencyBankId LastNotedCurrencyBankId { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public CurrencyBankState LastNotedCurrencyBankState { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int LastNotedCurrencyBankNumActivated { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public MetaTime? MostRecentCurrencyBankEndAt { get; set; }

		[IgnoreDataMember]
		public int NumOfActivatedCurrencyBanks => 0;

		[IgnoreDataMember]
		public int NumOfConsumedCurrencyBanks => 0;

		public override CurrencyBankModel CreateActivableState(CurrencyBankInfo info, IPlayerModelBase player)
		{
			return null;
		}

		public override void OnJustBeforeStartActivation(CurrencyBankInfo info, IPlayerModelBase player)
		{
		}

		public MetaTime GetLatestActivationStartTime(CurrencyBankId currencyBankId)
		{
			return default(MetaTime);
		}

		public void OnGameTick(PlayerModel player, MetaTime time)
		{
		}

		public bool AddBankCurrencyOnCompleteDailyTask(PlayerModel playerModel, CurrencyBankId currencyBankId, int itemId)
		{
			return false;
		}

		public bool AddBankCurrencyOnCompleteEventTask(PlayerModel playerModel, CurrencyBankId currencyBankId, EventTaskId eventTaskId)
		{
			return false;
		}

		public bool AddBankCurrencyOnCompleteHotspotMergeGoalTask(PlayerModel playerModel, CurrencyBankId currencyBankId, HotspotId hotspotId)
		{
			return false;
		}

		public bool AddBankCurrencyOnMerge(PlayerModel playerModel, CurrencyBankId currencyBankId, int mergeItemLevelNumber, bool ignoreMultiplier, int itemId)
		{
			return false;
		}

		public bool AddBankCurrencyOnSpawnItemUsingEnergy(PlayerModel playerModel, CurrencyBankId currencyBankId, int itemId)
		{
			return false;
		}

		public void OnCompleteDailyTask(PlayerModel playerModel, IItemDefinition wantedItemDefinition)
		{
		}

		public void OnCompleteEventTask(PlayerModel playerModel, EventTaskId eventTaskId)
		{
		}

		public void OnCompleteHotspotMergeGoalTask(PlayerModel playerModel, HotspotId hotspotId)
		{
		}

		public void OnCompleteHotspotMergeGoalTaskVisuals(int addedAmount, PlayerModel playerModel, IHotspotDefinition hotspotDefinition, float[] originPosition)
		{
		}

		public void OnItemsMerged(IPlayer player, IMergeItem mergeItem, Coordinate toPosition)
		{
		}

		public void OnSpawnItemUsingEnergy(PlayerModel playerModel, IMergeItem spawner, Coordinate spawnerPosition)
		{
		}

		public override void OnStartedActivation(CurrencyBankInfo currencyBankInfo, IPlayerModelBase player)
		{
		}

		public override void OnFinalizedActivation(CurrencyBankId currencyBankId, IPlayerModelBase player)
		{
		}

		public bool AddBankCurrency(PlayerModel player, CurrencyBankId currencyBankId, Func<CurrencyBankModel, int> calculateAmountToAdd, Action<CurrencyBankModel, int> collectAnalytics)
		{
			return false;
		}

		public bool AddBankCurrencyOnCompleteTask(PlayerModel playerModel, CurrencyBankId currencyBankId, CurrencyBankTriggerType triggerType, string analyticsItemId)
		{
			return false;
		}

		public bool AddBankCurrencyOnMerge(PlayerModel playerModel, CurrencyBankId currencyBankId, int mergeItemLevelNumber, bool ignoreMultiplier, CurrencyBankTriggerType triggerType, string analyticsItemId)
		{
			return false;
		}

		public bool AddBankCurrencyOnSpawnItemUsingEnergy(PlayerModel playerModel, CurrencyBankId currencyBankId, CurrencyBankTriggerType triggerType, string analyticsItemId)
		{
			return false;
		}

		public void CollectAnalytics(IPlayer player, CurrencyBankModel currencyBankModel, F64 multiplier, int amount, int points, CurrencyBankTriggerType triggerType, string analyticsItemId)
		{
		}

		public void OnCurrencyBankBecomeFull(CurrencyBankModel currencyBankModel, IPlayer player)
		{
		}

		public Option<CurrencyBankModel> GetFirstVisible(PlayerModel playerModel)
		{
			return default(Option<CurrencyBankModel>);
		}

		public Option<CurrencyBankModel> GetFirstActive(PlayerModel playerModel)
		{
			return default(Option<CurrencyBankModel>);
		}
	}
}
