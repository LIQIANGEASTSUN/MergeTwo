using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Code.GameLogic.GameEvents;
using GameLogic.CardCollection;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Rewards;

namespace GameLogic.Utility
{
	public static class RewardUtilities
	{
		public struct RewardItemDistinct
		{
			public IItemDefinition ItemDefinition;

			public MergeBoardId MergeBoardId;

			public bool FromSupport;

			public CurrencySource Source;

			public RewardItemDistinct(RewardItem rewardItem, IPlayer player)
			{
				ItemDefinition = null;
				MergeBoardId = null;
				FromSupport = false;
				Source = default(CurrencySource);
			}
		}

		public struct CardPackRewardDistinct
		{
			public CardCollectionPackId PackId;

			public CurrencySource Source;

			public CardPackRewardDistinct(CardCollectionPackId packId, CurrencySource source)
			{
				PackId = null;
				Source = default(CurrencySource);
			}
		}

		public struct CurrencyRewardDistinct
		{
			public Currencies Currency;

			public CurrencySource Source;

			public CurrencyRewardDistinct(Currencies currency, CurrencySource source)
			{
				Currency = default(Currencies);
				Source = default(CurrencySource);
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetRuntimeRewards_003Ed__4 : IEnumerable<MetaPlayerRewardBase>, IEnumerable, IEnumerator<MetaPlayerRewardBase>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MetaPlayerRewardBase _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<MetaPlayerRewardBase> baseRewards;

			public IEnumerable<MetaPlayerRewardBase> _003C_003E3__baseRewards;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public RewardSourceContext rewardSourceContext;

			public RewardSourceContext _003C_003E3__rewardSourceContext;

			[NonSerialized]
			public IEnumerator<MetaPlayerRewardBase> _003C_003E7__wrap1;

			MetaPlayerRewardBase IEnumerator<MetaPlayerRewardBase>.Current
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
			public _003CGetRuntimeRewards_003Ed__4(int _003C_003E1__state)
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
			IEnumerator<MetaPlayerRewardBase> IEnumerable<MetaPlayerRewardBase>.GetEnumerator()
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
		public sealed class _003CGetRuntimeRewards_003Ed__5 : IEnumerable<IPlayerReward>, IEnumerable, IEnumerator<IPlayerReward>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IPlayerReward _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<IPlayerReward> playerRewards;

			public IEnumerable<IPlayerReward> _003C_003E3__playerRewards;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public RewardSourceContext rewardSourceContext;

			public RewardSourceContext _003C_003E3__rewardSourceContext;

			[NonSerialized]
			public IEnumerator<IPlayerReward> _003C_003E7__wrap1;

			IPlayerReward IEnumerator<IPlayerReward>.Current
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
			public _003CGetRuntimeRewards_003Ed__5(int _003C_003E1__state)
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
			IEnumerator<IPlayerReward> IEnumerable<IPlayerReward>.GetEnumerator()
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
		public sealed class _003CGetRuntimeRewards_003Ed__6 : IEnumerable<IPlayerReward>, IEnumerable, IEnumerator<IPlayerReward>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IPlayerReward _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<IPlayerReward> playerRewards;

			public IEnumerable<IPlayerReward> _003C_003E3__playerRewards;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<IPlayerReward> _003C_003E7__wrap1;

			IPlayerReward IEnumerator<IPlayerReward>.Current
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
			public _003CGetRuntimeRewards_003Ed__6(int _003C_003E1__state)
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
			IEnumerator<IPlayerReward> IEnumerable<IPlayerReward>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static List<IPlayerReward> CombineSameRewards(IEnumerable<IPlayerReward> rewards, IPlayer player, bool allowDifferentSources = true)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetRuntimeRewards_003Ed__4))]
		public static IEnumerable<MetaPlayerRewardBase> GetRuntimeRewards(IEnumerable<MetaPlayerRewardBase> baseRewards, IPlayer player, RewardSourceContext rewardSourceContext)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetRuntimeRewards_003Ed__5))]
		public static IEnumerable<IPlayerReward> GetRuntimeRewards(IEnumerable<IPlayerReward> playerRewards, IPlayer player, RewardSourceContext rewardSourceContext)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetRuntimeRewards_003Ed__6))]
		public static IEnumerable<IPlayerReward> GetRuntimeRewards(IEnumerable<IPlayerReward> playerRewards, IPlayer player)
		{
			return null;
		}

		public static IPlayerReward GetRuntimeReward(this IPlayerReward reward, IPlayer player, Option<RewardSourceContext> rewardSourceContext)
		{
			return null;
		}

		public static IPlayerReward GetRuntimeReward(this IPlayerReward reward, IPlayer player)
		{
			return null;
		}

		public static Option<IItemDefinition> GetUpgradedCardPackItem(IPlayer player, IItemDefinition originalItem, CardPackUpgradeMode upgradeMode = CardPackUpgradeMode.UpgradeIfEventActive)
		{
			return default(Option<IItemDefinition>);
		}

		public static string ParsePlayerRewardsToAnalyticsStringWithIndex(List<List<IPlayerReward>> rewardsLists, IPlayer player)
		{
			return null;
		}

		public static string ParsePlayerRewardsToAnalyticString(List<IPlayerReward> rewards, IPlayer player)
		{
			return null;
		}

		public static void RewardToAnalyticsString(this StringBuilder sb, IPlayerReward reward, IPlayer player)
		{
		}

		public static string ParseCollectionToAnalyticsString<T>(List<T> values, Func<T, string> valueGetter)
		{
			return null;
		}

		public static void AddRewardItemToPocket(IPlayer player, int amount, bool forceOnTopOfPocket, ItemDef itemDef, MergeBoardId mergeBoardId, OverrideItemFeatures overrideItemFeatures, AnalyticsContext context, bool fromSupport, CurrencySource source, IBoardEventModel foundEvent)
		{
		}

		public static float GetOdds(List<(IPlayerReward, int)> rewards, int itemOdds)
		{
			return 0f;
		}

		public static void ClaimAllRewards<TId>(IPlayer player, IEnumerable<(TId, List<IPlayerReward>)> allRewards, Action<IPlayer, TId> claim, RewardFlags flags)
		{
		}
	}
}
