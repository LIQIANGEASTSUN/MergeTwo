using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using MergePuzzle;
using MergePuzzle.Board.Particle;
using NaughtyAttributes;
using Paxie.MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardController : BaseSubscriberService, IBoardController, IEventReceiver<BaseMiniBoardEvent.ChangeGameplayStatus>, IEventReceiverBase, IEventReceiver<BaseMiniBoardEvent.Move>, IEventReceiver<BaseMiniBoardEvent.Merge>, IEventReceiver<BaseMiniBoardEvent.Swap>, IEventReceiver<BaseMiniBoardEvent.CollectCollectable>, IEventReceiver<BaseMiniBoardEvent.CollectRewardItemHolder>, IEventReceiver<BaseMiniBoardEvent.SpawnerSpawn>, IEventReceiver<BaseMiniBoardEvent.PerishableSpawnerSpawn>, IEventReceiver<BaseMiniBoardEvent.RevertMove>, IEventReceiver<BaseMiniBoardMoveEvent.NonMovableItemClick>, IEventReceiver<BaseMiniBoardMoveEvent.ItemClick>, IEventReceiver<BaseMiniBoardEvent.RemoveRewardFromRewardArea>, IEventReceiver<BaseMiniBoardAnimationEvent.SpawnerHintAdd>, IEventReceiver<BaseMiniBoardEvent.ClearBoard>, IEventReceiver<BaseMiniBoardEvent.PreMergeParticleActive>, IEventReceiver<BaseMiniBoardEvent.DestroyFromBoard>, IEventReceiver<BaseMiniBoardEvent.ClearSelectedPosition>, IEventReceiver<BaseMiniBoardEvent.OnStateChange>, IEventReceiver<BaseMiniBoardEvent.BoardItemPositionUpdate>, IEventReceiver<SrDebuggerEvent.MiniBoardSpawnItem>, IEventReceiver<SrDebuggerEvent.MiniBoardSpawnRewardHolderItem>
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreateParticleAsync_003Ed__194 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public Transform parent;

			public BaseMiniBoardController _003C_003E4__this;

			public GameObject particlePrefab;

			public Vector3 position;

			public SortingData sortingData;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

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
		public struct _003CInitBoard_003Ed__127 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BaseMiniBoardController _003C_003E4__this;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

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
		public struct _003CInitializeAsync_003Ed__129 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BaseMiniBoardController _003C_003E4__this;

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
		public struct _003CInitializeBoard_003Ed__130 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BaseMiniBoardController _003C_003E4__this;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

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

		[CompilerGenerated]
		public sealed class _003CItemSetAnimationRoutine_003Ed__163 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MiniBoardItemController item;

			public bool nonAnimated;

			public MiniBoardPosition selectedBoardPosition;

			public BaseMiniBoardController _003C_003E4__this;

			public bool spawnAnimated;

			public MiniBoardCellController targetCell;

			public bool swapAnimated;

			public bool panelAnimated;

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
			public _003CItemSetAnimationRoutine_003Ed__163(int _003C_003E1__state)
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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CStopBoard_003Ed__136 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BaseMiniBoardController _003C_003E4__this;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

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
		[BoxGroup("Prefabs")]
		public MiniBoardCellController BoardCellPrefab;

		[SerializeField]
		[BoxGroup("Prefabs")]
		public MiniBoardItemController BoardItemPrefab;

		[BoxGroup("Transform")]
		public Transform BoardInsideParent;

		[SerializeField]
		[BoxGroup("Sprites")]
		public SpriteRenderer MainBackgroundIcon;

		[SerializeField]
		[BoxGroup("Sprites")]
		public SpriteRenderer BackgroundPatternIcon;

		[SerializeField]
		[BoxGroup("Sprites")]
		public SpriteRenderer InnerShadowIcon;

		[BoxGroup("Sprites")]
		[SerializeField]
		public SpriteRenderer InsideFrameIcon;

		[BoxGroup("Sprites")]
		[SerializeField]
		public SpriteRenderer BoardBackgroundIcon;

		[BoxGroup("Sprites")]
		[SerializeField]
		public SpriteRenderer BoardItemProgressBackgroundIcon;

		[BoxGroup("Sprites")]
		[SerializeField]
		public SpriteRenderer BoardLeftBorderIcon;

		[BoxGroup("Sprites")]
		[SerializeField]
		public SpriteRenderer BoardRightBorderIcon;

		[BoxGroup("Animation")]
		public AnimationLoop SpawnLoop1;

		[BoxGroup("Animation")]
		public AnimationLoop SpawnLoop2;

		[BoxGroup("Animation")]
		public AnimationLoop MergedItemLoop;

		[BoxGroup("Animation")]
		public DoMove MiscMovePlacementAnim;

		[BoxGroup("Animation")]
		public DoMove MiscRevertPlacementAnim;

		[BoxGroup("Animation")]
		public DoMove MiscSwapPlacementAnim;

		[BoxGroup("Animation")]
		public DoScale RewardHolderClaimRewardIconDoScale;

		[BoxGroup("Animation")]
		public DoScale RewardHolderClaimRewardHolderIconDoScale;

		[BoxGroup("Hint")]
		public MiniBoardHintManager HintManager;

		[BoxGroup("Pool")]
		public ObjectPoolerBase ObjectPool;

		[BoxGroup("Particle")]
		public BoardParticleData BoardParticleData;

		[NonSerialized]
		public CommonFactoryService _factoryService;

		[NonSerialized]
		public Vector2 _firstItemPos;

		public IMiniBoardGenericPopupView MiniBoardPopupView { get; set; }

		public MiniBoardRewardAreaController RewardAreaController { get; set; }

		public BoardEntity BoardEntity { get; set; }

		public MiniBoardHandlerBase MiniBoardHandler { get; set; }

		public MiniBoardLocalConfigBase MiniBoardLocalConfigBase { get; set; }

		public MiniBoardContainer MiniBoardContainer { get; set; }

		public MiniBoardAssetContainerBase MiniBoardAssetContainerBase { get; set; }

		public MiniBoardData MiniBoardData { get; set; }

		public KiteMiniBoardInitialBoardModel InitialBoardModel { get; set; }

		public MiniBoardAreaEntity MiniBoardAreaEntity { get; set; }

		public SortingData MainSortingData { get; set; }

		public int RowCount => 0;

		public int ColumnCount => 0;

		public MiniBoardParticleController BoardParticleController { get; set; }

		public MiniBoardMergeParticleController MergeParticleController { get; set; }

		public MiniBoardMergeHintAnimationController MergeHintAnimationController { get; set; }

		public MiniBoardPlacementAnimation BoardPlacementAnimation { get; set; }

		public MiniBoardRewardHolderClaimAnimation RewardHolderClaimAnimation { get; set; }

		public MiniBoardCollectableAnimationController CollectableAnimationController { get; set; }

		public MiniBoardItemControllerFactory ItemControllerFactory => null;

		public WarningTextFactory WarningTextFactory => null;

		public MiniBoardPosition SelectedPosition { get; set; }

		public List<MiniBoardPosition> Positions { get; }

		public List<MiniBoardItemController> SpawnerList { get; }

		public List<Collider2D> ColliderList { get; }

		public void IncreaseChargingChestCount()
		{
		}

		public void DecreaseChargingChestCount()
		{
		}

		public override void Awake()
		{
		}

		public void EnableInput()
		{
		}

		public void DisableInput()
		{
		}

		public IMiniBoardEntity GetMiniBoardEntity()
		{
			return null;
		}

		public virtual void Initialize(IMiniBoardGenericPopupView miniBoardPopupView, MiniBoardHandlerBase miniBoardHandlerBase, MiniBoardRewardAreaController rewardAreaController)
		{
		}

		public void SetEntityBoardParameters()
		{
		}

		public void StartCreatingBoard()
		{
		}

		public void ResetBoardParameters()
		{
		}

		public void SetBoardAreaSettings()
		{
		}

		public Vector2 GetBoardIconsSlicedSize()
		{
			return default(Vector2);
		}

		public float GetBoardIconSlicedPerRowMultiplier()
		{
			return 0f;
		}

		public float GetBoardIconSlicedPerColumnMultiplier()
		{
			return 0f;
		}

		[AsyncStateMachine(typeof(_003CInitBoard_003Ed__127))]
		public UniTask InitBoard()
		{
			return default(UniTask);
		}

		public void InitObjectPool(int maxBoardItemCount)
		{
		}

		[AsyncStateMachine(typeof(_003CInitializeAsync_003Ed__129))]
		public UniTask InitializeAsync()
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CInitializeBoard_003Ed__130))]
		public UniTask InitializeBoard()
		{
			return default(UniTask);
		}

		public MiniBoardPositionData GetInitialPositionData(int index)
		{
			return null;
		}

		public int GetListPosition(Coordinate coordinate, int rowCount)
		{
			return 0;
		}

		public MiniBoardCellController SpawnCell(CellEntity cellEntity, Vector2 localPosition)
		{
			return null;
		}

		public void Save()
		{
		}

		public override void OnDestroy()
		{
		}

		[AsyncStateMachine(typeof(_003CStopBoard_003Ed__136))]
		public UniTaskVoid StopBoard()
		{
			return default(UniTaskVoid);
		}

		public int GetAnimatedItemCount()
		{
			return 0;
		}

		public void AddBoardCollider(Collider2D boardCollider)
		{
		}

		public void RemoveBoardCollider(Collider2D boardCollider)
		{
		}

		public void ChangeBoardColliderStatus(bool activate)
		{
		}

		public Vector3 GetMiniBoardVectorPosition(Coordinate index)
		{
			return default(Vector3);
		}

		public List<MiniBoardPosition> GetAllPositions()
		{
			return null;
		}

		public MiniBoardPosition GetPosition(Coordinate index)
		{
			return null;
		}

		public MiniBoardPosition GetFirstPosition()
		{
			return null;
		}

		public MiniBoardPosition GetLastPosition()
		{
			return null;
		}

		public Vector2 GetWorldPosition(Coordinate boardIndex)
		{
			return default(Vector2);
		}

		public void SetSelectedPosition(MiniBoardPosition position, bool selectCell = true, bool dontUseAnimation = false)
		{
		}

		public void ClearSelectedPosition(bool itemDestroy)
		{
		}

		public void ArrangeSelectedCellImage(bool isActive)
		{
		}

		public List<CellEntity> GetAvailableCells()
		{
			return null;
		}

		public List<Coordinate> GetAvailableCellCoordinates(Coordinate targetIndex)
		{
			return null;
		}

		public List<MiniBoardCellController> GetNearestAvailableOtherCells(Transform sourceTransform)
		{
			return null;
		}

		public void ArrangeCells()
		{
		}

		public void ArrangeCells(List<MiniBoardPositionEntity> positionEntities)
		{
		}

		public override void UpdateTick()
		{
		}

		public override void UpdatePlayingTick(float elapsedTime)
		{
		}

		public override void UpdatePausedTick(float elapsedTime)
		{
		}

		public override void UpdateTutorialTick(float elapsedTime)
		{
		}

		public bool IsMergeAvailable(MiniBoardItemController mergedItem1, MiniBoardItemController mergedItem2)
		{
			return false;
		}

		public BoardItemData GetMergedItemData(MiniBoardItemController candidateItem)
		{
			return null;
		}

		public bool SetItemOnBoard(Coordinate boardIndex, MiniBoardItemController item, bool saveBoard, bool spawnAnimated, bool swapAnimated, bool panelAnimated, MiniBoardPosition selectedBoardPosition, bool merged, bool move, bool nonAnimated)
		{
			return false;
		}

		public bool SetItemOnBoard(Coordinate boardIndex, MiniBoardItemController item, bool skipCellCheck, bool saveBoard, bool spawnAnimated, bool swapAnimated, bool panelAnimated, bool merged, bool move, MiniBoardPosition selectedBoardPosition, bool onInitialize, bool nonAnimated)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CItemSetAnimationRoutine_003Ed__163))]
		public IEnumerator ItemSetAnimationRoutine(MiniBoardItemController item, bool spawnAnimated, bool swapAnimated, bool panelAnimated, MiniBoardPosition selectedBoardPosition, MiniBoardCellController targetCell, bool nonAnimated)
		{
			return null;
		}

		public void SpawnAnimationComplete(MiniBoardItemController item)
		{
		}

		public MiniBoardItemController OnInitializeSpawnItemAsync(BoardItemData boardItemData, MiniBoardItemEntity itemEntity, Coordinate spawnCoordinate, bool isNewlyCreated)
		{
			return null;
		}

		public MiniBoardItemController SpawnItem(BoardItemData boardItemData, MiniBoardItemEntity itemEntity, Coordinate spawnerCoordinate, bool onBoardInitialize, bool merged, bool isNewlyCreated)
		{
			return null;
		}

		public void AnimateMergedItemSpawn(MiniBoardItemController itemController)
		{
		}

		public void SpawnItemAnimation(MiniBoardItemController item, MiniBoardCellController targetCell, MiniBoardPosition selectedBoardPosition)
		{
		}

		public void SpawnAtRandomPosition(MiniBoardItemEntity itemEntity, BoardItemData boardItemData, bool isNewlyCreated, Transform sourceTransform, bool disableItemSelection = false, bool isCapacityUpdated = true)
		{
		}

		public virtual void OnSpawnCompleted(MiniBoardItemController createdItemController)
		{
		}

		public void SwapItemsOnBoard(MiniBoardItemController source, MiniBoardItemController target, MiniBoardPosition selectedBoardPosition)
		{
		}

		public void SwapItemAnimation(MiniBoardItemController item, MiniBoardCellController targetCell, MiniBoardPosition selectedBoardPosition)
		{
		}

		public void PanelItemAnimation(MiniBoardItemController item, MiniBoardCellController targetCell, MiniBoardPosition selectedBoardPosition)
		{
		}

		public void MoveItemOnBoard(MiniBoardItemController item, MiniBoardCellController boardCell, MiniBoardPosition boardPosition, bool saveBoard = true)
		{
		}

		public void MoveItemAnimation(MiniBoardItemController item, MiniBoardCellController targetCell, MiniBoardPosition selectedBoardPosition)
		{
		}

		public void MergeItemsOnBoard(MiniBoardItemController source, MiniBoardItemController target, BoardItemData itemData, MiniBoardPosition boardPosition)
		{
		}

		public List<MiniBoardItemEntity> GetProcessExtraItemEntitiesOnMerge(string mergedSetIDLevel)
		{
			return null;
		}

		public List<MiniBoardItemController> OnMergeProcessUnbox(Coordinate targetCoordinate)
		{
			return null;
		}

		public virtual void OnMergeCompleted(MiniBoardItemController createdItemController)
		{
		}

		public Sequence GetPlacementSequence(MiniBoardItemController item, MiniBoardCellController targetCell)
		{
			return null;
		}

		public bool IsLastLevel(MiniBoardItemController itemController)
		{
			return false;
		}

		public void DestroyItem(Coordinate boardIndex, bool saveBoard, bool resetInfo)
		{
		}

		public bool DestroyItemGameObject(Coordinate boardIndex, bool saveBoard, bool resetInfo)
		{
			return false;
		}

		public void DestroyItemEntity(Coordinate boardIndex)
		{
		}

		public void ClearCell(Coordinate boardIndex, bool saveBoard = true)
		{
		}

		public void DestroyItem(MiniBoardItemController item, bool saveBoard = true, bool resetInfo = true)
		{
		}

		public void StartSpawnerAnimations()
		{
		}

		public void SyncSpawnersSpineParticle()
		{
		}

		public List<MiniBoardItemController> GetSpawnersWithSpineOnBoard()
		{
			return null;
		}

		public void CheckMergedRewards()
		{
		}

		public MiniBoardItemEntity GetMergedRewardsItemEntity(MiniBoardRewardEntity rewardEntity)
		{
			return null;
		}

		public MiniBoardItemEntity FindSpawnSourceItem(IMiniBoardEntity miniBoardEntity, MiniBoardItemEntity originalItem)
		{
			return null;
		}

		public void CreateParticle(ParticleSystem particlePrefab, Vector3 position, Transform parent = null, SortingData sortingData = null)
		{
		}

		[AsyncStateMachine(typeof(_003CCreateParticleAsync_003Ed__194))]
		public UniTaskVoid CreateParticleAsync(GameObject particlePrefab, Vector3 position, Transform parent = null, SortingData sortingData = null)
		{
			return default(UniTaskVoid);
		}

		public void PlayMergeSound(bool isJelly, int level, int setID)
		{
		}

		public virtual ParticleSystem GetPerishableSpawnerDestroyParticle(int setID)
		{
			return null;
		}

		public void OnEvent(BaseMiniBoardEvent.ChangeGameplayStatus e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.Move e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.Merge e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.OnStateChange e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.PreMergeParticleActive e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.RevertMove e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.Swap e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.CollectCollectable e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.CollectRewardItemHolder e)
		{
		}

		public void OnRewardHolderClaimCompleted(MiniBoardItemController item)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.SpawnerSpawn e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.PerishableSpawnerSpawn e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.RemoveRewardFromRewardArea e)
		{
		}

		public void OnEvent(BaseMiniBoardMoveEvent.ItemClick e)
		{
		}

		public void OnEvent(BaseMiniBoardMoveEvent.NonMovableItemClick e)
		{
		}

		public void OnEvent(BaseMiniBoardAnimationEvent.SpawnerHintAdd e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.ClearBoard e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.DestroyFromBoard e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.ClearSelectedPosition e)
		{
		}

		public void OnEvent(BaseMiniBoardEvent.BoardItemPositionUpdate e)
		{
		}

		public void OnEvent(SrDebuggerEvent.MiniBoardSpawnItem e)
		{
		}

		public virtual bool SRCanSpawnItem(MiniBoardItemEntity itemEntity)
		{
			return false;
		}

		public void OnEvent(SrDebuggerEvent.MiniBoardSpawnRewardHolderItem e)
		{
		}

		public void TrySendBoardItemSpawnFirebaseEvent(BoardItemData boardItemData, bool onBoardInitialize = false)
		{
		}

		public virtual string GetScrollableFeatureParams()
		{
			return null;
		}

		public virtual bool IsSendBoardItemSpawnFirebaseEvent(BoardItemData boardItemData, bool onBoardInitialize)
		{
			return false;
		}

		public virtual string GetRewardTrigger()
		{
			return null;
		}
	}
}
