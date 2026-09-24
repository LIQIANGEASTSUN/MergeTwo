using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using Framework.Core.Signal;
using Framework.Core.View;
using Framework.UIFSM.Fsm;
using Framework.UIFSM.View;
using Framework.Util.Pooling;
using Framework.View.LayoutComponents;
using JetBrains.Annotations;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Util;
using Merger.Game.Data;
using Merger.Game.Data.Board;
using Merger.Game.Signal;
using Merger.Game.ViewModel;
using Merger.Game.Views.BoardItem;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using Merger.Game.Views.Util;
using Merger.PowerBoost.Signals;
using Merger.PowerBoost.Views;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Signals;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using strange.extensions.promise.api;

namespace Merger.Game.Views
{
	public class BoardView : GameViewBase<BoardViewModel>, IBoardView, IViewComponent, IEnterStateHandler, IExitStateHandler, IViewWithPayload<BoardTransitionPayload>
	{
		[Flags]
		public enum BoardLoadingState
		{
			Pending = 0,
			Started = 1,
			BoardInitiated = 2,
			Ready = 3
		}

		[CompilerGenerated]
		public sealed class _003CStartAfter1Frame_003Ed__105 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public BoardView _003C_003E4__this;

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
			public _003CStartAfter1Frame_003Ed__105(int _003C_003E1__state)
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
		public IBoardUIView _boardUIView;

		[SerializeField]
		public GameObject _boardUI;

		[SerializeField]
		public RectTransform _boardContainer;

		[SerializeField]
		public RectTransform _boardGridContainer;

		[SerializeField]
		public RectTransform _boardItemContainers;

		[SerializeField]
		public RectTransform _inventoryRectTransform;

		[SerializeField]
		public GameObject _boardTilePrefab;

		[SerializeField]
		public GameObject _itemContainerPrefab;

		[SerializeField]
		public SelectorView _selector;

		[SerializeField]
		public PowerBoostBannerView _powerBoostBanner;

		[SerializeField]
		[CanBeNull]
		[Obsolete]
		public Animator _powerBoostBannerAnimator;

		[SerializeField]
		[CanBeNull]
		public PrefabObjectPool _ItemsPool;

		[SerializeField]
		[CanBeNull]
		public BoardBlockersOverrideConfig _boardBlockersOverrideConfig;

		[SerializeField]
		public BlockerItemView _defaultBlockerItemView;

		[CanBeNull]
		[SerializeField]
		public BlockerItemView _defaultBlockerItemViewOld;

		[SerializeField]
		[CanBeNull]
		public Image _boardBackgroundImage;

		[SerializeField]
		[CanBeNull]
		public Sprite _boardBackgroundSprite;

		[SerializeField]
		[CanBeNull]
		public Sprite _boardBackgroundSpriteOld;

		[Tooltip("holder GameObject for behaviour pools")]
		[SerializeField]
		[CanBeNull]
		public Transform _behaviourPoolsHolder;

		[CanBeNull]
		[Tooltip("Can be used to configure visual variants of behaviours in Board Events")]
		[SerializeField]
		public List<BehaviourPrefabData> _behaviourOverrides;

		[CanBeNull]
		[SerializeField]
		[Tooltip("Configuration for handling floating text target transform overrides.")]
		public FloatingTextOverrideConfig _floatingTextOverrideConfig;

		[NonSerialized]
		public readonly HashSet<BoardItemPosition> _playingOutAnimationPositions;

		[NonSerialized]
		public RectTransform _rootRectTransform;

		[NonSerialized]
		public BlockerItemView _activeBlockerItemView;

		[NonSerialized]
		public TwoDArray<BoardCellView> _tiles;

		[NonSerialized]
		public TwoDArray<RectTransform> _itemContainers;

		[NonSerialized]
		public TwoDArray<IBoardItemView> _items;

		[NonSerialized]
		public TwoDArray<BlockerItemView> _itemBlockers;

		[NonSerialized]
		public IBoardItemView _draggedItem;

		[NonSerialized]
		public RectTransform _draggedItemRectTransform;

		[NonSerialized]
		public RectTransform _draggingPlane;

		[NonSerialized]
		public GridLayoutGroup _boardGridLayout;

		[NonSerialized]
		public string _enterStateReason;

		[NonSerialized]
		public HashSet<IBoardItemView> _itemsBeingRemoved;

		[NonSerialized]
		public bool _isDragging;

		[NonSerialized]
		public int _boardCols;

		[NonSerialized]
		public int _boardRows;

		[NonSerialized]
		public float _itemCellSize;

		[NonSerialized]
		public UIBehaviourEventHandler _boardContainerDimensionsHandler;

		[NonSerialized]
		public bool _isRefreshingCellLayout;

		public const float JumpPower = 50f;

		public const string PowerBoostBannerResetTrigger = "BoostReset";

		public static readonly int BoostReset;

		public const string PowerBoostBannerOnTrigger = "BoostOn";

		public const string PowerBoostBannerOffTrigger = "BoostOff";

		[NonSerialized]
		public Dictionary<string, BehaviourPrefabData> _combinedBehaviourConfig;

		public const string PrefabPoolIds = "BoardItemsPool";

		[NonSerialized]
		public Dictionary<IRewardViewData, IBoardItemView> _flyingBoardItems;

		[NonSerialized]
		public BoardLoadingState _boardViewLoadingState;

		public float GridCellSize => 0f;

		public RectTransform BoardContainer => null;

		public IBoardUIView BoardUIView => null;

		public SelectorMode SelectorMode
		{
			set
			{
			}
		}

		public Dictionary<string, BehaviourPrefabData> CombinedBehaviourConfig => null;

		public PrefabObjectPool BoardItemsPool => null;

		public BoardLoadingState BoardViewLoadingState
		{
			get
			{
				return default(BoardLoadingState);
			}
			set
			{
			}
		}

		GameObject IViewComponent.gameObject => null;

		public event Action<BoardItemPosition, bool> ItemTapped
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<BoardItemPosition> ItemDragStarted
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Vector2> ItemDragged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Vector2, Vector2> ItemDragEnded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action ItemDragCancelled
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action Destroyed
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void SetPayload(BoardTransitionPayload payload)
		{
		}

		public override void Awake()
		{
		}

		public void OnUserProfileDefaultValuesLoaded(UserProfileDefaultValuesLoadedSignal signal)
		{
		}

		public void OnCurrentBoardTypeChanged(CurrentBoardType currentBoardType)
		{
		}

		public void ApplyCoreBoardAndBlockerVariants()
		{
		}

		public void ApplyCoreBoardVariant()
		{
		}

		public void ApplyBlockerVariant()
		{
		}

		public void RetryMissingBlockerInstantiation()
		{
		}

		public PrefabObjectPool GetSharedBoardItemPool()
		{
			return null;
		}

		public void OnBoardBoardFeedingTooltipSignalReceived(BoardCombinationTooltipSignal signal)
		{
		}

		public void OnVerifyBoardMergeSignal(VerifyBoardMergeSignal signal)
		{
		}

		public void OnBoardFloatingTextSignalReceived(BoardFloatingTextSignal signal)
		{
		}

		public RectTransform GetFloatingTextTargetTransform(FloatingTextType floatingTextType, BoardItemPosition boardItemPosition)
		{
			return null;
		}

		public void OnBoardFloatingAccumulationItemSignalReceived(BoardFloatingAccumulationItemSignal signal)
		{
		}

		public void Start()
		{
		}

		public void OnPlayStackingAnimation(ItemsStackingSignal signal)
		{
		}

		public void OnRewardsFlyAnimationFinishedSignal(RewardFlyAnimationFinishedSignal signal)
		{
		}

		public void InitPowerBoostBanner()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnBoardEnabledChanged(bool enabled)
		{
		}

		public override void OnDestroy()
		{
		}

		[IteratorStateMachine(typeof(_003CStartAfter1Frame_003Ed__105))]
		public virtual IEnumerator StartAfter1Frame()
		{
			return null;
		}

		public void InitializeBoard(int cols, int rows)
		{
		}

		public Dictionary<string, BehaviourPrefabData> GetCombinedBehaviourConfig()
		{
			return null;
		}

		public void InitializeBehaviourPools()
		{
		}

		public PrefabObjectPool CreatePrefabObjectPool(GeneralObjectPoolData objectPoolData, Transform poolHolder)
		{
			return null;
		}

		public void RecalculateCellSizes()
		{
		}

		public void TrySubscribeToBoardContainerDimensionsChange()
		{
		}

		public void UnsubscribeFromBoardContainerDimensionsChange()
		{
		}

		public void OnBoardContainerDimensionsChanged()
		{
		}

		public void RefreshCellLayoutOnResize()
		{
		}

		public void OnBoardLayoutInitialized()
		{
		}

		public IBoardItemView CreateItem(VisualComponent visualComponent, Transform container)
		{
			return null;
		}

		public void CreateItemAndAddToBoard(BoardItemPosition position, VisualComponent visualComponent, bool transitionIn, BlockerItemView blockerArtOverride = null)
		{
		}

		public BlockerItemView GetBoardItemAsset(BoardItemPosition position, string blockerArtFromAdmin)
		{
			return null;
		}

		public void CreateBlockerView(BoardItemPosition position, IBoardItemView boardItemView, BlockerItemView blockerArtOverride = null)
		{
		}

		public void AddToBoard(BoardItemPosition position, IBoardItemView boardItemView, bool transitionIn)
		{
		}

		public void TimeTwisterActivated(IBoardItemView boardItem)
		{
		}

		public void BoardItemDragged(IBoardItemView boardItem, PointerEventData data)
		{
		}

		public void BoardItemTapped(IBoardItemView boardItem)
		{
		}

		public void MoveSelector(BoardItemPosition position)
		{
		}

		public void HideItem(BoardItemPosition position)
		{
		}

		public void ShowItem(BoardItemPosition position)
		{
		}

		public void HideItem(IBoardItemView itemView)
		{
		}

		public void ShowItem(IBoardItemView itemView)
		{
		}

		public void BoardItemDragEnded(IBoardItemView boardItem, PointerEventData pointerEventData)
		{
		}

		public void BoardItemDragCancelled(IBoardItemView boardItem)
		{
		}

		public void RemoveItem(BoardItemPosition position, IPromise delayedViewRemovePromise = null)
		{
		}

		public void StartDragging(BoardItemPosition itemAtPosition)
		{
		}

		public IBoardItemView GetItemView(BoardItemPosition itemAtPosition)
		{
			return null;
		}

		public bool MoveItemToTopContainer(BoardItemPosition itemAtPosition, bool overrideSorting, bool setSecondLastSiblingIndex = false)
		{
			return false;
		}

		public void MoveItemBackToOwnContainer(BoardItemPosition itemAtPosition)
		{
		}

		public IBoardItemView GetItemAtPosition(BoardItemPosition position)
		{
			return null;
		}

		public bool IsPlayingOutAnimation(BoardItemPosition position)
		{
			return false;
		}

		public void MoveItem(BoardItemPosition oldPosition, BoardItemPosition newPosition)
		{
		}

		public void SetItem(BoardItemPosition position, IBoardItemView boardItemView)
		{
		}

		public void SwapItems(BoardItemPosition firstBoardPosition, BoardItemPosition secondBoardPosition)
		{
		}

		public void SlideItem(BoardItemPosition itemAtPosition, BoardItemPosition fromPosition, BoardItemPosition toPosition, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
		}

		public void Jump(IBoardItemView itemToSlide, float tweenDuration)
		{
		}

		public void SlideItem(BoardItemPosition itemAtPosition, BoardItemPosition toPosition, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
		}

		public void SlideItemOut(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, Ease ease = Ease.InOutQuad)
		{
		}

		public void SlideItemIn(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, Ease ease = Ease.InOutQuad)
		{
		}

		public void SlideItemInWithFlyingRewards(BoardItemPosition itemAtPosition, Vector2 worldPosition, ResourceSource source)
		{
		}

		public void BoardItemFlyInAnimationStarted(IBoardItemView itemToSlide, IRewardViewData rewardData)
		{
		}

		public void SlideBoosterIn(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, float jumpPower, Ease ease = Ease.InOutQuad)
		{
		}

		public TweenerCore<Vector2, Vector2, VectorOptions> SlideGameObject(RectTransform objectToSlide, Vector2 pointToRoot, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public Sequence SlideBoosterObject(RectTransform objectToSlide, Vector2 pointToRoot, float tweenDuration, float jumpPower, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public Vector2 GetTileCoordinates(BoardItemPosition position, RectTransform otherRectTransform = null)
		{
			return default(Vector2);
		}

		public Vector2 GetTileCoordinatesGlobal(BoardItemPosition position)
		{
			return default(Vector2);
		}

		public void HideSelector()
		{
		}

		public void ForceDeselectItem()
		{
		}

		public IPromise PlayUnlockSurpriseBoxOnBoard(BoardItemPosition position)
		{
			return null;
		}

		public IBoardItemView PrepareItemToSlide(BoardItemPosition position, RectTransform container)
		{
			return null;
		}

		public Vector2 GetBoardCellPositionInBoardContainer(RectTransform boardCell)
		{
			return default(Vector2);
		}

		public void SetContainerAspectRatio()
		{
		}

		public void OnPowerBoostChanged(PowerBoostModeSwitchedSignal signal)
		{
		}

		void IEnterStateHandler.HandleEnterState()
		{
		}

		void IExitStateHandler.HandleExitState()
		{
		}

		public BoardCellView GetTile(BoardItemPosition position)
		{
			return null;
		}

		public void OnGamePaused(GamePauseSignal signal)
		{
		}

		public void LoadBoardSpritesFired()
		{
		}

		public void UnloadBoardSpritesFired()
		{
		}

		public void ToggleSpriteLoaded(IBoardItemView item, bool loadSprite)
		{
		}

		public void PlayStackingAnimation(BoardItemPosition position, int stackSizeAdded)
		{
		}
	}
}
