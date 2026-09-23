using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Rewards;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public static class ItemDefinitionExtensions
	{
		[CompilerGenerated]
		public sealed class _003CGetActivationSpawnItems_003Ed__58 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IItemDefinition itemDefinition;

			public IItemDefinition _003C_003E3__itemDefinition;

			[NonSerialized]
			public IBoard board;

			public IBoard _003C_003E3__board;

			[NonSerialized]
			public IMergeItem relatedMergeItem;

			public IMergeItem _003C_003E3__relatedMergeItem;

			[NonSerialized]
			public IEnumerator<IItemDefinition> _003C_003E7__wrap1;

			[NonSerialized]
			public IEnumerator<OrderStateReward> _003C_003E7__wrap2;

			IItemDefinition IEnumerator<IItemDefinition>.Current
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
			public _003CGetActivationSpawnItems_003Ed__58(int _003C_003E1__state)
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

			public void _003C_003Em__Finally2()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IItemDefinition> IEnumerable<IItemDefinition>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static readonly F32 oddsMin;

		public static readonly F32 oddsMax;

		public static bool TryGetUnlockedMergeResultItem(this IItemDefinition itemDefinition, IPlayer player, out IItemDefinition result)
		{
			result = null;
			return false;
		}

		public static bool IsArtifactItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsCoinItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsEnergyItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsExperienceItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsEventProgressItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsDiamondItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBoosterItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsPiggyBankItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool HasTransformCollectAction(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBoosterThatIsActive(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsTimeSkipItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsInfiniteEnergyItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsTimeStorageItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsChargeSupportingItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBoosterShardItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsTimeSkipBoosterShardItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsDecayingItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBoosterAcceleratedDecayingItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBox(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsBoxOrChest(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool IsChestContainingCardCollectionRewards(this IItemDefinition itemDefinition, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsGarageCleanupEventProducer(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static XpState CombineExperience(this IItemDefinition itemDefinition, XpState sourceState, XpState targetState)
		{
			return null;
		}

		public static ItemVisibility ProductionVisibility(this IItemDefinition definition)
		{
			return default(ItemVisibility);
		}

		public static int GetMergeChainFirstArtifactLevel(this IItemDefinition itemDefinition, IPlayer player)
		{
			return 0;
		}

		public static int OddsToSpawnBubble(this IItemDefinition itemDefinition, int presentMaxLevelItemsCount, IPlayer player)
		{
			return 0;
		}

		public static int GetBaseExperienceValue(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static int GetTotalExperience(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static int GetExperienceRequired(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static int GetTotalExperienceRequired(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static IEnumerable<MergeReward> GetMergeRewards(this IItemDefinition itemDefinition, IPlayer player)
		{
			return null;
		}

		public static bool IsPreserveRatioItem(this IItemDefinition item)
		{
			return false;
		}

		public static bool IsActivationItem(this IItemDefinition item)
		{
			return false;
		}

		public static bool IsLevelUpItem(this IItemDefinition item)
		{
			return false;
		}

		public static int GetActivationStorageMax(this IItemDefinition itemDefinition, IPlayer player)
		{
			return 0;
		}

		public static int GetSpawnStorageMax(this IItemDefinition itemDefinition, IPlayer player)
		{
			return 0;
		}

		public static MetaDuration GetActivationCycleDelay(this IItemDefinition itemDefinition, IPlayer player, CycleInfo cycleInfo)
		{
			return default(MetaDuration);
		}

		public static MetaDuration GetFirstActivationCycleDelay(this IItemDefinition itemDefinition, IPlayer player)
		{
			return default(MetaDuration);
		}

		public static MetaDuration GetSpawnCycleDelay(this IItemDefinition itemDefinition, IPlayer player)
		{
			return default(MetaDuration);
		}

		public static MetaDuration GetFirstSpawnCycleDelay(this IItemDefinition itemDefinition, IPlayer player)
		{
			return default(MetaDuration);
		}

		public static bool ShouldIgnoreEnergyMode(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool ShouldUseAutomaticDescription(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool StartsAsDiscovered(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool AlwaysShowCanBeFoundIn(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool DontShowSourcesInInfoPopup(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool HasDynamicDescription(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static int LevelNumberToAmountOfLevel1Items(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static IMergeMechanic GetMergeMechanic(this IItemDefinition itemDefinition)
		{
			return null;
		}

		public static bool IsCardPack(this IItemDefinition itemDefinition, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsInformantTip(this IItemDefinition itemDefinition, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static int GetSpeedUpItemsPerCycle(this IItemDefinition itemDefinition, IPlayer player, CycleInfo cycleInfo)
		{
			return 0;
		}

		public static bool IsPreserveRatioItemMergeResult(this IItemDefinition item, IPlayer player)
		{
			return false;
		}

		public static bool IsProducerOrVariant(this IItemDefinition itemDefinition, IPlayer player)
		{
			return false;
		}

		public static bool IsScissorItem(this IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool TryGetMergeResultItem(this IItemDefinition itemDefinition, IMergeMansionGameConfig config, out IItemDefinition result)
		{
			result = null;
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetActivationSpawnItems_003Ed__58))]
		public static IEnumerable<IItemDefinition> GetActivationSpawnItems(this IItemDefinition itemDefinition, IPlayer player, IMergeItem relatedMergeItem, IBoard board)
		{
			return null;
		}

		public static int GetUnlockedActivationSpawnItemCount(this IItemDefinition itemDefinition, IMergeItem relatedMergeItem, IPlayer player)
		{
			return 0;
		}

		public static bool HasUnlockedActivationSpawnItems(this IItemDefinition itemDefinition, IMergeItem relatedMergeItem, IPlayer player)
		{
			return false;
		}

		public static IItemDefinition GetMergeChainFirstArtifact(this IItemDefinition itemDefinition, IPlayer player)
		{
			return null;
		}

		public static PlayerReward GetRewardFromItemToSell(this IItemDefinition itemToSell, SharedGlobals sharedGlobals)
		{
			return null;
		}

		public static PlayerReward GetCollectibleCurrencyAsReward(this IItemDefinition itemToCollect)
		{
			return null;
		}

		public static int GetCollectibleItemCollectValue(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static void ResetAndAddProduces(this IItemDefinition producer, IMergeMansionGameConfig gameConfig, HashSet<IItemDefinition> outputProducedItems)
		{
		}

		public static void AddProduces(this IItemDefinition producer, IMergeMansionGameConfig gameConfig, HashSet<IItemDefinition> outputProducedItems)
		{
		}

		public static bool AllItemsAreDiscovered(this IEnumerable<IItemDefinition> itemDefinitions, IPlayer player)
		{
			return false;
		}

		public static bool AllItemsAreDiscovered(this IEnumerable<IItemDefinition> itemDefinitions, IPlayer player, out List<IItemDefinition> result)
		{
			result = null;
			return false;
		}

		public static bool IsItemUnlockedAndAvailable(this IItemDefinition itemDefinition, IPlayer player, IItemContext itemContext = null)
		{
			return false;
		}

		public static (Currencies, int) GetBubbleOpenCost(this IItemDefinition itemDefinition, IPlayer player)
		{
			return default((Currencies, int));
		}
	}
}
