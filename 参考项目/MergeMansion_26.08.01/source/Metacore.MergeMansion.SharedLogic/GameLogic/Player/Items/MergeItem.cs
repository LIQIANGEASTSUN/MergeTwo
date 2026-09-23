using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.MergeChains;
using GameLogic.Player.Board;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Attachments;
using GameLogic.Player.Items.Boosting;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Charges;
using GameLogic.Player.Items.Chest;
using GameLogic.Player.Items.Decay;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.Persistent;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Items.Spawning;
using GameLogic.Player.Items.TimeContainer;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items
{
	[MetaSerializableDerived(2)]
	[MetaBlockedMembers(new int[] { 2 })]
	public sealed class MergeItem : IMergeItem, IBoardItem
	{
		[MetaSerializable]
		[MetaBlockedMembers(new int[] { 22, 23 })]
		public sealed class MergeItemExtra
		{
			[MetaMember(1, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public DecayState DecayState;

			[MetaMember(2, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ActivationState ActivationState;

			[MetaMember(3, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public SpawnState SpawnState;

			[MetaMember(4, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public StorageState ActivationStorageState;

			[MetaMember(5, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public StorageState SpawnStorageState;

			[MetaMember(6, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ChestState ChestState;

			[MetaMember(7, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public BoosterState BoosterState;

			[MetaMember(8, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public BubbleState BubbleState;

			[MetaMember(9, MetaMemberFlags.None)]
			public int SpecialActivationAmount;

			[MetaMember(10, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ISinkState SinkState;

			[MetaMember(12, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public TimeContainerState TimeContainerState;

			[MetaMember(13, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ChargesState ChargeState;

			[MetaMember(14, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public XpState ExperienceState;

			[MetaMember(15, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ItemAttachmentsState AttachmentsState;

			[MetaMember(16, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ItemLeaderboardState LeaderboardState;

			[MetaMember(17, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public ItemRewardsState RewardsState;

			[MetaMember(18, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public FishingRodState FishingRodState;

			[MetaMember(19, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public WeightState WeightState;

			[MetaMember(20, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public PersistentState PersistentState;

			[MetaMember(21, MetaMemberFlags.None)]
			[MetaSerializerOmitNull]
			public OrderParentState OrderState;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass181_0
		{
			public MergeBoardId boardId;

			public PlayerModel player;
		}

		[CompilerGenerated]
		public sealed class _003CGetActivationSpawnItems_003Ed__97 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MergeItem _003C_003E4__this;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public ProducerContext producerContext;

			public ProducerContext _003C_003E3__producerContext;

			[NonSerialized]
			public MetacoreTime timestamp;

			public MetacoreTime _003C_003E3__timestamp;

			[NonSerialized]
			public IGenerationContext generationContext;

			public IGenerationContext _003C_003E3__generationContext;

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
			public _003CGetActivationSpawnItems_003Ed__97(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CGetPotentialEventsForBubbleBonus_003Ed__181 : IEnumerable<(IBubbleBonusEvent, EnergyType, F32)>, IEnumerable, IEnumerator<(IBubbleBonusEvent, EnergyType, F32)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IBubbleBonusEvent bubleBonusEvent, EnergyType energyType, F32 divisor) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public MergeBoardId boardId;

			public MergeBoardId _003C_003E3__boardId;

			[NonSerialized]
			public PlayerModel player;

			public PlayerModel _003C_003E3__player;

			[NonSerialized]
			public _003C_003Ec__DisplayClass181_0 _003C_003E8__1;

			[NonSerialized]
			public IMergeMansionGameConfig _003CgameConfig_003E5__2;

			[NonSerialized]
			public IImmutableSet<MergeBoardId> _003CauxEnergyMergeBoards_003E5__3;

			[NonSerialized]
			public IEnumerator<ProgressionEventModel> _003C_003E7__wrap3;

			[NonSerialized]
			public IEnumerator<(IBubbleBonusEvent, EnergyType, F32)> _003C_003E7__wrap4;

			[NonSerialized]
			public IEnumerator<LeaderboardEventModel> _003C_003E7__wrap5;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap6;

			[NonSerialized]
			public IEnumerator<ShortLeaderboardEventModel> _003C_003E7__wrap7;

			(IBubbleBonusEvent, EnergyType, F32) IEnumerator<(IBubbleBonusEvent, EnergyType, F32)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((IBubbleBonusEvent, EnergyType, F32));
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
			public _003CGetPotentialEventsForBubbleBonus_003Ed__181(int _003C_003E1__state)
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

			public void _003C_003Em__Finally3()
			{
			}

			public void _003C_003Em__Finally4()
			{
			}

			public void _003C_003Em__Finally5()
			{
			}

			public void _003C_003Em__Finally6()
			{
			}

			public void _003C_003Em__Finally7()
			{
			}

			public void _003C_003Em__Finally8()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(IBubbleBonusEvent, EnergyType, F32)> IEnumerable<(IBubbleBonusEvent, EnergyType, F32)>.GetEnumerator()
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
		public sealed class _003CGetUnlockedMergeItems_003Ed__109 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
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

			public MergeItem _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<IItemDefinition> _003C_003E7__wrap1;

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
			public _003CGetUnlockedMergeItems_003Ed__109(int _003C_003E1__state)
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

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public ItemVisibility visibility;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public MergeItemExtra extra;

		[MetaMember(5, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime createdAt;

		public const string HotspotTagKey = "FinishHotspotID";

		public static readonly MetacoreTime guaranteedFuture;

		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef DefinitionDef { get; set; }

		[IgnoreDataMember]
		public DecayState DecayState => null;

		[IgnoreDataMember]
		public ActivationState ActivationState => null;

		[IgnoreDataMember]
		public SpawnState SpawnState => null;

		[IgnoreDataMember]
		public StorageState ActivationStorageState => null;

		[IgnoreDataMember]
		public StorageState SpawnStorageState => null;

		[IgnoreDataMember]
		public IChestState ChestState => null;

		[IgnoreDataMember]
		public BoosterState BoosterState => null;

		[IgnoreDataMember]
		public BubbleState BubbleState => null;

		[IgnoreDataMember]
		public int SpecialActivationAmount => 0;

		[IgnoreDataMember]
		public ISinkState SinkState => null;

		[IgnoreDataMember]
		public TimeContainerState TimeContainerState => null;

		[IgnoreDataMember]
		public ChargesState ChargesState => null;

		[IgnoreDataMember]
		public XpState ExperienceState => null;

		[IgnoreDataMember]
		public ItemAttachmentsState AttachmentsState => null;

		[IgnoreDataMember]
		public ItemAttachmentsState AttachmentsStateMaybe => null;

		[IgnoreDataMember]
		public ItemLeaderboardState LeaderboardState => null;

		[IgnoreDataMember]
		public ItemRewardsState RewardsState => null;

		[IgnoreDataMember]
		public FishingRodState FishingRodState => null;

		[IgnoreDataMember]
		public FishingRodState FishingRodStateMaybe => null;

		[IgnoreDataMember]
		public WeightState WeightState => null;

		[IgnoreDataMember]
		public WeightState WeightStateMaybe => null;

		[IgnoreDataMember]
		public PersistentState PersistentState => null;

		[IgnoreDataMember]
		public OrderParentState OrderState => null;

		[IgnoreDataMember]
		public MergeItemExtra Extra => null;

		[IgnoreDataMember]
		ITimeContainerState IMergeItem.TimeContainerState => null;

		[IgnoreDataMember]
		public MetacoreTime CreatedAt => default(MetacoreTime);

		[IgnoreDataMember]
		Option<MetacoreTime> IMergeItem.NextSpawnStorageTimestampOption => default(Option<MetacoreTime>);

		public int ItemId => 0;

		[IgnoreDataMember]
		public ItemVisibility Visibility => default(ItemVisibility);

		[IgnoreDataMember]
		public MetacoreDuration? RemainingDuration => null;

		[IgnoreDataMember]
		public MetaTime? NextSpawnStorageTimestamp => null;

		[IgnoreDataMember]
		public bool IsLootable => false;

		[IgnoreDataMember]
		public bool IsBoosted => false;

		[IgnoreDataMember]
		public F32 TimeBoostMultiplier => default(F32);

		[IgnoreDataMember]
		public bool IsSpawnBoosted => false;

		[IgnoreDataMember]
		public F32 TimeSpawnBoostMultiplier => default(F32);

		public bool IsInsideBubble => false;

		[IgnoreDataMember]
		public bool IsVisible => false;

		[IgnoreDataMember]
		public bool IsPartiallyVisible => false;

		[IgnoreDataMember]
		public bool IsHiddenInABox => false;

		[IgnoreDataMember]
		public bool ActivationPaused
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		[IgnoreDataMember]
		public MetacoreDuration RemainingTimeContained => default(MetacoreDuration);

		[IgnoreDataMember]
		public bool IsFullyConsumed => false;

		public bool HasFishingRodState => false;

		public IItemDefinition GetDefinition(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config)
		{
			return null;
		}

		public string GetItemType(IMergeMansionGameConfig config)
		{
			return null;
		}

		public MergeItem()
		{
		}

		public MergeItem(ItemDef definitionDef, MetaTime timestamp, ItemVisibility itemVisibility)
		{
		}

		public MergeItem(IPlayer player, ItemDef itemDefinitionDef, MetacoreTime timestamp, MergeBoardId boardId, ItemVisibility itemVisibility = ItemVisibility.Visible, bool insideBubble = false, bool checkNullExtra = false)
		{
		}

		public MergeItem(IMergeMansionGameConfig config, IItemDefinition resultingItem, IMergeItem sourceItem, MetacoreTime timestamp, IPlayer player)
		{
		}

		public MergeItem(ItemDef itemDefinitionDef, MetaTime timestamp, ItemVisibility itemVisibility, DecayState decayState, ActivationState activationState, StorageState activationStorage, SpawnState spawnState, StorageState spawnStorage, IChestState chestState, ISinkState sinkState, ITimeContainerState timeContainerState, ChargesState chargesState, XpState xpState, OrderParentState orderState, PersistentState persistentState)
		{
		}

		public bool IsMovable(IPlayer player)
		{
			return false;
		}

		public bool UpdateVisibility(MetacoreTime timestamp, IPlayer player, MergeBoard mergeBoard, Coordinate coordinate)
		{
			return false;
		}

		public static void OnCobwebCleared(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, MergeItem item)
		{
		}

		public (ItemActionType, MetacoreTime) GetNextEvent(IPlayer player, Coordinate coordinate, IBoardQuery boardQuery, MetacoreTime timestampUpperBoundInclusive)
		{
			return default((ItemActionType, MetacoreTime));
		}

		public (ItemActionType, MetacoreTime) NextEvent(IPlayer player, Coordinate coordinate, IBoardQuery boardQuery)
		{
			return default((ItemActionType, MetacoreTime));
		}

		public bool CanBeUpgraded(IPlayer player)
		{
			return false;
		}

		[Obsolete("use the one with MetacoreTime")]
		public bool CanBeMergedWithItem(IPlayer player, MergeItem otherItem, MetaTime checkTimestamp)
		{
			return false;
		}

		public bool CanBeMergedWithItem(IPlayer player, MergeItem otherItem, MetacoreTime checkTimestamp)
		{
			return false;
		}

		public IItemDefinition DecayProduct(IGenerationContext generationContext, MergeBoard board)
		{
			return null;
		}

		public void CalculateNextEstimatedDecayEndTime(MetacoreTime currentTimestamp, IPlayer player)
		{
		}

		public ActivationResult Activate(MetacoreTime timestamp, IPlayer player, IBoard board)
		{
			return default(ActivationResult);
		}

		[Obsolete("Use the one with MetacoreTime")]
		public ActivationResult Activate(MetaTime timestamp, IPlayer player, IBoard board)
		{
			return default(ActivationResult);
		}

		public ActivationResult Activate(MetacoreTime timestamp, IPlayer player, int capacityConsumptionMultiplier)
		{
			return default(ActivationResult);
		}

		public ActivationResult SpecialActivate(int takeAmount, IPlayer player, int capacityConsumptionMultiplier, bool onFireActive, out int spawned)
		{
			spawned = default(int);
			return default(ActivationResult);
		}

		public bool TryToFillActivationStorage(IPlayer player, MetacoreTime timestamp, bool boardHasCooldownRemoverState = false, bool boardHasOnFireState = false)
		{
			return false;
		}

		public MetaTime GetStartTimeOfActivationStorageFill()
		{
			return default(MetaTime);
		}

		public void ManualIncreaseStartTimeOfActivationStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public void ManualIncreaseOfNextEstimatedActivationStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public IItemDefinition ActivationItemType(IGenerationContext generationContext, ProducerContext producerContext, IPlayer player, MetacoreTime timestamp, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetActivationSpawnItems_003Ed__97))]
		public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, IPlayer player, MetacoreTime timestamp, ProducerContext producerContext)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> GetActivationSpawnItems(IPlayer player, IBoard board)
		{
			return null;
		}

		public int ItemsPerActivation(bool onFire, IPlayer player)
		{
			return 0;
		}

		public int GetSpecialActivationAmount()
		{
			return 0;
		}

		public IPlacement GetActivationPlacementStyle(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IPlacement SpawnPlacement(IPlayer player)
		{
			return null;
		}

		public bool SpawnStorageFull(IMergeMansionGameConfig config)
		{
			return false;
		}

		public IItemDefinition SpawnItemType(IPlayer player, MergeBoard board, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public int GetUnlockedSpawnItemCount(IPlayer player, MergeBoard board)
		{
			return 0;
		}

		public IEnumerable<IItemDefinition> GetUnlockedSpawnItems(IPlayer player, MergeBoard board)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetUnlockedMergeItems_003Ed__109))]
		public IEnumerable<IItemDefinition> GetUnlockedMergeItems(IPlayer player)
		{
			return null;
		}

		public void Spawn(IPlayer player, bool takeFromStorageContainer, MetaTime timestamp)
		{
		}

		public bool TrySpawning(IGenerationContext generationContext, out IItemDefinition generatedItem)
		{
			generatedItem = null;
			return false;
		}

		public SpawnReaction TryToFillSpawnStorageOrSpawn(IPlayer player, MetaTime timestamp, bool hasEmptySpaceNear)
		{
			return default(SpawnReaction);
		}

		public void StartNextSpawnStorageFill(IPlayer player, MetaTime timestamp)
		{
		}

		public MetaTime GetStartTimeOfSpawnStorageFill()
		{
			return default(MetaTime);
		}

		public void ManualIncreaseStartTimeOfSpawnStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public void ManualIncreaseOfNextEstimatedSpawnStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public bool IsCollectable(IPlayer player)
		{
			return false;
		}

		public bool IsBooster(IPlayer player)
		{
			return false;
		}

		public F32 GetBoosterFactor(IPlayer player)
		{
			return default(F32);
		}

		public F32 GetSpawnBoosterFactor(IPlayer player)
		{
			return default(F32);
		}

		public IBoostArea GetBoostArea(IPlayer player)
		{
			return null;
		}

		public bool BoosterBoostsItem(int checkedItem, IPlayer player)
		{
			return false;
		}

		public bool IsAffectedByBooster(IPlayer player)
		{
			return false;
		}

		public void SetTimeMultiplier(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetacoreTime timestamp)
		{
		}

		[Obsolete]
		public void SetTimeMultiplier(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetaTime timestamp)
		{
		}

		public void ResetTimeMultiplier(IPlayer player, MetacoreTime timestamp)
		{
		}

		public void ResetTimeMultiplier(IPlayer player, MetaTime timestamp)
		{
		}

		public void ActualTimeMultiplierSetter(IPlayer player, F32 multiplier, F32 spawnMultiplier, MetaTime timestamp)
		{
		}

		public void ApplyTimeBoostToTimes(MetaTime timestamp, IPlayer player)
		{
		}

		public bool HideSinkProgressBar(IPlayer player)
		{
			return false;
		}

		public bool AllowReverseSinking(IPlayer player)
		{
			return false;
		}

		public bool DoesTakeInItem(IPlayer player, int type)
		{
			return false;
		}

		public bool DoTakeInAction(IPlayer player, int type)
		{
			return false;
		}

		public IItemDefinition GetSinkCompletionItem(IPlayer player, MergeBoard board)
		{
			return null;
		}

		public bool IsConsumable(IPlayer player)
		{
			return false;
		}

		public int ConsumableCap(IPlayer player)
		{
			return 0;
		}

		public bool CanConsumableMergeWithSameType(IPlayer player)
		{
			return false;
		}

		public void RemoveItemFromBubble()
		{
		}

		public bool IsSellConfirmationRequired(IPlayer player)
		{
			return false;
		}

		public (Currencies, long) SellPrice(SharedGlobals sharedGlobals, IPlayer player)
		{
			return default((Currencies, long));
		}

		public void SkipGameTime(MetacoreDuration numMillisecond, IMergeMansionGameConfig config)
		{
		}

		public void FixActivationRelativeTimesIfNeeded(MetacoreTime timestamp)
		{
		}

		public void FixSpawnRelativeTimesIfNeeded(MetacoreTime timestamp)
		{
		}

		public void AdjustTimesAfterPausing(MetacoreDuration timeDifference, IMergeMansionGameConfig config)
		{
		}

		public void ResetSpawnState(IPlayer player, MetacoreTime timestamp)
		{
		}

		public string DebugLogActivation()
		{
			return null;
		}

		public static void DebugMergeItem(MergeItem m, MergeBoard board, IPlayer player)
		{
		}

		public bool AllowNearMatching(IPlayer player)
		{
			return false;
		}

		public bool IsDragSafeAreaEnabled(IPlayer player)
		{
			return false;
		}

		public void RestoreSpawnerState(IItemDefinition itemDefinition)
		{
		}

		public MetaDuration GetAge(MetaTime now)
		{
			return default(MetaDuration);
		}

		public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player)
		{
		}

		public bool ClampBrokenItemTimers(MetacoreTime currentTime, LogChannel log, IPlayer player)
		{
			return false;
		}

		public void AddAttachment(IItemAttachment attachment)
		{
		}

		public static List<IBubbleBonus> GenerateBubbleBonus(IPlayer player, IItemDefinition itemInBubble, MergeBoardId boardId)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetPotentialEventsForBubbleBonus_003Ed__181))]
		public static IEnumerable<(IBubbleBonusEvent, EnergyType, F32)> GetPotentialEventsForBubbleBonus(PlayerModel player, MergeBoardId boardId)
		{
			return null;
		}

		public void ClaimLeaderboardScoreIfAvailable(IPlayer player, LeaderboardEventScoreChangeSourceAction sourceAction)
		{
		}

		public void ClaimRewardsIfAvailable(IPlayer player, Coordinate coordinate)
		{
		}

		public void GenerateFishingRodState(IPlayer player)
		{
		}

		public void SetFishingRodState(FishingRodState fishingRodState)
		{
		}

		public int ConsumeDecayCycle()
		{
			return 0;
		}

		public void SetPersistent(bool disableDecayAnimation, int decayCycles, int itemStates, IItemDefinition resetToItem, int startCycles, int currentState, bool forced = false)
		{
		}

		public bool IsSinkable(IPlayer player)
		{
			return false;
		}

		public void RemoveAttachments(Predicate<IItemAttachment> matcher)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
