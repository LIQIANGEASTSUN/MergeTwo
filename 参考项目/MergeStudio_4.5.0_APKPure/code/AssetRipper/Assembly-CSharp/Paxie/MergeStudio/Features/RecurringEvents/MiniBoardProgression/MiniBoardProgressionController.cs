using System;
using MergePuzzle;
using NaughtyAttributes;
using Paxie.MergeStudio.Features.MiniBoard;
using Spine.Unity;
using UnityEngine;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	public class MiniBoardProgressionController : BaseMiniBoardController, IEventReceiver<BaseMiniBoardProgressEvent.ProgressItemFoundRaiseKey>, IEventReceiverBase, IEventReceiver<BaseMiniBoardProgressEvent.BoardNoticePopupClosed>, IEventReceiver<BaseMiniBoardProgressEvent.BoardCongratsPopupClosed>
	{
		[BoxGroup("Animation Objects")]
		public SpriteRenderer ScreenFadeSpriteRenderer;

		[BoxGroup("Animation Objects")]
		public SpriteRenderer AnimationGateKeyRenderer;

		[BoxGroup("Animation Objects")]
		public SkeletonAnimation GateSpine;

		[BoxGroup("Animation Objects")]
		public SkeletonAnimation UnderGateSpine;

		[BoxGroup("Animation Transform")]
		public Transform AnimationParentTransform;

		[BoxGroup("Animation Transform")]
		public Transform CenterTransform;

		[BoxGroup("Animation Transform")]
		public Transform TransitionGateTransform;

		[NonSerialized]
		public MiniBoardProgressionHandler _miniBoardProgressionHandler;

		[NonSerialized]
		public IMiniBoardProgressionMainPopupView _miniBoardProgressionMainPopupView;

		[NonSerialized]
		public MiniBoardProgressionContainer _miniBoardProgressionContainer;

		[NonSerialized]
		public MiniBoardItemController _targetItemController;

		public int MainItemSetID => 0;

		public int TargetItemLevel => 0;

		public int CurrentSeenMaxItemLevel => 0;

		public MiniBoardProgressionAnimationController ProgressionAnimationController { get; set; }

		public override void Awake()
		{
		}

		public override void Initialize(IMiniBoardGenericPopupView miniBoardPopupView, MiniBoardHandlerBase miniBoardHandlerBase, MiniBoardRewardAreaController rewardAreaController)
		{
		}

		public override ParticleSystem GetPerishableSpawnerDestroyParticle(int setID)
		{
			return null;
		}

		public override void OnMergeCompleted(MiniBoardItemController createdItemController)
		{
		}

		public override void OnSpawnCompleted(MiniBoardItemController createdItemController)
		{
		}

		public void CheckItemProgress(MiniBoardItemController createdItemController)
		{
		}

		public void ProcessSetMaxLevelItemSeen(int level)
		{
		}

		public void CreateProgressBarItemReward(MiniBoardItemController createdItemController)
		{
		}

		public void OnMaxLevelItemSet(int maxLevel)
		{
		}

		public void ProcessBoardLevelUp()
		{
		}

		public void OnBoardProcessCompleted(bool indexIncreased)
		{
		}

		public MiniBoardItemController GetGateItemController()
		{
			return null;
		}

		public void OnGateDisappearStarted()
		{
		}

		public void OnLoadTransitionCompleted()
		{
		}

		public void OnEvent(BaseMiniBoardProgressEvent.ProgressItemFoundRaiseKey e)
		{
		}

		public void OnEvent(BaseMiniBoardProgressEvent.BoardNoticePopupClosed e)
		{
		}

		public void OnEvent(BaseMiniBoardProgressEvent.BoardCongratsPopupClosed e)
		{
		}

		public override string GetScrollableFeatureParams()
		{
			return null;
		}

		public override bool IsSendBoardItemSpawnFirebaseEvent(BoardItemData boardItemData, bool onBoardInitialize)
		{
			return false;
		}

		public override string GetRewardTrigger()
		{
			return null;
		}

		public override bool SRCanSpawnItem(MiniBoardItemEntity itemEntity)
		{
			return false;
		}
	}
}
