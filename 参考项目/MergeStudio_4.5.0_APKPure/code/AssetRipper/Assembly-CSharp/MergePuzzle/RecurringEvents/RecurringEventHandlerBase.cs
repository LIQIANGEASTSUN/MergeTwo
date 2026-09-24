using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using MergePuzzle.ItemRewardBackup;
using Paxie;
using Paxie.MergeStudio.Features.RecurringEvents;
using UnityEngine;

namespace MergePuzzle.RecurringEvents
{
	public abstract class RecurringEventHandlerBase : FeatureHandlerBase, ITutorialHandler, IRecurringEventHomeIconHandler, IHomeIconHandler, IFeatureHandler, INotificationHandler, IFirebaseHandler, IItemRewardConvertHandler
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadAndGetAddressable_003Ed__64 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public RecurringEventHandlerBase _003C_003E4__this;

			[NonSerialized]
			public RecurringEventAddressableBase _003Caddressable_003E5__2;

			[NonSerialized]
			public UniTask<RecurringEventAddressableBase>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__2;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[NonSerialized]
		public RecurringEventEntity recurringEventEntity;

		[NonSerialized]
		public BoardEntity boardEntity;

		[NonSerialized]
		public BoardData boardData;

		[NonSerialized]
		public RecurringRewardData _currentRewardData;

		public RecurringEventEntity RecurringEventEntity => null;

		public long RemainingTime => 0L;

		public long RemainingTimeToEnd => 0L;

		public long RemainingTimeToStart => 0L;

		public long RemainingTimeToTeaser => 0L;

		public int Progress => 0;

		public int Step => 0;

		public List<RecurringRewardData> Rewards => null;

		public EventState EventState { get; set; }

		public bool IsNewCycleArrivedSession { get; set; }

		public bool ShowFinishPopupOnNewCycle { get; set; }

		public bool IsAnimationPlaying { get; set; }

		public bool IsTutorialCompleted => false;

		public bool IsStarted => false;

		public override bool IsActive => false;

		public int TutorialIndex => 0;

		public List<IRecurringEventReward> ClaimableRewardsOnFinish { get; set; }

		public bool HasClaimableRewardsOnFinish => false;

		public Dictionary<int, int> BoardTaskEventPointEconomy => null;

		public RecurringEventData ModelData => null;

		public List<int> GetSequentialTutorialIndexes()
		{
			return null;
		}

		public abstract RecurringEventConfigBase GetBaseConfig();

		public abstract void OnBoardTaskDoneClicked(BoardTaskItem boardTaskItem);

		public virtual void OnTutorialOpeningBoardScreen()
		{
		}

		public virtual void OnTutorialStart()
		{
		}

		public abstract void OnTimeoutFinish();

		public abstract void OnMaxReachedFinish();

		public abstract void ShowRewardsArea();

		public abstract void FinishInitialize();

		public virtual bool LimitProgress()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CLoadAndGetAddressable_003Ed__64))]
		public UniTask LoadAndGetAddressable()
		{
			return default(UniTask);
		}

		public override void RemoveCompletely()
		{
		}

		public void ReleaseAddressable()
		{
		}

		public bool IsStartTimePassed()
		{
			return false;
		}

		public override void Disable()
		{
		}

		public void FinishEvent()
		{
		}

		public override void Initialize()
		{
		}

		public virtual void SetSavedEntity(RecurringEventEntity savedEntity)
		{
		}

		public virtual void CreateEntity()
		{
		}

		public virtual void ResetEntity()
		{
		}

		public void CreateEntityFirstTime()
		{
		}

		public virtual string GetRecurringEventTableName()
		{
			return null;
		}

		public override string GetAddressableLabel()
		{
			return null;
		}

		public override FeatureAddressableRequest GetAddressableRequest()
		{
			return null;
		}

		public RecurringRewardData GetCurrentRewardData()
		{
			return null;
		}

		public virtual void SetCurrentRewardDataOnInitialize()
		{
		}

		public void SetCurrentRewardData(RecurringRewardData value)
		{
		}

		public new virtual void OnTutorialFinished()
		{
		}

		public void CheckForNewCycleEntity()
		{
		}

		public virtual void ActiveUpdate()
		{
		}

		public void CreateNewCycleEntity()
		{
		}

		public virtual bool IsAllRewardsClaimed()
		{
			return false;
		}

		public bool IsLastStep()
		{
			return false;
		}

		public int GetRewardCount()
		{
			return 0;
		}

		public bool IsTimeOut()
		{
			return false;
		}

		public void SetState()
		{
		}

		public void ForceProcess()
		{
		}

		public override void Process()
		{
		}

		public void InitializeForNewCycle()
		{
		}

		public virtual void OnReceiveAddressable()
		{
		}

		public bool IsEventReadyToShowIcon()
		{
			return false;
		}

		public void SetTeaserShown()
		{
		}

		public void FinishEvent(FeatureEndType featureEndType)
		{
		}

		public virtual void FinishEventOnUpdateTick(FeatureEndType featureEndType)
		{
		}

		public void FinishEventOnTutorialActive()
		{
		}

		public void FinishCompletely()
		{
		}

		public virtual void FinishCompletelyInner()
		{
		}

		public int ConvertCurrenciesToPoints(int setID)
		{
			return 0;
		}

		public virtual void CalculateClaimableRewardsOnFinish()
		{
		}

		public bool CanCurrentRewardClaimable()
		{
			return false;
		}

		public void CalculateClaimableRewardsOnFinishWithSupRewards(int initialProgress)
		{
		}

		public int CalculateClaimableStepCount()
		{
			return 0;
		}

		public int CalculateClaimableStep()
		{
			return 0;
		}

		public virtual bool IsGoingToMaxOut()
		{
			return false;
		}

		public (int, int) CalculateClaimableStepProgress()
		{
			return default((int, int));
		}

		public virtual void StartEvent()
		{
		}

		public virtual void StartEventInner()
		{
		}

		public virtual void SendScrollableItemFirebaseEvent()
		{
		}

		public void AddEventPointsToActiveTasks()
		{
		}

		public void AddCurrencyItemCollectionElements(List<BoardItemSetData> currentSetLst)
		{
		}

		public void AddCurrencyItemCollectionElements(BoardItemSetData currentSetLst)
		{
		}

		public void AddCurrencyItemCollectionElements(SerializableDictionary<int, BoardItemSetData> boardItemSetDatas)
		{
		}

		public void RemoveEventPointsFromActiveTasks()
		{
		}

		public virtual bool IsChangeProgress()
		{
			return false;
		}

		public void ChangeProgress(int addedProgress)
		{
		}

		public void SendFeatureCurrencyGetEvent(int progress, string trigger)
		{
		}

		public virtual T GetHomeIconAsset<T>() where T : UnityEngine.Object
		{
			return null;
		}

		public bool CanRewardClaimable(RecurringRewardData recurringRewardData)
		{
			return false;
		}

		public virtual void UpdateEntityOnClaim(bool isUpdateUI = true)
		{
		}

		public virtual bool CanRewardClaimableOnMeta()
		{
			return false;
		}

		public int GetRequirePointForCurrentRewardClaim()
		{
			return 0;
		}

		public int GetRequirePointForClaim(RecurringRewardData recurringRewardData)
		{
			return 0;
		}

		public void SetCurrentRewardData()
		{
		}

		public virtual void ReceiveMainReward(RecurringRewardData recurringRewardData, bool isUpdateUI = true)
		{
		}

		public void ReceiveSupReward(SupReward supReward, int supRewardNumber, bool isUpdateUI = true)
		{
		}

		public virtual string GetMainRewardFirebaseTrigger()
		{
			return null;
		}

		public virtual string GetSupRewardFirebaseTrigger(int supRewardNumber)
		{
			return null;
		}

		public bool IsOpenFinishPopup()
		{
			return false;
		}

		public AnimationLoop GetBoardIconBecomeClaimableButtonLoop()
		{
			return null;
		}

		public virtual RecurringEventIconPresenterBase GetBoardIconPrefab()
		{
			return null;
		}

		public GameObject GetInfoPopupBoardIconDummyPrefab()
		{
			return null;
		}

		public virtual Sprite GetTickSprite()
		{
			return null;
		}

		public virtual EventState GetEventStateForPopupInitialize()
		{
			return default(EventState);
		}

		public bool IsCreateHomeIcon()
		{
			return false;
		}

		public void AddBoardItemCurrencyToActiveRewards(int setID, int points)
		{
		}

		public void SendEventTaskRewardSpawnEvent(BoardTaskItem boardTaskItem, int setId, int points)
		{
		}

		public string GetTaskClaimTriggerParameter(BoardTaskItem boardTaskItem)
		{
			return null;
		}

		public void ShowGenericClaimRewardsPopup(GenericClaimRewardsAssets genericClaimRewardsAssets)
		{
		}

		public RecurringEventHandlerBase GetBase()
		{
			return null;
		}

		public virtual RecurringEventHomeIconPresenter GetHomeIconPrefab()
		{
			return null;
		}

		public AnimationLoop GetScaleDownAnimation()
		{
			return null;
		}

		public int GetCurrencyCreationRewardPerLevel(int level)
		{
			return 0;
		}

		public virtual RecurringEventInfoPopupControllerBase GetRecurringEventInfoPopupController()
		{
			return null;
		}

		public bool IsNotificationAvailable()
		{
			return false;
		}

		public int GetNotificationCount()
		{
			return 0;
		}

		public string GetTitle(int index)
		{
			return null;
		}

		public string GetDesc(int index)
		{
			return null;
		}

		public string GetTitleKey(int index)
		{
			return null;
		}

		public string GetDescKey(int index)
		{
			return null;
		}

		public virtual long GetDateScheduledSeconds(int index)
		{
			return 0L;
		}

		public string GetTag()
		{
			return null;
		}

		public bool IsUseUTC()
		{
			return false;
		}

		public virtual string GetScrollableFeatureParams(int point)
		{
			return null;
		}

		public virtual bool IsActiveForFirebase()
		{
			return false;
		}

		public virtual (int, int, int) GetSupStepInfoForFirebase()
		{
			return default((int, int, int));
		}

		public string GetFireBaseCodeName()
		{
			return null;
		}

		public virtual (int, int) GetStepProgressForFirebase()
		{
			return default((int, int));
		}

		public virtual void SetAnimationState(bool state)
		{
		}

		public Material GetInfoTitleMaterial()
		{
			return null;
		}

		public void CycleCompleted()
		{
		}

		public void IncrementStep(int stepCount = 1)
		{
		}

		public (GameObject, RecurringEventPopupType) GetPopupPrefabWithType(bool isTutorial)
		{
			return default((GameObject, RecurringEventPopupType));
		}

		public GameObject GetPopupPrefab(bool isTutorial)
		{
			return null;
		}

		public virtual GameObject GetPopupPrefab(EventState eventState)
		{
			return null;
		}

		public RecurringEventPopupType GetPopupTypeForPopupInitialize(EventState eventState)
		{
			return default(RecurringEventPopupType);
		}

		public RecurringEventGenericPopupAssetContainerBase GetPopupAssets(EventState eventState)
		{
			return null;
		}

		public virtual BasePopup GetCurrencyConversionPopup()
		{
			return null;
		}

		public RecurringEventPopupType GetRecurringEventPopupType(bool isTutorial)
		{
			return default(RecurringEventPopupType);
		}

		public RecurringEventPopupType GetRecurringEventPopupType(EventState eventState)
		{
			return default(RecurringEventPopupType);
		}

		public virtual void ArrangePopups()
		{
		}

		public bool TryOpenFinishPopup()
		{
			return false;
		}

		public bool TryOpenTeaserPopup()
		{
			return false;
		}

		public bool TryOpenStartPopup()
		{
			return false;
		}

		public virtual void ShowGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public virtual void EnqueueGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public virtual void EnqueueTriggerGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public void EnqueueGenericPopupAsTriggered(bool isTutorial = false, bool userClicked = false)
		{
		}

		public void EnqueueGenericPopupFinishMax()
		{
		}

		public void ShowGenericPopupFinishMax()
		{
		}

		public virtual void EnqueueGenericPopupFinishTimeout()
		{
		}

		public virtual void ShowGenericPopupFinishTimeout()
		{
		}

		public virtual void InitializeItemRewardConversion()
		{
		}

		public virtual void ItemRewardConvertUpdated(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public RecurringEventHandlerBase()
		{
		}
	}
}
