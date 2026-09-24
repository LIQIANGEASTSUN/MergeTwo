using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public static class ItemsExtensions
	{
		public class RemainingDurationComparer : IComparer<MergeItem>
		{
			public static readonly IComparer<MetaDuration?> durationComparer;

			[NonSerialized]
			public readonly int correctionQuotient;

			public static readonly IComparer<MergeItem> Instance;

			public static readonly IComparer<MergeItem> Inverse;

			public RemainingDurationComparer(int quotient)
			{
			}

			public int Compare(MergeItem x, MergeItem y)
			{
				return 0;
			}
		}

		[CompilerGenerated]
		public sealed class _003CAllPossibleItemsProduced_003Ed__7 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IItemProducer producer;

			public IItemProducer _003C_003E3__producer;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

			[NonSerialized]
			public IEnumerator<(IItemDefinition, int)> _003C_003E7__wrap1;

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
			public _003CAllPossibleItemsProduced_003Ed__7(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CProduces_003Ed__6 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IItemProducer producer;

			public IItemProducer _003C_003E3__producer;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

			[NonSerialized]
			public IEnumerator<(IItemDefinition, int)> _003C_003E7__wrap1;

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
			public _003CProduces_003Ed__6(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CSinkReward_003Ed__9 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public ISinkStateFactory sinkStateFactory;

			public ISinkStateFactory _003C_003E3__sinkStateFactory;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

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
			public _003CSinkReward_003Ed__9(int _003C_003E1__state)
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

		public static string ExperienceProgressTextFormat => null;

		public static string ExperienceProgressPreviewTextFormat => null;

		public static bool AllItemsAreUnlocked(this IEnumerable<IItemDefinition> itemDefinitions, IPlayer player, bool replaceLockedItemsWithFallbackItems, out IEnumerable<IItemDefinition> result)
		{
			result = null;
			return false;
		}

		public static (ActivationState, StorageState) Combine(this IActivationFeatures activationFeatures, IActivationFeatures sourceFeatures, ActivationState sourceState, StorageState sourceStorage, IActivationFeatures targetFeatures, ActivationState targetState, StorageState targetStorage, StorageActionType storageAction, MetaTime timestamp)
		{
			return default((ActivationState, StorageState));
		}

		public static (ActivationState, StorageState) FromExisting(this IActivationFeatures activationFeatures, MetaTime timestamp)
		{
			return default((ActivationState, StorageState));
		}

		public static GarageCleanupEventModel GetGarageCleanupEventModel(this IMergeItem mergeItem, PlayerModel player)
		{
			return null;
		}

		public static bool CanBeAddedToInventory(this MergeItem mergeItem, IPlayer player, MetacoreTime timestamp)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CProduces_003Ed__6))]
		public static IEnumerable<IItemDefinition> Produces(this IItemProducer producer, IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CAllPossibleItemsProduced_003Ed__7))]
		public static IEnumerable<IItemDefinition> AllPossibleItemsProduced(this IItemProducer producer, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static IEnumerable<(IItemDefinition, F32)> Produces(this ISinkStateFactory sinkStateFactory, IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CSinkReward_003Ed__9))]
		public static IEnumerable<IItemDefinition> SinkReward(this ISinkStateFactory sinkStateFactory, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static string GetExperienceProgressText(this IMergeItem mergeItem, IPlayer player)
		{
			return null;
		}

		public static string GetExperienceProgressTextFormat(this IMergeItem mergeItem)
		{
			return null;
		}

		public static string GetExperienceProgressPreviewTextFormat(this IMergeItem mergeItem)
		{
			return null;
		}

		public static IEnumerable<(int, int)> CreateItemTypeWeightPairs(this IEnumerable<int> itemIds, IEnumerable<int> weights)
		{
			return null;
		}

		public static PlayerReward ToPlayerReward(Currencies currencyType, long amount, CurrencySource source)
		{
			return null;
		}

		public static PlayerReward ToPlayerReward(Currencies currencyType, int amount, CurrencySource source)
		{
			return null;
		}

		public static IBoardItem CreateBoardItem(IPlayer player, IItemDefinition itemDefinition, OverrideItemFeatures overrideItemFeatures, MetacoreTime timestamp, MergeBoardId boardId)
		{
			return null;
		}

		public static void ApplyTimeContainerOverride(MergeItem mergeItem, OverrideItemFeatures overrideItemFeatures)
		{
		}

		public static void ApplyChargesOverride(MergeItem mergeItem, OverrideItemFeatures overrideItemFeatures)
		{
		}

		public static bool OrderItemCompleted(this MergeItem mergeItem)
		{
			return false;
		}

		public static int GetDecayAnimationIndex(this MergeItem mergeItem)
		{
			return 0;
		}

		public static bool ShouldUseProducerInventory(this MergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static bool IsProducerOrVariant(this MergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static bool HasProducersOrVariantsInChain(this MergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static (Currencies, long) GetItemSellPrice(MergeBoardId mergeBoardId, IItemDefinition itemDefinition, IMergeMansionGameConfig gameConfig)
		{
			return default((Currencies, long));
		}

		public static bool TryGetPortalPieceChainAnalyticsType(this MergeItem item, IPlayer player, out PortalPieceChainAnalyticsType type)
		{
			type = default(PortalPieceChainAnalyticsType);
			return false;
		}

		public static bool TryGetLeveledUpItem(IPlayer player, IItemDefinition sourceItem, IBoard board, int levelUpCount, out IItemDefinition leveledUpItem)
		{
			leveledUpItem = null;
			return false;
		}

		public static bool TryGetLeveledUpItemByMerging(IPlayer player, IItemDefinition item, IBoard board, int levelUpCount, out IItemDefinition resultItem)
		{
			resultItem = null;
			return false;
		}

		public static bool TryGetLeveledUpItemFromChain(IPlayer player, IItemDefinition item, int levelUpCount, out IItemDefinition resultItem)
		{
			resultItem = null;
			return false;
		}

		public static IMergeMechanic GetMergeMechanic(IPlayer player, int itemId)
		{
			return null;
		}
	}
}
