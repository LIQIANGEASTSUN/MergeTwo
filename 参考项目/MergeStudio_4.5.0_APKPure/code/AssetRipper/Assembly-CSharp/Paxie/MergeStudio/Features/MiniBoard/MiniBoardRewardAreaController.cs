using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using MergePuzzle;
using MergePuzzle.ItemRewardBackup;
using NaughtyAttributes;
using Paxie.MergePuzzle;
using TMPro;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class MiniBoardRewardAreaController : BaseSubscriber, IEventReceiver<BaseMiniBoardRewardEvent.RewardAreaUIUpdate>, IEventReceiverBase, IEventReceiver<BaseMiniBoardEvent.ChangeGameplayStatus>, IEventReceiver<BaseMiniBoardProgressEvent.LoadNewBoard>, IEventReceiver<ItemRewardConvertEvent.UpdateRewardImages>
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CArrangeRewardAnimation_003Ed__26 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public bool enable;

			public MiniBoardRewardAreaController _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CRemoveTopItemFromRewardArea_003Ed__30 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public MiniBoardRewardAreaController _003C_003E4__this;

			[NonSerialized]
			public bool _003CactiveRewardFound_003E5__2;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CSlowCloseRewardLoop_003Ed__27 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MiniBoardRewardAreaController _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

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

		[BoxGroup("Renderer")]
		public SpriteRenderer RewardBubbleSpriteRenderer;

		[BoxGroup("Renderer")]
		public SpriteRenderer RewardSpriteRenderer;

		[BoxGroup("Renderer")]
		public SpriteRenderer RewardNotificationSpriteRenderer;

		[BoxGroup("UI")]
		public RectTransform RewardTargetRect;

		[BoxGroup("UI")]
		public TextMeshPro RewardCountText;

		[BoxGroup("UI")]
		public Transform ParentTransform;

		[BoxGroup("Button")]
		public ClickableSprite ButtonClickableSprite;

		[BoxGroup("Animation")]
		[SerializeField]
		public AnimationLoop RewardAnimationLoop;

		[NonSerialized]
		public IMiniBoardGenericPopupView _miniBoardPopupView;

		[NonSerialized]
		public MiniBoardHandlerBase _miniBoardHandler;

		[NonSerialized]
		public MiniBoardData _miniBoardData;

		[NonSerialized]
		public IMiniBoardEntity _miniBoardEntity;

		[NonSerialized]
		public float _defaultScale;

		[NonSerialized]
		public Transform _rewardAnimTransform;

		[NonSerialized]
		public Sequence _rewardSequenceLoop;

		[NonSerialized]
		public bool _isActiveRewardSequence;

		[NonSerialized]
		public WarningTextFactory _warningTextFactory;

		public override void Awake()
		{
		}

		public override void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Initialize(IMiniBoardGenericPopupView miniBoardPopupView, MiniBoardHandlerBase miniBoardHandlerBase)
		{
		}

		public void UpdateUI(bool rewardAnimationStart = false, bool safetyCheck = false)
		{
		}

		public Sprite GetTopMostRewardSprite(MiniBoardRewardEntity rewardEntity, BoardItemData itemData)
		{
			return null;
		}

		public void SetRewardImage(bool enable)
		{
		}

		public void ArrangeUI(bool enable, bool rewardAnimationStart = false)
		{
		}

		[AsyncStateMachine(typeof(_003CArrangeRewardAnimation_003Ed__26))]
		public void ArrangeRewardAnimation(bool enable)
		{
		}

		[AsyncStateMachine(typeof(_003CSlowCloseRewardLoop_003Ed__27))]
		public UniTask SlowCloseRewardLoop()
		{
			return default(UniTask);
		}

		public void ArrangeClickable(bool isInteractable)
		{
		}

		public void RewardUIClicked()
		{
		}

		[AsyncStateMachine(typeof(_003CRemoveTopItemFromRewardArea_003Ed__30))]
		public void RemoveTopItemFromRewardArea()
		{
		}

		public void UpdateTopMostRewardUI()
		{
		}

		public void ThrowWarning()
		{
		}

		public List<MiniBoardRewardEntity> GetActiveRewards()
		{
			return null;
		}

		public MiniBoardRewardEntity GetTopMostReward()
		{
			return null;
		}

		public BoardItemData GetRewardItemData(MiniBoardRewardEntity rewardEntity)
		{
			return null;
		}

		public void SetZeroSize()
		{
		}

		public void SetDefaultSize()
		{
		}

		public void ChangeRewardTextActivity(bool enable)
		{
		}

		public void SetRewardCountText(int count)
		{
		}

		public void SetRewardImageScale(MiniBoardRewardEntity rewardEntity)
		{
		}

		public void OnEvent(BaseMiniBoardRewardEvent.RewardAreaUIUpdate e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.ChangeGameplayStatus e)
		{
		}

		public void OnEvent(BaseMiniBoardProgressEvent.LoadNewBoard e)
		{
		}

		public void OnEvent(ItemRewardConvertEvent.UpdateRewardImages e)
		{
		}
	}
}
