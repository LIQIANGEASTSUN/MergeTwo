using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using GameLogic.Config.Costs;
using GameLogic.Player;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachine
	{
		public enum StartResult
		{
			Success = 0,
			InvalidState = 1,
			NotEnoughCurrency = 2
		}

		public enum FinishResult
		{
			Success = 0,
			InvalidState = 1,
			SpawnItemsQueueNotEmpty = 2,
			MergesAvailable = 3
		}

		public enum CompleteTasksResult
		{
			Success = 0,
			InvalidState = 1
		}

		public enum EnqueueSpawnItemsResult
		{
			Success = 0,
			InvalidState = 1,
			Overheat = 2,
			NotEnoughCurrency = 3
		}

		public enum DequeueSpawnItemResult
		{
			Success = 0,
			InvalidState = 1,
			QueueEmpty = 2,
			ContainerFull = 3
		}

		public enum MergeItemsResult
		{
			Success = 0,
			NoMerges = 1
		}

		public enum PurchaseSpecialSaleResult
		{
			Success = 0,
			InvalidState = 1,
			MaxPurchaseCountReached = 2,
			NoCameraTargets = 3,
			NotEnoughCurrency = 4
		}

		public enum PurchaseContinueResult
		{
			Success = 0,
			InvalidState = 1,
			NotEnoughCurrency = 2
		}

		[CompilerGenerated]
		public sealed class _003CGetAllTasks_003Ed__296 : IEnumerable<MysteryMachineTaskInfo>, IEnumerable, IEnumerator<MysteryMachineTaskInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MysteryMachineTaskInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MysteryMachine _003C_003E4__this;

			[NonSerialized]
			public Type taskType;

			public Type _003C_003E3__taskType;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskSetInfo>>.Enumerator _003C_003E7__wrap1;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskInfo>>.Enumerator _003C_003E7__wrap2;

			MysteryMachineTaskInfo IEnumerator<MysteryMachineTaskInfo>.Current
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
			public _003CGetAllTasks_003Ed__296(int _003C_003E1__state)
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
			IEnumerator<MysteryMachineTaskInfo> IEnumerable<MysteryMachineTaskInfo>.GetEnumerator()
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
		public sealed class _003CGetCurrentTasks_003Ed__291 : IEnumerable<MysteryMachineTaskInfo>, IEnumerable, IEnumerator<MysteryMachineTaskInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MysteryMachineTaskInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MysteryMachine _003C_003E4__this;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskInfo>>.Enumerator _003C_003E7__wrap1;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskSetInfo>>.Enumerator _003C_003E7__wrap2;

			MysteryMachineTaskInfo IEnumerator<MysteryMachineTaskInfo>.Current
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
			public _003CGetCurrentTasks_003Ed__291(int _003C_003E1__state)
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
			IEnumerator<MysteryMachineTaskInfo> IEnumerable<MysteryMachineTaskInfo>.GetEnumerator()
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
		public sealed class _003CGetCurrentTasksToComplete_003Ed__292 : IEnumerable<MysteryMachineTaskInfo>, IEnumerable, IEnumerator<MysteryMachineTaskInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MysteryMachineTaskInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MysteryMachine _003C_003E4__this;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskInfo>>.Enumerator _003C_003E7__wrap1;

			[NonSerialized]
			public List<MetaRef<MysteryMachineTaskSetInfo>>.Enumerator _003C_003E7__wrap2;

			MysteryMachineTaskInfo IEnumerator<MysteryMachineTaskInfo>.Current
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
			public _003CGetCurrentTasksToComplete_003Ed__292(int _003C_003E1__state)
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
			IEnumerator<MysteryMachineTaskInfo> IEnumerable<MysteryMachineTaskInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public const int InitialHeatLevel = 1;

		public const int InitialLevel = 1;

		public const int MaxScore = 999999999;

		[IgnoreDataMember]
		[NonSerialized]
		public List<int> freeSaleItemWeights;

		[IgnoreDataMember]
		public MysteryMachineEventInfo MysteryMachineEventInfo;

		[IgnoreDataMember]
		public MysteryMachineInfo MysteryMachineInfo;

		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineEventId MysteryMachineEventId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MysteryMachineId MysteryMachineId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<MysteryMachineContainerItemData> ContainerItems { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int TotalSpawnedItemsCount { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int HeatLevel { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int CoughCount { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public IMysteryMachineItem PreviousMergeResult { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public int PreviousMergeResultIndex { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int Score { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public F64 ScoreMultiplier { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public MetaDictionary<string, int> MinLevelsByChainId { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public List<int> SpawnCountWeights { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public IMysteryMachineItem NextItem { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public int JackpotMultiplier { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MetaDictionary<MysteryMachineSpecialSaleId, int> SpecialSaleCostSteps { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public MysteryMachineMultiplierInfo RunningChainMultiplier { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public MysteryMachineState State { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public MetaDictionary<MysteryMachineSpecialSaleId, int> SpecialSaleFreeItems { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public int HighScore { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public ulong TotalScore { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public F64 BaseScoreMultiplier { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public List<int> HeatLevelScores { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public MetaDictionary<int, int> CurrentTaskItemsSpawned { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public MetaDictionary<MysteryMachineTaskSetId, List<MysteryMachineTaskId>> CompletedTasksByTaskSet { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public int OverheatCount { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public MetaDictionary<string, int> ExtraItemGrants { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public MetaDictionary<MysteryMachineTaskId, ulong> CurrentTaskTotalScores { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public bool AllTasksCompletedRewardClaimed { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		public int StartCount { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		public int Level { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		public MetaDictionary<MysteryMachineTaskId, int> RecurringTasksCompleted { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		public List<IMysteryMachineItem> SpawnItemsQueue { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		public MysteryMachineSpecialSaleId LatestFreeSpecialSaleItem { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public int TotalSpawnInitiationCount { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		public int RunSpawnInitiationCount { get; set; }

		[MetaMember(37, MetaMemberFlags.None)]
		public int ContinuesPurchased { get; set; }

		[MetaMember(38, MetaMemberFlags.None)]
		public MetaDictionary<string, int> RunSpawnItems { get; set; }

		[MetaMember(39, MetaMemberFlags.None)]
		public MetaDictionary<string, int> RunSpecialSaleDiamonds { get; set; }

		[MetaMember(40, MetaMemberFlags.None)]
		public MetaDictionary<string, int> RunSpecialSaleFree { get; set; }

		[MetaMember(41, MetaMemberFlags.None)]
		public OrderedSet<MysteryMachineTaskId> TasksAcknowledged { get; set; }

		[MetaMember(42, MetaMemberFlags.None)]
		public MetaTime RunStartTime { get; set; }

		[MetaMember(43, MetaMemberFlags.None)]
		public int RunDiamondsSpentOnMachineEnergy { get; set; }

		[MetaMember(44, MetaMemberFlags.None)]
		public bool NewHighScore { get; set; }

		[MetaMember(45, MetaMemberFlags.None)]
		public int FinishCount { get; set; }

		[MetaMember(46, MetaMemberFlags.None)]
		public int? FinishedHighScore { get; set; }

		[MetaMember(47, MetaMemberFlags.None)]
		public int? SubmittedLeaderboardHighScore { get; set; }

		[MetaMember(48, MetaMemberFlags.None)]
		public bool SubmittedNewLeaderboardHighScore { get; set; }

		public MysteryMachine()
		{
		}

		public MysteryMachine(IPlayer player, MysteryMachineEventInfo mysteryMachineEventInfo, MysteryMachineInfo mysteryMachineInfo)
		{
		}

		public EnqueueSpawnItemsResult GetEnqueueSpawnItemsResult(IPlayer player)
		{
			return default(EnqueueSpawnItemsResult);
		}

		public void EnqueueSpawnItems(PlayerModel playerModel)
		{
		}

		public void EnqueueSpawnItemsFromCollect(IPlayer player, int itemCount)
		{
		}

		public void EnqueueSpawnItem(IPlayer player)
		{
		}

		public DequeueSpawnItemResult GetDequeueSpawnItemResult()
		{
			return default(DequeueSpawnItemResult);
		}

		public void DequeueSpawnItem(IPlayer player)
		{
		}

		public int GetEnqueueSpawnItemsCount(PlayerModel playerModel)
		{
			return 0;
		}

		public (int, int) GetEnqueueSpawnItemsRange()
		{
			return default((int, int));
		}

		public void HandleCough(PlayerModel playerModel)
		{
		}

		public F64 GetLevelMultiplier()
		{
			return default(F64);
		}

		public F64 GetLevelMultiplierForLevel(int wantedLevel)
		{
			return default(F64);
		}

		public void LevelUp(IPlayer player)
		{
		}

		public void HeatLevelUp(PlayerModel playerModel)
		{
		}

		public bool TryGetScoreForHeatLevel(int heatLevel, out int score)
		{
			score = default(int);
			return false;
		}

		public void SetScoreForHeatLevel(int score, int heatLevel)
		{
		}

		public MysteryMachineHeatLevelInfo GetHeatLevelInfo()
		{
			return null;
		}

		public MergeItemsResult GetMergeContainerItemsResult(PlayerModel playerModel, MetaDuration minDurationSinceOriginalSpawn, out MysteryMachineMergeData mergeData)
		{
			mergeData = default(MysteryMachineMergeData);
			return default(MergeItemsResult);
		}

		public void MergeContainerItems(PlayerModel playerModel, MysteryMachineMergeData mergeData, bool isCameraEffectMerge = false, bool skipSpecialItems = false)
		{
		}

		public void HandleMysteryMachineScoring(IPlayer playerModel, IMysteryMachineItem item, MysteryMachineMergeData mergeData)
		{
		}

		public void HandleMysteryMachineScoreMultiplication()
		{
		}

		public void HandleAfterMergeVisualizationScoring(int score)
		{
		}

		public bool TryFindMerge(IPlayer player, MetaDuration minDurationSinceOriginalSpawn, out MysteryMachineMergeData data)
		{
			data = default(MysteryMachineMergeData);
			return false;
		}

		public List<MysteryMachineMergeData> FindAllMerges(IPlayer player, MetaDuration minDurationSinceOriginalSpawn)
		{
			return null;
		}

		public bool TryFindChainMergePreferMinLevel(IPlayer player, IStringId chainId, List<MysteryMachineMergeData> merges, out MysteryMachineMergeData data)
		{
			data = default(MysteryMachineMergeData);
			return false;
		}

		public void AddItemToContainer(IPlayer player, IMysteryMachineItem item)
		{
		}

		public void OnItemFound(IPlayer player, IMysteryMachineItem item)
		{
		}

		public void HandleSpecialPurchaseSaleScorings(IPlayer player, int itemIndex)
		{
		}

		public IMysteryMachineItem GenerateItem(IPlayer player)
		{
			return null;
		}

		public IMysteryMachineItem ApplyMinChainLevel(IPlayer player, IMysteryMachineItem item)
		{
			return null;
		}

		public IMysteryMachineItem ChangeItemToLevel(IPlayer player, IMysteryMachineItem item, int level)
		{
			return null;
		}

		public IMysteryMachineItem GenerateItemWithoutMinChainLevel(IPlayer player)
		{
			return null;
		}

		public bool IsInInitialSpawnOrder(out List<MetaRef<MysteryMachineItemInfo>> itemRefs, out int index)
		{
			itemRefs = null;
			index = default(int);
			return false;
		}

		public bool IsInFtue()
		{
			return false;
		}

		public void SkipFtue()
		{
		}

		public List<(IMysteryMachineItem, int)> GetItemWeightPairs(IPlayer player)
		{
			return null;
		}

		public GameCurrencyCost GetSpawnItemsCost()
		{
			return null;
		}

		public bool ContainsItemsToActivate(IPlayer player)
		{
			return false;
		}

		public int GetItemToActivateIndex(IPlayer player)
		{
			return 0;
		}

		public List<int> GetItemsToActivateIndices(IPlayer player)
		{
			return null;
		}

		public bool CanActivateItem(IPlayer player, IMysteryMachineItem item)
		{
			return false;
		}

		public void ApplyHeatLevelPerks(IPlayer player)
		{
		}

		public void ApplyPerk(IPlayer player, IMysteryMachinePerk perk)
		{
		}

		public void UpdateContainerItemsInChainToMinLevel(IPlayer player, string chainId, int minLevel)
		{
		}

		public void UpdateNextItemToMinLevel(IPlayer player, string chainId, int minLevel)
		{
		}

		public void RefreshNextItem(IPlayer player)
		{
		}

		public bool IsOverheated()
		{
			return false;
		}

		public PurchaseContinueResult GetPurchaseContinueResult(IPlayer player)
		{
			return default(PurchaseContinueResult);
		}

		public void PurchaseContinue(IPlayer player)
		{
		}

		public GameCurrencyCost GetContinueCost()
		{
			return null;
		}

		public GameCurrencyCost GetStartCost()
		{
			return null;
		}

		public StartResult GetStartResult(IPlayer player)
		{
			return default(StartResult);
		}

		public StartResult GetMysteryMachinePreparingState(IPlayer player)
		{
			return default(StartResult);
		}

		public void Start(IPlayer player)
		{
		}

		public void MachinePreparationsDone(IPlayer player)
		{
		}

		public void ResetRunData(IPlayer player)
		{
		}

		public void ResetNextItemLevel(IPlayer player)
		{
		}

		public FinishResult GetFinishResult(PlayerModel playerModel)
		{
			return default(FinishResult);
		}

		public void AddScore(int scoreAddition)
		{
		}

		public void UpdateTotalScore(int scoreAddition)
		{
		}

		public void UpdateCurrentTaskTotalScores(int scoreAddition)
		{
		}

		public static ulong GetTotalScoreAfterScoreAddition(string name, ulong totalScore, int scoreAddition)
		{
			return 0uL;
		}

		public bool UpdateHighScore(int score)
		{
			return false;
		}

		public bool ShouldSubmitScoreToLeaderboardOnFinish()
		{
			return false;
		}

		public void Finish(PlayerModel playerModel)
		{
		}

		public PurchaseSpecialSaleResult GetPurchaseSpecialSaleResult(IPlayer player, MysteryMachineSpecialSaleInfo specialSale)
		{
			return default(PurchaseSpecialSaleResult);
		}

		public void PurchaseSpecialSale(IPlayer player, MysteryMachineSpecialSaleInfo specialSale)
		{
		}

		public GameCurrencyCost GetSpecialSaleCost(MysteryMachineSpecialSaleInfo specialSale)
		{
			return null;
		}

		public int GetSpecialSaleCostStep(MysteryMachineSpecialSaleInfo specialSale)
		{
			return 0;
		}

		public int GetRandomCameraItemIndex(IPlayer player, bool commit)
		{
			return 0;
		}

		public void AddSpecialSaleFreeCharge(MysteryMachineSpecialSaleId specialSaleId)
		{
		}

		public void RemoveSpecialSaleFreeCharge(MysteryMachineSpecialSaleId specialSaleId)
		{
		}

		public int GetSpecialSaleFreeChargeAmount(MysteryMachineSpecialSaleId specialSaleId)
		{
			return 0;
		}

		public bool IsSpecialSaleItemFree(MysteryMachineSpecialSaleId specialSaleId)
		{
			return false;
		}

		public bool SpecialSaleMaxPurchaseCountReached(MysteryMachineSpecialSaleInfo specialSale)
		{
			return false;
		}

		public int GetSpecialSalePurchasedAmount(MysteryMachineSpecialSaleInfo specialSale)
		{
			return 0;
		}

		public MysteryMachineSpecialSaleId GetRandomSpecialSaleId(IPlayer player)
		{
			return null;
		}

		public List<int> GetSpecialSaleWeightPairs()
		{
			return null;
		}

		public int GetExtraItemAmount(IPlayer playerModel, string itemType)
		{
			return 0;
		}

		public bool HasFreeSpecialSaleItems()
		{
			return false;
		}

		public CompleteTasksResult GetCompleteTasksResult()
		{
			return default(CompleteTasksResult);
		}

		public void CompleteTasks(PlayerModel playerModel)
		{
		}

		public void CompleteAvailableCompletableTasks(PlayerModel playerModel)
		{
		}

		public void CompleteCompletableRecurringTasks(PlayerModel playerModel, int eventInstance, string eventInstanceId)
		{
		}

		public void CompleteAvailableCompletableTasksInTaskSet(PlayerModel playerModel, int eventInstance, string eventInstanceId, MysteryMachineTaskSetInfo taskSet)
		{
		}

		public bool IsTaskCompletedInTaskSet(MysteryMachineTaskSetInfo taskSet, MysteryMachineTaskInfo taskInfo)
		{
			return false;
		}

		public int GetCompletedAmountFromTaskSet(MysteryMachineTaskSetInfo taskSet)
		{
			return 0;
		}

		public void HandleOverheatBaseScoreMultiplierIncrease()
		{
		}

		[IteratorStateMachine(typeof(_003CGetCurrentTasks_003Ed__291))]
		public IEnumerable<MysteryMachineTaskInfo> GetCurrentTasks()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetCurrentTasksToComplete_003Ed__292))]
		public IEnumerable<MysteryMachineTaskInfo> GetCurrentTasksToComplete()
		{
			return null;
		}

		public bool CanTaskBeCompleted(MysteryMachineTaskInfo task)
		{
			return false;
		}

		public MysteryMachineTaskInfo GetCurrentTaskToCompleteInTaskSet(MysteryMachineTaskSetInfo taskSet)
		{
			return null;
		}

		public MysteryMachineTaskInfo GetNextTaskIfAllowedDuringRun(MysteryMachineTaskInfo currentTaskInfo)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAllTasks_003Ed__296))]
		public IEnumerable<MysteryMachineTaskInfo> GetAllTasks(Type taskType)
		{
			return null;
		}

		public IEnumerable<MysteryMachineTaskInfo> GetAllTasksFromTaskSetInReverseOrder(MysteryMachineTaskSetInfo taskSetFrom)
		{
			return null;
		}

		public bool CanCompleteAnyOfCurrentTasks()
		{
			return false;
		}

		public List<List<MysteryMachineTaskInfo>> GetEndOfRunTasks()
		{
			return null;
		}

		public MysteryMachineTaskSetInfo GetTaskSetForTaskInfo(MysteryMachineTaskInfo taskInfo)
		{
			return null;
		}

		public bool IsTaskInfoFirstUncompletedInAnyTaskSet(MysteryMachineTaskInfo taskInfo)
		{
			return false;
		}

		public List<MysteryMachineTaskInfo> GetEndOfRunTasksInTaskSet(MysteryMachineTaskSetInfo taskSet)
		{
			return null;
		}

		public MysteryMachineTaskInfo GetFirstUncompletedTaskInTaskSet(MysteryMachineTaskSetInfo taskSet)
		{
			return null;
		}

		public MysteryMachineTaskInfo GetNthUncompletedTaskInTaskSet(MysteryMachineTaskSetInfo taskSet, int n)
		{
			return null;
		}

		public static bool TaskAllowsCompletingMultipleInARow(IMysteryMachineTask task)
		{
			return false;
		}

		public bool AllTasksCompleted()
		{
			return false;
		}

		public int GetCompletedTaskCount()
		{
			return 0;
		}

		public bool CanClaimAllTasksCompletedReward()
		{
			return false;
		}

		public void ClaimAllTasksCompletedReward(PlayerModel playerModel)
		{
		}

		[MetaOnDeserialized]
		public void TryResolveInfo(MetaOnDeserializedParams onDeserializedParams)
		{
		}
	}
}
