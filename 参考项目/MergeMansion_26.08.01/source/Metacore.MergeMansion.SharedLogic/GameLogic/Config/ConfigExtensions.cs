using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Costs;
using GameLogic.Decorations;
using GameLogic.Player;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.OverrideSpawnChance;
using GameLogic.Player.Items.Sinkable;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using GameLogic.Player.ScheduledActions;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.InAppPurchase;
using Metaplay.Core.Math;
using Metaplay.Core.Player;
using Metaplay.Core.Schedule;

namespace GameLogic.Config
{
	public static class ConfigExtensions
	{
		public class ItemIdShadow : IHasGameConfigKey<string>
		{
			public string ItemKey { get; set; }

			public string ConfigKey => null;
		}

		[CompilerGenerated]
		public sealed class _003CParseBoultonLeagueEventIds_003Ed__23 : IEnumerable<BoultonLeagueEventId>, IEnumerable, IEnumerator<BoultonLeagueEventId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public BoultonLeagueEventId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public string boultonLeagueEventIdsSource;

			public string _003C_003E3__boultonLeagueEventIdsSource;

			[NonSerialized]
			public string[] _003C_003E7__wrap1;

			[NonSerialized]
			public int _003C_003E7__wrap2;

			BoultonLeagueEventId IEnumerator<BoultonLeagueEventId>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CParseBoultonLeagueEventIds_003Ed__23(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<BoultonLeagueEventId> IEnumerable<BoultonLeagueEventId>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CParseLayeredDecorationInfos_003Ed__57 : IEnumerable<DecorationLayerInfo>, IEnumerable, IEnumerator<DecorationLayerInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public DecorationLayerInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public string[] layerInfo;

			public string[] _003C_003E3__layerInfo;

			[NonSerialized]
			public LayeredDecorationSetId setId;

			public LayeredDecorationSetId _003C_003E3__setId;

			[NonSerialized]
			public int _003Ci_003E5__2;

			DecorationLayerInfo IEnumerator<DecorationLayerInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CParseLayeredDecorationInfos_003Ed__57(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<DecorationLayerInfo> IEnumerable<DecorationLayerInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CParseLeaderboardEventIds_003Ed__22 : IEnumerable<LeaderboardEventId>, IEnumerable, IEnumerator<LeaderboardEventId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public LeaderboardEventId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public string leaderboardEventIdsSource;

			public string _003C_003E3__leaderboardEventIdsSource;

			[NonSerialized]
			public string[] _003C_003E7__wrap1;

			[NonSerialized]
			public int _003C_003E7__wrap2;

			LeaderboardEventId IEnumerator<LeaderboardEventId>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CParseLeaderboardEventIds_003Ed__22(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<LeaderboardEventId> IEnumerable<LeaderboardEventId>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CParseMergeBoardIds_003Ed__67 : IEnumerable<MergeBoardId>, IEnumerable, IEnumerator<MergeBoardId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeBoardId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public string mergeBoardIdsSource;

			public string _003C_003E3__mergeBoardIdsSource;

			[NonSerialized]
			public string[] _003C_003E7__wrap1;

			[NonSerialized]
			public int _003C_003E7__wrap2;

			MergeBoardId IEnumerator<MergeBoardId>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CParseMergeBoardIds_003Ed__67(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MergeBoardId> IEnumerable<MergeBoardId>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CParseSinkInActions_003Ed__64 : IEnumerable<ISinkInAction>, IEnumerable, IEnumerator<ISinkInAction>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ISinkInAction _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<string> actions;

			public IEnumerable<string> _003C_003E3__actions;

			[NonSerialized]
			public IEnumerator<string> _003C_003E7__wrap1;

			ISinkInAction IEnumerator<ISinkInAction>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CParseSinkInActions_003Ed__64(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ISinkInAction> IEnumerable<ISinkInAction>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static readonly IReadOnlyList<InAppProductId> LEGACY_PROGRESSION_EVENT_IAPS;

		public static IEnumerable<PlayerReward> ResolvePlayerRewards(this IEnumerable<(string, string, string, string, int)> rewardsInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static IEnumerable<PlayerReward> ResolvePlayerRewards(this IEnumerable<(string, string, string, string, string, int)> rewardsInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static IEnumerable<PlayerRequirement> ResolveRequirements(this IEnumerable<(string, string, string, string)> requirementsInConfigFormat, string debugText = "")
		{
			return null;
		}

		public static PlayerReward ResolvePlayerReward(this (string, string, string, string, int) rewardInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static PlayerReward ResolvePlayerRewardNoContext(this (string, string, string, string, int) rewardInConfigFormat, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static ICost ResolveCost(string costType, string priceId, int priceAmount, string debugText = "")
		{
			return null;
		}

		public static PlayerReward ResolveReward(ConfigContext context, string rewardType, string currencySource, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static PlayerReward ResolveRewardNoContext(string rewardType, string currencySource, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false)
		{
			return null;
		}

		public static PlayerReward CreateCurrencyReward(Currencies currency, int amount, CurrencySource source)
		{
			return null;
		}

		public static List<PlayerReward> ParseRewardString(ConfigContext context, string rewardString, CurrencySource currencySource)
		{
			return null;
		}

		public static List<PlayerReward> ParseRewardStringNoContext(string rewardString, CurrencySource currencySource)
		{
			return null;
		}

		public static PlayerReward ResolveReward(ConfigContext context, string rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = default(Option<IMergeMansionGameConfig>))
		{
			return null;
		}

		public static PlayerReward ResolveRewardNoContext(string rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = default(Option<IMergeMansionGameConfig>))
		{
			return null;
		}

		public static PlayerReward ResolveReward(ConfigContext context, PlayerRewardType rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = default(Option<IMergeMansionGameConfig>))
		{
			return null;
		}

		public static PlayerReward ResolveRewardNoContext(PlayerRewardType rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = default(Option<IMergeMansionGameConfig>))
		{
			return null;
		}

		public static int ParseRequirementAmount(string requirementAmount, string debugText = "")
		{
			return 0;
		}

		public static PlayerRequirement ResolveRequirement(string requirementType, string requirementId, string requirementAmount, string requirementAux0, string debugText = "")
		{
			return null;
		}

		public static OverrideSpawnChance ResolveOverrideSpawnChance(string triggerType, string triggerId, string triggerAmount, string triggerAux0, string targetBoardId, string chanceToSpawn, string endType, string endId, string endAmount, string endAux0)
		{
			return null;
		}

		public static IEnumerable<OverrideSpawnChance> ResolveOverrideSpawnChances(this IEnumerable<(string, string, string, string, string, string, string, string, string, string)> overrideSpawnChanceInConfigFormat)
		{
			return null;
		}

		public static IEnumerable<int> ParseItemTypes(string itemTypesSource)
		{
			return null;
		}

		public static List<int> ParseConfigKeys(List<string> itemIds)
		{
			return null;
		}

		public static PlayerRequirement ParseMergeChainItemNeededRequirement(string mergeChainId, string min, string max)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CParseLeaderboardEventIds_003Ed__22))]
		public static IEnumerable<LeaderboardEventId> ParseLeaderboardEventIds(string leaderboardEventIdsSource)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CParseBoultonLeagueEventIds_003Ed__23))]
		public static IEnumerable<BoultonLeagueEventId> ParseBoultonLeagueEventIds(string boultonLeagueEventIdsSource)
		{
			return null;
		}

		public static MetaRef<T> TryParseMetaRef<T, TK>(this string source) where T : class, IGameConfigData<TK> where TK : StringId<TK>, new()
		{
			return null;
		}

		public static MetaRef<T> TryParseEnumMetaRef<T, TK>(this string source) where T : class, IGameConfigData<TK> where TK : struct, Enum
		{
			return null;
		}

		public static bool TryParseBool(this string source, bool defaultValue)
		{
			return false;
		}

		public static int? TryParseInt(this string source)
		{
			return null;
		}

		public static float? TryParseFloat(this string source)
		{
			return null;
		}

		public static T ParseEnum<T>(this string source) where T : struct
		{
			return default(T);
		}

		public static T ParseOrDefaultEnum<T>(this string source, T defaultValue) where T : struct
		{
			return default(T);
		}

		public static List<VariantConfigItem<TRef, TItem>> ToConfigList<TRef, TItem>(this IEnumerable<TItem> source) where TItem : IHasGameConfigKey<TRef>
		{
			return null;
		}

		public static ICost ResolveCost(string costLine)
		{
			return null;
		}

		public static T ParseEnum<T>(this ConfigLexer lexer) where T : struct
		{
			return default(T);
		}

		public static MetaDuration ParseDuration(this string duration)
		{
			return default(MetaDuration);
		}

		public static MetaTime? ParseTime(this string timeString)
		{
			return null;
		}

		public static ICollection<(string, string)> ItemIds(this IDictionary<string, SpreadsheetContent> sheets, IGameConfigBuilder builder, string configEntryName, IEnumerable<string> sheetNames)
		{
			return null;
		}

		public static VariantConfigItem<string, TComponent> GetVariantConfigItemOrDefault<TComponent>(this IEnumerable<VariantConfigItem<string, TComponent>> source, (string, string) key, TComponent defaultValue) where TComponent : IHasGameConfigKey<string>
		{
			return default(VariantConfigItem<string, TComponent>);
		}

		public static VariantConfigItem<string, TComponent> GetVariantConfigItemOrDefault<TComponent>(this IEnumerable<VariantConfigItem<string, TComponent>> source, string key, string variantMaybe, TComponent defaultValue) where TComponent : IHasGameConfigKey<string>
		{
			return default(VariantConfigItem<string, TComponent>);
		}

		public static TComponent GetOrDefault<TComponent>(this IEnumerable<(string key, string variantMaybe, TComponent component)> source, (string, string) key, TComponent defaultValue)
		{
			return default(TComponent);
		}

		public static TComponent GetOrDefault<TComponent>(this IEnumerable<(string key, string variantMaybe, TComponent component)> source, string key, string variantMaybe, TComponent defaultValue)
		{
			return default(TComponent);
		}

		public static IPlacement ConstructPlacement(this SpawnStyle spawnStyle)
		{
			return null;
		}

		public static IPlacement ConstructPlacement(this ActivationPlacementStyle placementStyle)
		{
			return null;
		}

		public static IEnumerable<(TK, TV)> Enumerate<TK, TV>(this GameConfigLibrary<TK, TV> configLibrary) where TV : class, IGameConfigData<TK>, new()
		{
			return null;
		}

		public static List<IDirectorAction> ParseActions(this IEnumerable<string> actions, ConfigContext context)
		{
			return null;
		}

		public static List<IDirectorAction> ParseActionsNoContext(this IEnumerable<string> actions)
		{
			return null;
		}

		public static CollectItemsOnSessionStartSettings ParseSetting(this string source)
		{
			return null;
		}

		public static StartingValues ParseStartingValues(this string source)
		{
			return null;
		}

		public static SpeedUpCostBehavior ParseSpeedUpCostBehavior(this string source)
		{
			return null;
		}

		public static List<ItemDialogueEntry> ParseItemDialogueEntries(this string source)
		{
			return null;
		}

		public static List<QuantityPercentagePair> ParseQuantityPercentagePairs(this string source)
		{
			return null;
		}

		public static List<DecorationDialogueEntry> ParseDecorationDialogueEntries(this string source)
		{
			return null;
		}

		public static List<EventTaskLocEntry> ParseEventTaskLocEntries(this string source)
		{
			return null;
		}

		public static IScheduledAction ParseScheduledAction(string actionType)
		{
			return null;
		}

		public static IDirectorAction ParseAction(string actionType, IList<string> actionArgs)
		{
			return null;
		}

		public static IBubbleLogic ParseBubbleLogic(this string source)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CParseLayeredDecorationInfos_003Ed__57))]
		public static IEnumerable<DecorationLayerInfo> ParseLayeredDecorationInfos(this string[] layerInfo, LayeredDecorationSetId setId)
		{
			return null;
		}

		public static ProgressionEventPerk ResolveProgressionEventPerk(ProgressionEventPerkType type, string[] args)
		{
			return null;
		}

		public static MetaDictionary<int, int> ParseWaterDropletCounts(string source)
		{
			return null;
		}

		public static int[] ParseItemWeightCategoryOdds(string source)
		{
			return null;
		}

		public static List<EventLevelId> ParseEventLevelIds(this string source)
		{
			return null;
		}

		public static EventTaskInfo GetEventTask(PlayerModel player, EventTaskId taskId)
		{
			return null;
		}

		public static IEnumerable<BubbleBonusInfo> ResolveBubbleBonusInfos(this IEnumerable<(int energyType, F32 divisor, bool isEnabled)> entries)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CParseSinkInActions_003Ed__64))]
		public static IEnumerable<ISinkInAction> ParseSinkInActions(this IEnumerable<string> actions)
		{
			return null;
		}

		public static ISinkInAction ParseSinkInAction(string action)
		{
			return null;
		}

		public static IEnumerable<RewardContainerItem> ResolveRewardContainerItems(this IEnumerable<(PlayerRewardType itemType, string item, string itemAux0, string itemAux1, int minAmount, int maxAmount, int? batchAmount, Dictionary<PlayerSegmentId, int> segmentedWeights, int showMinAmount, int showMaxAmount)> itemsInConfigFormat)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CParseMergeBoardIds_003Ed__67))]
		public static IEnumerable<MergeBoardId> ParseMergeBoardIds(string mergeBoardIdsSource)
		{
			return null;
		}

		public static List<TId> ParseIds<TId>(string str) where TId : StringId<TId>, new()
		{
			return null;
		}

		public static IReadOnlyList<InAppProductId> GetProgressionEventIAPs(IPlayerModelBase player)
		{
			return null;
		}

		public static IReadOnlyList<InAppProductId> GetCurrencyBankIAPs(IPlayerModelBase player)
		{
			return null;
		}

		public static List<(int, string)> ValidateAllConfigDefinitionReferences(IMergeMansionGameConfig config, PlayerModel playerModel, GameConfigValidationResult validationResult)
		{
			return null;
		}

		public static void ValidateAgainstMutableReward(this GameConfigValidationResult variantEntries, IMergeMansionGameConfig config, string sheetName, string configKey, IPlayerReward reward)
		{
		}

		public static MetaCalendarPeriod GetLeaderboardEventSafetyMargin(this IMergeMansionGameConfig config)
		{
			return default(MetaCalendarPeriod);
		}
	}
}
