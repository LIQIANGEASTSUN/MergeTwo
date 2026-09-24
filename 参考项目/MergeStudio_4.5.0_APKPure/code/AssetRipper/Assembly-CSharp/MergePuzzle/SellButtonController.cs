using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Paxie;
using Paxie.MergePuzzle;
using UnityEngine;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class SellButtonController : BaseSubscriber, IEventReceiver<BoardEvent.SellItemTrial>, IEventReceiverBase, IEventReceiver<BoardEvent.BoardPositionSelection>, IEventReceiver<BoardEvent.InitializeBoard>, IEventReceiver<MetaEvent.TutorialTrigger>, IEventReceiver<CanvasEvent.UndoClicked>, IEventReceiver<BoardEvent.Merge>, IEventReceiver<CanvasEvent.NonUndoClicked>, IEventReceiver<TaskEvent.LevelUpDismissed>, IEventReceiver<BoardEvent.ResetSellButton>, IEventReceiver<BoardEvent.ActiveInfoItemChange>, IEventReceiver<HoverEvent.SellItemHoverIn>, IEventReceiver<HoverEvent.SellItemHoverOut>, IEventReceiver<DragCollisionButtonStays>
	{
		public enum ButtonState
		{
			Off = 0,
			Undo = 1,
			Remove = 2,
			NotRemovable = 3,
			DragToRemove = 4
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CArrangeClickable_003Ed__36 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public SellButtonController _003C_003E4__this;

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

		[SerializeField]
		public GameObject UndoButton;

		[SerializeField]
		public Sprite SellSpriteActive;

		[SerializeField]
		public Sprite SellSpriteInactive;

		[SerializeField]
		public Sprite SellInternalSpriteActive;

		[SerializeField]
		public Sprite SellInternalSpriteInactive;

		[SerializeField]
		public Image SellImage;

		[SerializeField]
		public Image SellImageInternal;

		[SerializeField]
		public SellButtonAnimationController ScaleAnimController;

		[NonSerialized]
		public ItemController _sellTrialItem;

		[NonSerialized]
		public ItemRuntimeData _sellItemRuntimeData;

		[NonSerialized]
		public bool _isItemSold;

		[NonSerialized]
		public float _elapsedTimeAfterClick;

		[NonSerialized]
		public bool _preventClick;

		[NonSerialized]
		public bool _animationLock;

		[NonSerialized]
		public WarningTextFactory _warningTextFactory;

		[NonSerialized]
		public ButtonState _state;

		[NonSerialized]
		public readonly string ANALYTIC_EVENT_TRASH_NAME;

		public BoardController BoardController => null;

		public GameplayNonScaledCanvasView GameplayNonScaledCanvasView => null;

		public ItemController _item => null;

		public BoardEntity _boardEntity => null;

		public override void OnEnable()
		{
		}

		public ItemController GetSelectedItem()
		{
			return null;
		}

		public void SetSellItem(ItemController itemController)
		{
		}

		public void ResetSellItem()
		{
		}

		public void UndoClicked()
		{
		}

		public void ProcessUndo()
		{
		}

		public void ProcessNonUndo()
		{
		}

		public void ResetButtons()
		{
		}

		public void ShowPrice()
		{
		}

		public bool IsUndoUp()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CArrangeClickable_003Ed__36))]
		public UniTaskVoid ArrangeClickable()
		{
			return default(UniTaskVoid);
		}

		public void OnClick()
		{
		}

		public bool PreventSell()
		{
			return false;
		}

		public void Inject()
		{
		}

		public void UpdateUI()
		{
		}

		public void SetButtonState(ButtonState state)
		{
		}

		public bool IsLevelEnoughForSellButton()
		{
			return false;
		}

		public bool IsNearestButtonSell(Movable movable)
		{
			return false;
		}

		public BoardType GetBoardType()
		{
			return default(BoardType);
		}

		public void ThrowWarning(Vector3 pos, string warningText)
		{
		}

		public void OnEvent(BoardEvent.SellItemTrial e)
		{
		}

		public void OnEvent(BoardEvent.BoardPositionSelection e)
		{
		}

		public void OnEvent(BoardEvent.InitializeBoard e)
		{
		}

		public void OnEvent(MetaEvent.TutorialTrigger e)
		{
		}

		public void OnEvent(CanvasEvent.UndoClicked e)
		{
		}

		public void OnEvent(BoardEvent.Merge e)
		{
		}

		public void OnEvent(CanvasEvent.NonUndoClicked e)
		{
		}

		public void OnEvent(TaskEvent.LevelUpDismissed e)
		{
		}

		public void OnEvent(BoardEvent.ResetSellButton e)
		{
		}

		public void OnEvent(BoardEvent.ActiveInfoItemChange e)
		{
		}

		public void OnEvent(HoverEvent.SellItemHoverIn e)
		{
		}

		public void OnEvent(DragCollisionButtonStays e)
		{
		}

		public void OnEvent(HoverEvent.SellItemHoverOut e)
		{
		}
	}
}
