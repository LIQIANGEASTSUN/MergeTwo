using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Paxie;
using Paxie.MergePuzzle;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class BoosterItemController : BaseSubscriber, IEventReceiver<BoardEvent.BoosterUsed>, IEventReceiverBase, IEventReceiver<TaskEvent.LevelUpDismissed>, IEventReceiver<BoardEvent.RewardBoosterArrived>, IEventReceiver<BoardEvent.BoardItemRemoveFinished>, IEventReceiver<CameraEvent.CameraChangeCompleted>, IEventReceiver<BoardEvent.BoardItemPositionUpdateStart>, IEventReceiver<BoardEvent.OnStateChange>, IEventReceiver<EntityUpdateEvent.RewardAnimationStatusChange>, IEventReceiver<EntityUpdateEvent.SeasonPassRewardUpdate>, IEventReceiver<EntityUpdateEvent.LevelUpdateEntity>, IEventReceiver<BoardEvent.UpdateUIBooster>, IEventReceiver<BoardEvent.MergeCompleted>, IEventReceiver<BoardEvent.MergeStart>
	{
		[CompilerGenerated]
		public sealed class _003CProcessCameraChange_003Ed__48 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public BoosterItemController _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CProcessCameraChange_003Ed__48(int _003C_003E1__state)
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
		}

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public BoardData _boardData;

		[NonSerialized]
		public BoosterEntity _boosterEntity;

		public AnimationLoop BoosterMoveLoop;

		public AnimationLoop BoosterMoveBackLoop;

		public AnimationController BoosterActiveItemImageAnimationController;

		public Image BoosterItemImage;

		public Image BoosterActiveItemImage;

		public Sprite BoosterActiveInit;

		public Sprite BoosterActiveReturn;

		public SkeletonGraphic BoosterSkeletonGraphic;

		public GameObject BoosterLockItemParent;

		public GameObject BoosterItemCountParent;

		public GameObject BoosterPlusIconParent;

		public GameObject BoosterFreeParent;

		public GameObject BoosterRewardedStars;

		public TextMeshProUGUI BoosterCountText;

		public ParticleSystem BoosterButtonParticle;

		public GameObject MagicDust;

		public Image Background;

		[HideInInspector]
		public bool IsActive;

		[HideInInspector]
		public BoosterItemData BoosterItemData;

		[NonSerialized]
		public int _defaultSortingOrder;

		[NonSerialized]
		public bool _levelUpPopupActive;

		[NonSerialized]
		public WarningTextFactory _warningTextFactory;

		public BoosterEntity BoosterEntity => null;

		public BoardController BoardController => null;

		public int ID => 0;

		public override void Start()
		{
		}

		public void Initialize(BoosterItemData boosterItemData, BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData)
		{
		}

		public void UpdateUI(ItemController tutorialSpawn = null, bool blockTutorial = false, bool isLevelUp = false)
		{
		}

		public void OnBoosterClicked()
		{
		}

		public void ActivateBoosterParticle(bool isActivate)
		{
		}

		public void ProcessBooster()
		{
		}

		public void OnEvent(EntityUpdateEvent.RewardAnimationStatusChange e)
		{
		}

		public void ArrangeControllerStatus(bool isReset)
		{
		}

		public void OnEvent(BoardEvent.BoosterUsed e)
		{
		}

		public void ThrowWarning()
		{
		}

		public void OnEvent(TaskEvent.LevelUpDismissed e)
		{
		}

		public void OnEvent(BoardEvent.RewardBoosterArrived e)
		{
		}

		public void SetCustomImageSize(BoosterItemData boosterItemData)
		{
		}

		public void OnEvent(BoardEvent.BoardItemRemoveFinished e)
		{
		}

		public void OnEvent(BoardEvent.MergeCompleted e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangeCompleted e)
		{
		}

		[IteratorStateMachine(typeof(_003CProcessCameraChange_003Ed__48))]
		public IEnumerator ProcessCameraChange()
		{
			return null;
		}

		public void OnEvent(BoardEvent.BoardItemPositionUpdateStart e)
		{
		}

		public void OnEvent(BoardEvent.OnStateChange e)
		{
		}

		public void OnEvent(EntityUpdateEvent.SeasonPassRewardUpdate e)
		{
		}

		public void OnEvent(EntityUpdateEvent.LevelUpdateEntity e)
		{
		}

		public void OnEvent(BoardEvent.UpdateUIBooster e)
		{
		}

		public void UpdateUIBooster()
		{
		}

		public void OnEvent(BoardEvent.MergeStart e)
		{
		}
	}
}
