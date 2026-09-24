using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Consumption;
using GameLogic.Player.Items.ProgressionEvent;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Modes;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Newtonsoft.Json;

namespace GameLogic.Player.Board
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 4 })]
	public sealed class MergeBoard : IBoard, IBoardQuery
	{
		public struct CoordinateBoosts
		{
			public F32 BoostFactor;

			public F32 SpawnBoostFactor;
		}

		[CompilerGenerated]
		public sealed class _003CManualSpawnMultipleItemsToBoard_003Ed__112 : IEnumerable<MergeBoardAct>, IEnumerable, IEnumerator<MergeBoardAct>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeBoardAct _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<Coordinate> coordinates;

			public IEnumerable<Coordinate> _003C_003E3__coordinates;

			[NonSerialized]
			public int howManyToSpawn;

			public int _003C_003E3__howManyToSpawn;

			public MergeBoard _003C_003E4__this;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IItemDefinition definition;

			public IItemDefinition _003C_003E3__definition;

			[NonSerialized]
			public IGenerationContext generationContext;

			public IGenerationContext _003C_003E3__generationContext;

			[NonSerialized]
			public MetacoreTime timeForActivation;

			public MetacoreTime _003C_003E3__timeForActivation;

			[NonSerialized]
			public ItemVisibility spawnVisibility;

			public ItemVisibility _003C_003E3__spawnVisibility;

			[NonSerialized]
			public AuxEnergyAttachmentChance auxEnergyAttachmentChance;

			public AuxEnergyAttachmentChance _003C_003E3__auxEnergyAttachmentChance;

			[NonSerialized]
			public Coordinate spawnerCoordinate;

			public Coordinate _003C_003E3__spawnerCoordinate;

			[NonSerialized]
			public IEnumerator<Coordinate> _003C_003E7__wrap1;

			MergeBoardAct IEnumerator<MergeBoardAct>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(MergeBoardAct);
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
			public _003CManualSpawnMultipleItemsToBoard_003Ed__112(int _003C_003E1__state)
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
			IEnumerator<MergeBoardAct> IEnumerable<MergeBoardAct>.GetEnumerator()
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
		public sealed class _003CManualSpawnMultipleItemsToBoard_003Ed__113 : IEnumerable<MergeBoardAct>, IEnumerable, IEnumerator<MergeBoardAct>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeBoardAct _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<Coordinate> coordinates;

			public IEnumerable<Coordinate> _003C_003E3__coordinates;

			[NonSerialized]
			public int howManyToSpawn;

			public int _003C_003E3__howManyToSpawn;

			public MergeBoard _003C_003E4__this;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IItemDefinition definition;

			public IItemDefinition _003C_003E3__definition;

			[NonSerialized]
			public IGenerationContext generationContext;

			public IGenerationContext _003C_003E3__generationContext;

			[NonSerialized]
			public MetacoreTime timeForActivation;

			public MetacoreTime _003C_003E3__timeForActivation;

			[NonSerialized]
			public ItemVisibility spawnVisibility;

			public ItemVisibility _003C_003E3__spawnVisibility;

			[NonSerialized]
			public AuxEnergyAttachmentChance auxEnergyAttachmentChance;

			public AuxEnergyAttachmentChance _003C_003E3__auxEnergyAttachmentChance;

			[NonSerialized]
			public Coordinate spawnerCoordinate;

			public Coordinate _003C_003E3__spawnerCoordinate;

			[NonSerialized]
			public IEnumerator<Coordinate> _003C_003E7__wrap1;

			MergeBoardAct IEnumerator<MergeBoardAct>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(MergeBoardAct);
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
			public _003CManualSpawnMultipleItemsToBoard_003Ed__113(int _003C_003E1__state)
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
			IEnumerator<MergeBoardAct> IEnumerable<MergeBoardAct>.GetEnumerator()
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
		public sealed class _003Cget_Items_003Ed__91 : IEnumerable<(Coordinate, MergeItem)>, IEnumerable, IEnumerator<(Coordinate, MergeItem)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (Coordinate, MergeItem) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MergeBoard _003C_003E4__this;

			[NonSerialized]
			public int _003Cy_003E5__2;

			[NonSerialized]
			public int _003Cx_003E5__3;

			(Coordinate, MergeItem) IEnumerator<(Coordinate, MergeItem)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((Coordinate, MergeItem));
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
			public _003Cget_Items_003Ed__91(int _003C_003E1__state)
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
			IEnumerator<(Coordinate, MergeItem)> IEnumerable<(Coordinate, MergeItem)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[NonSerialized]
		public readonly SortedDictionary<MetaTime, (ItemActionType, MergeItem, Coordinate)> timeResolveDictionary;

		[NonSerialized]
		public readonly Dictionary<Coordinate, CoordinateBoosts> boostOfCoordinate;

		[IgnoreDataMember]
		[NonSerialized]
		public ICollection<Coordinate> itemCoordinates;

		[MetaMember(1, MetaMemberFlags.None)]
		public List<MergeItem> BoardItems { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime BoardCreationTime { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaTime LastModificationTime { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int Width { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int Height { get; set; }

		[JsonProperty("boardId")]
		[MetaMember(7, MetaMemberFlags.None)]
		public MergeBoardId BoardIdentifier { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool HasEnded { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public BoardBubbleState BubbleState { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public long MergeCount { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public List<MetaDuration> PendingTimeSkips { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public MetaTime ProducerCooldownRemoverEndTime { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public MetaTime ProducerCooldownRemoverStartTime { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MetaDuration PendingCooldownRemover { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public OrderedSet<int> DiscoveredItems { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public MetaDuration PendingOnFire { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public MetaTime OnFireStartTime { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public MetaTime OnFireEndTime { get; set; }

		[IgnoreDataMember]
		public List<MergeItem> MergeItemsNonAlloc => null;

		[IgnoreDataMember]
		public IEnumerable<MergeItem> MergeItems => null;

		[IgnoreDataMember]
		public (int width, int height) BoardDimensions => default((int, int));

		[IgnoreDataMember]
		public IPlacement DefaultPlacement { get; }

		[IgnoreDataMember]
		public int BoardSize => 0;

		[IgnoreDataMember]
		MetacoreTime IBoard.BoardCreationTime => default(MetacoreTime);

		[IgnoreDataMember]
		public IEnumerable<Coordinate> Coordinates => null;

		[IgnoreDataMember]
		public MergeItem this[Coordinate coord]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		[IgnoreDataMember]
		public IEnumerable<(Coordinate, MergeItem)> Items
		{
			[IteratorStateMachine(typeof(_003Cget_Items_003Ed__91))]
			get
			{
				return null;
			}
		}

		public MergeBoard()
		{
		}

		public MergeBoard(MergeBoardId identifier, int boardWidth, int boardHeight, MetacoreTime creationTime)
		{
		}

		public MergeBoard(IPlayer player, MergeBoardId identifier, int boardWidth, int boardHeight, MetacoreTime creationTime, IEnumerable<(ItemDefinition definition, ItemVisibility visibility)> items, IGenerationContext generationContext)
		{
		}

		public static int GetIndex(int x, int y, int width)
		{
			return 0;
		}

		public int GetIndex(Coordinate coordinate)
		{
			return 0;
		}

		public Coordinate GetCoord(int index)
		{
			return default(Coordinate);
		}

		public void ClearBoard(MetacoreTime timestamp)
		{
		}

		public void ClearBoardExceptCoordinates(List<Coordinate> coordinates, MetacoreTime timestamp)
		{
		}

		public void PauseBoardItems()
		{
		}

		public void UnpauseBoardItems()
		{
		}

		public bool NeedsUpdate(IPlayer player, MetacoreTime endTimestamp)
		{
			return false;
		}

		public MergeItem GetMergeItemFromCoordinate(Coordinate coordinate)
		{
			return null;
		}

		public void Update(IPlayer player, MetacoreTime endTimestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public void RefundSankItems(IPlayer player, ISinkState sinkState, MergeItem fromItem, Coordinate fromCoordinate, MetaTime timestamp, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public bool TryToSpawnFromSpawner(IPlayer player, MetaTime timestamp, MergeItem item, ICollection<Coordinate> possibleSpawnCoordinates, bool takeFromStorage, IGenerationContext generationContext, out Coordinate spawnCoordinate)
		{
			spawnCoordinate = default(Coordinate);
			return false;
		}

		public MergeResult ProcessMergeOrMoveAttempt(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, IBubbleSpawner bubbleSpawner, IProgressionEventItemSpawner progressionEventItemSpawner, ICollection<MergeBoardAct> collectedActs)
		{
			return default(MergeResult);
		}

		public void ProcessActivationForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime timeForActivation, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, ActivationAuxiliarContext activationAuxiliarContext, out ActivationCostData activationCostData)
		{
			activationCostData = default(ActivationCostData);
		}

		public void ProcessFishingRodTapForCoordinate(PlayerModel player, Coordinate coordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, LuckyType luckyType)
		{
		}

		public bool WouldBeValidTakePhotoAttempt(PlayerModel player, Coordinate itemCoordinate, Coordinate cameraCoordinate, LuckyType luckyType)
		{
			return false;
		}

		public void ProcessTakePhoto(PlayerModel player, Coordinate itemCoordinate, Coordinate cameraCoordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, LuckyType luckyType)
		{
		}

		[IteratorStateMachine(typeof(_003CManualSpawnMultipleItemsToBoard_003Ed__112))]
		public IEnumerable<MergeBoardAct> ManualSpawnMultipleItemsToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnerCoordinate, IEnumerable<Coordinate> coordinates, int howManyToSpawn, MetacoreTime timeForActivation, ItemVisibility spawnVisibility, IGenerationContext generationContext, AuxEnergyAttachmentChance auxEnergyAttachmentChance)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CManualSpawnMultipleItemsToBoard_003Ed__113))]
		public IEnumerable<MergeBoardAct> ManualSpawnMultipleItemsToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnerCoordinate, IEnumerable<Coordinate> coordinates, int howManyToSpawn, MetacoreTime timeForActivation, ItemVisibility spawnVisibility, IGenerationContext generationContext, AuxEnergyAttachmentChance auxEnergyAttachmentChance, MergeItem spawner)
		{
			return null;
		}

		public static bool ShouldAddEnergyAttachment(IItemDefinition itemDefinition, MetacoreTime timeForActivation, AuxEnergyAttachmentChance attachmentChance)
		{
			return false;
		}

		public MergeBoardAct SpawnToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnedFrom, MetacoreTime timeForActivation, bool bubbled, IGenerationContext generationContext, MergeBoardAct.ItemActSource source)
		{
			return default(MergeBoardAct);
		}

		public void ProcessChestClickForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public ICollection<MergeBoardAct> ProcessCollectForCoordinate(IPlayer player, Coordinate coordinate, MetaTime timeForCollecting, IGenerationContext generationContext)
		{
			return null;
		}

		public bool ProcessSellForCoordinate(Coordinate sellCoordinate, MetacoreTime timeForSelling, ICollection<MergeBoardAct> collectedActs, IPlayer player, bool checkTagRestriction)
		{
			return false;
		}

		public bool ProcessSpeedUpForCoordinate(Coordinate speedupCoordinate, MetacoreTime timeForSpeedingUp, ICollection<MergeBoardAct> collectedActs, SpeedUpBehavior speedUpBehavior, IPlayer player)
		{
			return false;
		}

		public bool ProcessSpeedUpForCoordinate(Coordinate speedupCoordinate, MetacoreDuration timeForSpeedingUp, ICollection<MergeBoardAct> collectedActs, SpeedUpBehavior speedUpBehavior, IPlayer player)
		{
			return false;
		}

		public void AddSpawnAmountToAllItems(IPlayer player, MetacoreTime timestamp, IItemDefinition itemDefinition, int numCycles)
		{
		}

		public void AddSpawnAmountToItem(IPlayer player, MetacoreTime timestamp, MergeItem item, int numCycles)
		{
		}

		public static void SpeedUpActivation(IPlayer player, MergeItem item, MetacoreDuration timeAdjust, SpeedUpBehavior speedUpBehavior)
		{
		}

		public static void FillActivationStorageMax(IPlayer player, MergeItem item)
		{
		}

		public static void SpeedUpSpawn(IPlayer player, MergeItem item, MetacoreDuration timeAdjust, SpeedUpBehavior speedUpBehavior)
		{
		}

		public static void FillSpawnStorageMax(IPlayer player, MergeItem item)
		{
		}

		public void ProcessLevelUpItem(Coordinate coordinate, MetacoreTime timeForUpgrade, IPlayer player, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public void ProcessBubblePurchase(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, ICollection<MergeBoardAct> outcomes)
		{
		}

		public void ProcessUnlockItemForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public bool WouldBeValidSinkAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, out bool outIsReverse)
		{
			outIsReverse = default(bool);
			return false;
		}

		public IConsumptionCheckResult WouldBeValidConsumeAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime currentTime)
		{
			return null;
		}

		public bool WouldBeValidMergeAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetaTime actionTimestamp)
		{
			return false;
		}

		public bool InvalidOrSameCoordinates(Coordinate fromPosition, Coordinate toPosition)
		{
			return false;
		}

		public MergeResult GetMoveResult(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime actionTimestamp)
		{
			return default(MergeResult);
		}

		public bool CheckPhotoOfItemAlreadyTaken(IPlayer player, IItemDefinition itemA, IItemDefinition itemB)
		{
			return false;
		}

		public Coordinate ProcessMove(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove)
		{
			return default(Coordinate);
		}

		public Coordinate ProcessSwap(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, bool checkForEmptySlots = true)
		{
			return default(Coordinate);
		}

		public void UpdateVisibilityOfNeighborsRecursive(IPlayer player, ICollection<MergeBoardAct> mergeBoardActs, Coordinate position, MetacoreTime currentTime)
		{
		}

		public void ProcessSinkIn(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForSinkIn, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, bool isReverse)
		{
		}

		public void ProcessConsumeIn(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForConsume, ICollection<MergeBoardAct> collectedActs, IBubbleSpawner bubbleSpawner, MetacoreTime timeForConsumeIn)
		{
		}

		public void ProcessDigEventSink(PlayerModel playerModel, MergeItem sinkableItem)
		{
		}

		public void ProcessMerge(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, IBubbleSpawner bubbleSpawner, IProgressionEventItemSpawner progressionEventItemSpawner, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public bool MatchesActionRequirements(IPlayer player, BoardActionType actionType)
		{
			return false;
		}

		public bool TryToPlacePocketItemToBoard(IPlayer player, Coordinate primaryCoordinate, IBoardItem item, IGenerationContext generationContext, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs)
		{
			return false;
		}

		public bool TryToPlaceRentableInventoryItemToBoard(IPlayer player, BoardInventory inventory, Coordinate primaryCoordinate, IBoardItem item, IGenerationContext generationContext, MetaTime timestamp, ICollection<MergeBoardAct> collectedActs)
		{
			return false;
		}

		public MergeItem AddItem(IPlayer player, Coordinate coordinate, IItemDefinition itemDefinition, IGenerationContext generationContext, MetacoreTime timestamp, ItemVisibility itemVisibility = ItemVisibility.Visible, bool isInBubble = false)
		{
			return null;
		}

		public MergeItem AddItem(IPlayer player, Coordinate coordinate, MergeItem mergeItem, IGenerationContext generationContext, MetacoreTime timestamp, ItemVisibility itemVisibility = ItemVisibility.Visible, bool isInBubble = false)
		{
			return null;
		}

		public MergeItem AddMergeItem(Coordinate itemCoordinate, MergeItem mergeItem, MetacoreTime timestamp, IGenerationContext generationContext, IPlayer player)
		{
			return null;
		}

		public void SendAddMergeItemAnalytics(IPlayer player, MergeItem mergeItem)
		{
		}

		public string GetEventId(IPlayer player)
		{
			return null;
		}

		public List<MergeItem> RemoveItems(IPlayer player, List<Coordinate> coordinatesToRemove, MetacoreTime timestamp, bool consumeAttachments = true)
		{
			return null;
		}

		public MergeItem RemoveItem(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, bool consumeAttachments = true)
		{
			return null;
		}

		public MergeItem DoRemoveItem(Coordinate coordinate, IPlayer player, bool consumeAttachments = true)
		{
			return null;
		}

		public MergeItem ReplaceItem(IPlayer player, Coordinate itemCoord, IItemDefinition replacementItem, MetaTime replacementTimestamp, ICollection<MergeBoardAct> collectedActs)
		{
			return null;
		}

		public IEnumerable<MergeBoardAct> ReplaceItems(IPlayer player, MetacoreTime replacementTimestamp, Predicate<MergeItem> matcher, IGenerationContext generationContext, IItemDefinition replacementItem)
		{
			return null;
		}

		public IEnumerable<MergeBoardAct> EnqueueAutoSellItemsFromBoard(MergeBoardId mergeBoardId, IPlayer player, Predicate<MergeItem> matcher, MetacoreTime sellTimestamp)
		{
			return null;
		}

		public void UpgradeItem(Coordinate coordinate, IPlayer player, MetacoreTime timestamp)
		{
		}

		public void UpdateTimeResolveDictionary(IPlayer player, MetacoreTime timestamp)
		{
		}

		public MetaTime FindNextFreeSpotInTimeResolveDictionary(MetaTime startValue)
		{
			return default(MetaTime);
		}

		public Dictionary<Coordinate, CoordinateBoosts> GetBoostedCoordinates()
		{
			return null;
		}

		public void UpdateListOfBoostedCoordinatesAndApplyBoosts(MetacoreTime timestamp, IPlayer player)
		{
		}

		public void UpdateListOfBoostedCoordinates(MetacoreTime time, IPlayer player)
		{
		}

		public void UpdateBoostedCoordinatesFrom(Coordinate boosterCoord, MergeItem boosterItem, MetacoreTime time, IPlayer player)
		{
		}

		public void ApplyBoosts(IPlayer player, MetacoreTime timestamp)
		{
		}

		public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, int itemId, MetacoreTime timestamp, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, IEnumerable<int> itemIds, MetacoreTime timestamp, bool areBubbleItemsAllowed = false)
		{
			return false;
		}

		public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, IEnumerable<int> itemIds, MetaTime timestamp, out KeyValuePair<int, Coordinate> removedItem, bool areBubbleItemsAllowed = false)
		{
			removedItem = default(KeyValuePair<int, Coordinate>);
			return false;
		}

		public void FindAndRemoveMatchingItems(IPlayer player, Predicate<MergeItem> predicate)
		{
		}

		public void SkipGameTime(MetacoreDuration numMillisecondToSkip, MetacoreTime currentTime, IMergeMansionGameConfig config)
		{
		}

		public (Currencies, long) SellPrice(IMergeItem mergeItem, IMergeMansionGameConfig gameConfig)
		{
			return default((Currencies, long));
		}

		public (Currencies, long) SellPrice(IItemDefinition itemDefinition, IMergeMansionGameConfig gameConfig)
		{
			return default((Currencies, long));
		}

		public bool IsValid(Coordinate coordinate)
		{
			return false;
		}

		public bool IsEmpty(Coordinate coordinate)
		{
			return false;
		}

		public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player)
		{
		}

		public bool IsItemAffectedBySpecificBooster(IPlayer player, Coordinate itemCoordinate, string id)
		{
			return false;
		}

		public bool AllCobwebsCleared()
		{
			return false;
		}

		public void TryToSpawnEnergyModeProgressionEventItemBasedOnChance(IPlayer player, MergeItem fromItem, Coordinate fromCoordinate, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public void RemoveCooldown(IPlayer player)
		{
		}

		public bool HasActiveProducerCooldownRemover(IPlayer player, bool checkPending = true)
		{
			return false;
		}

		public void TryToRemoveCooldown(IPlayer player, IMergeItem item)
		{
		}

		public void AddPendingOnFireDuration(MetaDuration duration)
		{
		}

		public void ConsumePendingOnFireDuration(IPlayer player)
		{
		}

		public bool IsOnFirePending(IPlayer player)
		{
			return false;
		}

		public bool IsOnFireActive(IPlayer player, MetacoreTime timestamp)
		{
			return false;
		}

		public bool IsOnFireActive(IPlayer player)
		{
			return false;
		}

		public static Option<(IItemDefinition, ActivationCostData)> TryGetLeveledUpItemWithFallbacks(IPlayer player, IBoard board, IItemDefinition producerItem, IItemDefinition spawnedItem, EnergyType energyType, EnergyModeInfo energyMode)
		{
			return default(Option<(IItemDefinition, ActivationCostData)>);
		}

		public static Option<(IItemDefinition, ActivationCostData)> TryGetLeveledUpItem(IPlayer player, IBoard board, IItemDefinition producerItem, IItemDefinition spawnedItem, EnergyType energyType, EnergyModeInfo energyMode)
		{
			return default(Option<(IItemDefinition, ActivationCostData)>);
		}
	}
}
