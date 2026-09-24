using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using MergePuzzle.Board.Animation;
using MergePuzzle.Board.Particle;
using MergePuzzle.BoardEvents;
using MergePuzzle.Core.SessionFunnel;
using MergePuzzle.DailyChallenge;
using MergePuzzle.EnergyMultiplier;
using MergePuzzle.Item.Creation;
using MergePuzzle.Locations;
using MergePuzzle.RecurringEvents;
using MergePuzzle.Tutorial.Core;
using Paxie;
using Paxie.MergePuzzle;
using Paxie.MergePuzzle.ItemCollections.Model;
using Paxie.MergeStudio.GameCore.Gameplay;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Events;

namespace MergePuzzle
{
	public class BoardController : BaseSubscriberService, IBoardController, IEventReceiver<BoardEvent.InitializeBoard>, IEventReceiverBase, IEventReceiver<BoardEvent.Move>, IEventReceiver<BoardEvent.Merge>, IEventReceiver<BoardEvent.Swap>, IEventReceiver<BoardEvent.CollectCollectable>, IEventReceiver<BoardEvent.SpawnerSpawn>, IEventReceiver<BoardEvent.PerishableSpawnerSpawn>, IEventReceiver<BoardEvent.AutoSpawnerSpawn>, IEventReceiver<BoardEvent.ChestSpawnerSpawn>, IEventReceiver<BoardEvent.RemoveFromInventory>, IEventReceiver<BoardEvent.AddToInventory>, IEventReceiver<BoardEvent.UndoItemSell>, IEventReceiver<BoardEvent.RemoveItemViaSellComplete>, IEventReceiver<BoardEvent.RevertMove>, IEventReceiver<NonMovableItemClick>, IEventReceiver<ItemClick>, IEventReceiver<BoardEvent.RemoveFromRewardUI>, IEventReceiver<BoardEvent.BubbleTimeFinish>, IEventReceiver<BoardEvent.BoosterPanelStatusChange>, IEventReceiver<BoardEvent.BoosterBoardAction>, IEventReceiver<BoardEvent.CloudDestroy>, IEventReceiver<BoardEvent.EnergyRefillSuccess>, IEventReceiver<AnimationEvent.SpawnerHintAdd>, IEventReceiver<TaskEvent.TaskDoneBoardItemsMoveCompleted>, IEventReceiver<BoardEvent.BoosterAnimationCompleted>, IEventReceiver<BoardEvent.ClearBoard>, IEventReceiver<BoardEvent.PreMergeParticleActive>, IEventReceiver<CameraEvent.CameraChangedRequest>, IEventReceiver<CameraEvent.CameraChangeCompleted>, IEventReceiver<SrDebuggerEvent.EventSpawn>, IEventReceiver<BoardEvent.ApplicationPause>, IEventReceiver<SrDebuggerEvent.CompleteMetaTaskUntil>, IEventReceiver<PurchaseEvent.PurchaseResult>, IEventReceiver<CanvasEvent.NonUndoClicked>, IEventReceiver<TaskEvent.LevelUpDismissed>, IEventReceiver<PurchaseEvent.SetTrigger>, IEventReceiver<BoardEvent.PickBoxItemSelection>, IEventReceiver<AnimationEvent.AnimationFinished>, IEventReceiver<RecurringEvent.CurrencyClicked>, IEventReceiver<BoardEvent.DestroyFromBoard>, IEventReceiver<BoardEvent.ClearSelectedPosition>, IEventReceiver<CanvasEvent.PlayTimeLimitedClockParticle>, IEventReceiver<DailyChallengeEvent.PickChestConceptRewardBoxItemSelection>, IEventReceiver<BoardEvent.OnStateChange>, IEventReceiver<BoardEvent.BoardItemPositionUpdate>, IEventReceiver<MetaEvent.SeasonSoftFinish>, IEventReceiver<BoardEvent.TaskSupportChestSpawnerSpawn>
	{
		[CompilerGenerated]
		public sealed class _003CCreateParticleRoutine_003Ed__202 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public Transform parent;

			public BoardController _003C_003E4__this;

			public GameObject particlePrefab;

			public Vector3 position;

			public bool autoPlay;

			public SortingData sortingData;

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
			public _003CCreateParticleRoutine_003Ed__202(int _003C_003E1__state)
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
		public struct _003CInitBoard_003Ed__130 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoardData boardData;

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
		public struct _003CInitBoardEvent_003Ed__129 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public int index;

			public BoardController _003C_003E4__this;

			[NonSerialized]
			public BoardEventHandler _003CboardEventHandler_003E5__2;

			[NonSerialized]
			public UniTask<BoardEventBoardData>.Awaiter _003C_003Eu__1;

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
		public struct _003CInitializeAsync_003Ed__132 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public bool isNewlyCreated;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__2;

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
		public struct _003CInitializeBoard_003Ed__136 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoardEntity boardEntity;

			public bool isFirstSession;

			public EventEntity eventEntity;

			[NonSerialized]
			public AddressableDownloader _003CaddressableDownloader_003E5__2;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public int _003Cx_003E5__3;

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
		public struct _003CInitializeEventBoard_003Ed__127 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardData boardData;

			public BoardController _003C_003E4__this;

			[NonSerialized]
			public EventData _003CeventData_003E5__2;

			[NonSerialized]
			public bool _003CisNewlyCreated_003E5__3;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__2;

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
		public sealed class _003CItemSetAnimationRoutine_003Ed__209 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public ItemController item;

			public bool nonAnimated;

			public BoardPosition selectedBoardPosition;

			public BoardController _003C_003E4__this;

			public ItemCreationHandler itemCreationHandler;

			public bool spawnAnimated;

			public CellController targetCell;

			public bool boosterSplit;

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
			public _003CItemSetAnimationRoutine_003Ed__209(int _003C_003E1__state)
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
		public struct _003CLoadBoard_003Ed__140 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoardData boardData;

			public bool isEventBoard;

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
		public struct _003CProcessCloudDestroy_003Ed__271 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public int level;

			public UnityAction onItemsSet;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__2;

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
		public struct _003CProcessCurrencyClick_003Ed__296 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public ItemController item;

			public BoardController _003C_003E4__this;

			[NonSerialized]
			public int _003Clevel_003E5__2;

			[NonSerialized]
			public Vector3 _003Cpos_003E5__3;

			[NonSerialized]
			public MasterController _003CmasterController_003E5__4;

			[NonSerialized]
			public IBoardItemCurrencyHandler _003CboardItemCurrencyHandler_003E5__5;

			[NonSerialized]
			public RecurringEventIconPresenterBase _003CeventIcon_003E5__6;

			[NonSerialized]
			public int _003CupdatedProgress_003E5__7;

			[NonSerialized]
			public bool _003CisIconNull_003E5__8;

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
		public struct _003CProcessSplit_003Ed__267 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoosterAnimationController.SplitInfo Split;

			[NonSerialized]
			public KiteBoosterConfigModel _003CboosterConfig_003E5__2;

			[NonSerialized]
			public BoardItemData _003CboardItemData_003E5__3;

			[NonSerialized]
			public ItemInfo _003CitemInfo_003E5__4;

			[NonSerialized]
			public ItemEntity _003CspawnedItemEntity1_003E5__5;

			[NonSerialized]
			public ItemEntity _003CspawnedItemEntity2_003E5__6;

			[NonSerialized]
			public Coordinate _003Ccoordinate_003E5__7;

			[NonSerialized]
			public ItemCreationHandler _003CitemCreationHandler_003E5__8;

			[NonSerialized]
			public SplitBoosterLocation _003CsplitBoosterLocation_003E5__9;

			[NonSerialized]
			public UniTask<ItemController>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public ItemEntity _003CspawnedItemEntity3_003E5__10;

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
		public struct _003CRemoveUnusedAddressables_003Ed__137 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public AddressableDownloader addressableDownloader;

			public BoardController _003C_003E4__this;

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
		public struct _003CResultCallback_003Ed__131 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardData boardData;

			public BoardController _003C_003E4__this;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

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
		public sealed class _003CSendSaveBoardEvent_003Ed__279 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public BoardController _003C_003E4__this;

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
			public _003CSendSaveBoardEvent_003Ed__279(int _003C_003E1__state)
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
		public struct _003CSetCloudItemsAsync_003Ed__273 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public int level;

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
		public struct _003CSpawnAllAnimatedRewardsForTask_003Ed__235 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardTaskItem boardTaskItem;

			public BoardController _003C_003E4__this;

			public RectTransform targetSpawnItem;

			public BoardItemCollectable collectableData;

			[NonSerialized]
			public BoardItemCollectable _003CgemCollectableData_003E5__2;

			[NonSerialized]
			public BoardItemCollectable _003CxpCollectableData_003E5__3;

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
		public struct _003CSpawnItemAsync_003Ed__167 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<ItemController> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoardItemData boardItemData;

			public ItemEntity itemEntity;

			public Coordinate spawnerCoordinate;

			public bool onInitialize;

			public bool merged;

			public bool isNewlyCreated;

			public ItemCreationHandler itemCreationHandler;

			[NonSerialized]
			public ItemController _003CboardItem_003E5__2;

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
		public struct _003CSpawnItemAsyncOnSplit_003Ed__166 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<ItemController> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public BoardItemData boardItemData;

			public ItemEntity itemEntity;

			public Coordinate spawnerCoordinate;

			public ItemCreationHandler itemCreationHandler;

			[NonSerialized]
			public UniTask<ItemController>.Awaiter _003C_003Eu__1;

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
		public struct _003CStopBoard_003Ed__150 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardController _003C_003E4__this;

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
		public struct _003CUnboxCellsAfterLevelupDismiss_003Ed__294 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardController _003C_003E4__this;

			public bool isInit;

			[NonSerialized]
			public List<ItemController> _003CunboxWaiting_003E5__2;

			[NonSerialized]
			public bool _003CisBlocked_003E5__3;

			[NonSerialized]
			public bool _003CunboxHappened_003E5__4;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public List<ItemController>.Enumerator _003C_003E7__wrap4;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__2;

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

		public CellController BoardCellPrefab;

		public ItemController BoardItemPrefab;

		public Transform BoardInsideParent;

		public SpriteRenderer ItemActionArea;

		public BoosterAnimationController BoosterAnimationController;

		public AnimationLoop SpawnLoop1;

		public AnimationLoop SpawnLoop2;

		public AnimationLoop MergedItemLoop;

		public AnimationLoop MiscInventorySpawnAnim;

		public DoMove MiscMovePlacementAnim;

		public DoMove MiscRevertPlacementAnim;

		public DoMove MiscSwapPlacementAnim;

		public ObjectPooler ObjectPool;

		[Header("Configurable")]
		public SpriteRenderer AllBackgroundBoard;

		public SpriteRenderer BoardInsideBackground;

		public SerializableDictionary<AnimatedCollectableController.AnimatedItemType, AnimatedCollectableController> BoardTaskRewardPrefabs;

		[HideInInspector]
		[NonSerialized]
		public BoardTaskData BoardTaskData;

		[HideInInspector]
		public LevelData LevelData;

		[HideInInspector]
		public BoardPosition SelectedPosition;

		[HideInInspector]
		public int ChargingChestCount;

		[HideInInspector]
		public BoardEntity BoardEntity;

		[HideInInspector]
		public EventEntity EventEntity;

		[HideInInspector]
		public AnimationReferenceAsset SceneBackgrounAnimation;

		[HideInInspector]
		public MergeHintAnimationController MergeHintAnimationController;

		[HideInInspector]
		public BoardScrollableAreaController BoardScrollableAreaController;

		public BoardParticleData BoardParticleData;

		[NonSerialized]
		public readonly List<BoardPosition> _positions;

		[NonSerialized]
		public long _millisecondPassed;

		[NonSerialized]
		public Vector2 _firstItemPos;

		[NonSerialized]
		public List<ItemController> _spawnerList;

		[NonSerialized]
		public ParticleSystem _preMergeParticle;

		[NonSerialized]
		public MetaData _metaData;

		[NonSerialized]
		public bool _missingXpAndSpawnersCalculated;

		[NonSerialized]
		public BoardData _boardData;

		[NonSerialized]
		public bool _isEventBoard;

		[NonSerialized]
		public bool _blockAutoSpawner;

		[NonSerialized]
		public int _eventIndex;

		[NonSerialized]
		public bool _isInitialized;

		[NonSerialized]
		public BoardDataAddressableLoader _boardDataAddressableLoader;

		[NonSerialized]
		public string _trigger;

		[NonSerialized]
		public SFXItem _customEventGameplaySound;

		[NonSerialized]
		public CommonFactoryService _factoryService;

		[NonSerialized]
		public ItemChainManager _itemChainManager;

		[NonSerialized]
		public readonly string ANALYTIC_EVENT_TRASH_NAME;

		[NonSerialized]
		public readonly string ANALYTIC_EVENT_INVENTORY_NAME;

		[NonSerialized]
		public readonly string ANALYTIC_EVENT_REWARD_AREA_NAME;

		[NonSerialized]
		public readonly string ANALYTIC_EVENT_TASK_COMPLETE_NAME;

		public static readonly List<TutorialIndex> AssetChangedTutorialSteps;

		public static readonly HashSet<int> _spawnerSetIDs;

		[NonSerialized]
		public readonly BoardPlacementAnimation _boardPlacementAnimation;

		[NonSerialized]
		public AnimatedCollectableTracker _animatedCollectableTracker;

		public CameraController CameraController => null;

		public GameplayNonScaledCanvasView GameplayNonScaledCanvasView => null;

		public GameplayScaledCanvasView GameplayScaledCanvasView => null;

		public EnergyMultiplierHandler EnergyMultiplierHandler => null;

		public SellButtonController SellButtonController => null;

		public BoardTaskData GetBoardTaskData => null;

		public bool IsLevelUp { get; set; }

		public bool IsAutoSpawnerWaiting { get; set; }

		public bool BlockSelection { get; set; }

		public bool NonUndoClickAvailable { get; set; }

		public List<BoardPosition> Positions => null;

		public List<ItemController> SpawnerList => null;

		public SFXItem CustomEventGameplaySound => null;

		public bool BoardInitEnergyProcessed { get; set; }

		public bool IsInitialized => false;

		public bool BlockAutoSpawner => false;

		public MergeParticleController MergeParticleController { get; set; }

		public BoardParticleController BoardParticleController { get; set; }

		public ItemCollectionHandler ItemCollection { get; set; }

		public WarningTextFactory WarningTextFactory => null;

		public ItemControllerFactory ItemControllerFactory => null;

		public int EventIndex => 0;

		public BoardData BoardData
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public BoardPlacementAnimation BoardPlacementAnimation { get; set; }

		public AnimatedCollectableTracker AnimatedCollectableTracker => null;

		public void IncreaseChargingChestCount()
		{
		}

		public void DecreaseChargingChestCount()
		{
		}

		public override void Awake()
		{
		}

		public override void Start()
		{
		}

		public void OverrideSpecialTaskItemImages()
		{
		}

		public override void OnDestroy()
		{
		}

		public void SendBoardSessionFunnelEvent(GameStatusState state)
		{
		}

		[AsyncStateMachine(typeof(_003CInitializeEventBoard_003Ed__127))]
		public UniTaskVoid InitializeEventBoard(BoardData boardData)
		{
			return default(UniTaskVoid);
		}

		public void FixBrokenEventEntity()
		{
		}

		[AsyncStateMachine(typeof(_003CInitBoardEvent_003Ed__129))]
		public UniTaskVoid InitBoardEvent(int index)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CInitBoard_003Ed__130))]
		public UniTaskVoid InitBoard(BoardData boardData)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CResultCallback_003Ed__131))]
		public UniTask<bool> ResultCallback(BoardData boardData)
		{
			return default(UniTask<bool>);
		}

		[AsyncStateMachine(typeof(_003CInitializeAsync_003Ed__132))]
		public UniTask<bool> InitializeAsync(bool isNewlyCreated)
		{
			return default(UniTask<bool>);
		}

		public void CheckRewardAreaEntity(BoardEvent.InitializeBoard e)
		{
		}

		public void RevertDraggingBoardItems()
		{
		}

		public void InitializeAnimations()
		{
		}

		[AsyncStateMachine(typeof(_003CInitializeBoard_003Ed__136))]
		public UniTask<bool> InitializeBoard(BoardEntity boardEntity, bool isFirstSession, EventEntity eventEntity)
		{
			return default(UniTask<bool>);
		}

		[AsyncStateMachine(typeof(_003CRemoveUnusedAddressables_003Ed__137))]
		public UniTask RemoveUnusedAddressables(AddressableDownloader addressableDownloader)
		{
			return default(UniTask);
		}

		public void InitObjectPool(int maxBoardItemCount)
		{
		}

		public void SaveSpawnerSetIDsOnInitialize()
		{
		}

		[AsyncStateMachine(typeof(_003CLoadBoard_003Ed__140))]
		public UniTask<bool> LoadBoard(BoardData boardData, bool isEventBoard)
		{
			return default(UniTask<bool>);
		}

		public void InitializeNullEntitiesForUpdatedUsers()
		{
		}

		public void FixMissingCompletedMetaTaskItems()
		{
		}

		public void SendInitializeEvents(BoardEntity boardEntity, EventEntity eventEntity, bool isFirstSession)
		{
		}

		public void SendInitAnalyticsEvents(BoardEntity boardEntity)
		{
		}

		public static void ProcessWaitingEventLevelUp(EventEntity eventEntity, BoardData boardData)
		{
		}

		public void SetBoardInitEnergiesProcessed()
		{
		}

		public BoardTaskController GetBoardTaskController()
		{
			return null;
		}

		public List<BoardTaskItemController> GetBoardTaskItemControllers()
		{
			return null;
		}

		public List<int> FindDoneItems(List<BoardTaskItemController> activeBoardTasks)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CStopBoard_003Ed__150))]
		public UniTaskVoid StopBoard()
		{
			return default(UniTaskVoid);
		}

		public void InjectConfigurableAssets(BoardConfigurableUIData data)
		{
		}

		public void SetItemCollection()
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

		public override void UpdateTick()
		{
		}

		public void SpawnerAnimationCyclePaused()
		{
		}

		public void StartSpawnerAnimations()
		{
		}

		public float GetSpawnerAnimationPosition()
		{
			return 0f;
		}

		public void AddToSavedSpawnerSetIDsORuntime(List<BoardItemSetData> setDatas)
		{
		}

		public void SetMillisecondsPassed(long millisecondsPassed, string trigger)
		{
		}

		public InventoryEntity GetInventoryEntity()
		{
			return null;
		}

		public void InitializeInventory(BoardEntity boardEntity, EventEntity eventEntity)
		{
		}

		public void ProcessPausedSpawnerCapacity()
		{
		}

		public void CreateOfflineAutoItems()
		{
		}

		[AsyncStateMachine(typeof(_003CSpawnItemAsyncOnSplit_003Ed__166))]
		public UniTask<ItemController> SpawnItemAsyncOnSplit(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, ItemCreationHandler itemCreationHandler = null)
		{
			return default(UniTask<ItemController>);
		}

		[AsyncStateMachine(typeof(_003CSpawnItemAsync_003Ed__167))]
		public UniTask<ItemController> SpawnItemAsync(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, bool onInitialize, bool merged = false, bool isNewlyCreated = true, ItemCreationHandler itemCreationHandler = null)
		{
			return default(UniTask<ItemController>);
		}

		public ItemController SpawnItem(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, bool onBoardInitialize, bool merged = false, bool isNewlyCreated = true, int capacity = 0, bool isCapacityUpdated = true, bool isBubbleDestroy = false, ItemCreationHandler itemCreationHandler = null)
		{
			return null;
		}

		public void TrySendBoardItemSpawnFirebaseEvent(bool isNewItem, BoardItemData boardItemData, ItemCreationHandler itemCreationHandler, bool onBoardInitialize = false)
		{
		}

		public bool IsSendBoardItemSpawnFirebaseEvent(BoardItemData boardItemData, ref ItemCreationHandler itemCreationHandler, bool onBoardInitialize)
		{
			return false;
		}

		public static bool IsRecurringEventSpawnerSpawn(BoardItemData boardItemData, ref ItemCreationHandler itemCreationHandler, bool onBoardInitialize)
		{
			return false;
		}

		public void AddBoardSlotFullCounter()
		{
		}

		public SlotFullCounter.BoardType GetFireSlotFullType()
		{
			return default(SlotFullCounter.BoardType);
		}

		public bool IsSendBoardFullFirebaseEventOnSpawnItem()
		{
			return false;
		}

		public bool IsSendBoardFullFirebaseEventOnSplitBooster(ItemCreationHandler itemCreationHandler)
		{
			return false;
		}

		public bool IsSendBoardFullFirebaseEventORemoveJelly()
		{
			return false;
		}

		public string GetBoardItemSpawnFirebaseEventTrigger(ItemCreationHandler itemCreationHandler)
		{
			return null;
		}

		public void TrySendSpecialTaskEvents(BoardItemData boardItemData)
		{
		}

		public BoardPositionEntity FindSameItem(ItemEntity itemEntity)
		{
			return null;
		}

		public BoardPositionEntity FindSameItem(ItemRuntimeData itemRuntimeData)
		{
			return null;
		}

		public CellController SpawnCell(CellEntity cellEntity, Vector2 position)
		{
			return null;
		}

		public BoardPosition GetPosition(Coordinate index)
		{
			return null;
		}

		public BoardPosition GetPosition(int index)
		{
			return null;
		}

		public BoardPosition GetFirstPosition()
		{
			return null;
		}

		public BoardPosition GetLastPosition()
		{
			return null;
		}

		public Vector2 GetWorldPosition(Coordinate boardIndex)
		{
			return default(Vector2);
		}

		public int GetListPosition(ItemController item)
		{
			return 0;
		}

		public int GetListPosition(Coordinate boardIndex)
		{
			return 0;
		}

		public void SwapItemsOnBoard(ItemController source, ItemController target, BoardPosition selectedBoardPosition, bool saveBoard = true)
		{
		}

		public BoardType GetBoardType()
		{
			return default(BoardType);
		}

		public void MergeItemsOnBoard(ItemController source, ItemController target, BoardItemData itemData, BoardPosition boardPosition)
		{
		}

		public List<ItemController> ProcessUnbox(Coordinate targetCoordinate)
		{
			return null;
		}

		public List<ItemController> ProcessLevelUnbox()
		{
			return null;
		}

		public BoardItemSurpriseBox GetSurpriseBox()
		{
			return null;
		}

		public bool IsLastLevel(ItemController itemController)
		{
			return false;
		}

		public List<BoardItemData> GetBoardItemSetItems(ItemController itemController)
		{
			return null;
		}

		public bool IsItemExitsOnBoard(int setID, int level)
		{
			return false;
		}

		public bool IsSingleItemOnSet(ItemInfo itemInfo)
		{
			return false;
		}

		public ItemEntity ProcessExtraItemData(Coordinate targetCoordinate)
		{
			return null;
		}

		public void PlayMergeSound(bool isJelly, int level, int setID)
		{
		}

		public void CreateParticle(ParticleSystem particlePrefab, Vector3 position, Transform parent = null, SortingData sortingData = null)
		{
		}

		[IteratorStateMachine(typeof(_003CCreateParticleRoutine_003Ed__202))]
		public IEnumerator CreateParticleRoutine(GameObject particlePrefab, Vector3 position, bool autoPlay = true, Transform parent = null, SortingData sortingData = null)
		{
			return null;
		}

		public ItemEntity ProcessBubbleData(ItemEntity itemEntity, Coordinate sourceBoardIndex)
		{
			return null;
		}

		public bool CheckActiveTasksForExistingBubble(ItemEntity itemEntity, List<BoardTaskItem> activeTasks, int mergedItemLevel, ref bool setBubble)
		{
			return false;
		}

		public void MoveItemOnBoard(ItemController item, CellController boardCell, BoardPosition boardPosition, bool saveBoard = true)
		{
		}

		public bool SetItemOnBoard(Coordinate boardIndex, ItemController item, bool saveBoard = true, bool spawnAnimated = true, bool swapAnimated = false, bool panelAnimated = false, BoardPosition selectedBoardPosition = null, bool merged = false, bool move = false, ItemCreationHandler itemCreationHandler = null, bool isBubbleTimeFinish = false, bool nonAnimated = false, bool boosterSplit = false)
		{
			return false;
		}

		public bool SetItemOnBoard(Coordinate boardIndex, ItemController item, bool skipCellCheck, bool saveBoard, bool spawnAnimated, bool swapAnimated, bool panelAnimated, bool merged, bool move, BoardPosition selectedBoardPosition = null, bool onInitialize = false, ItemCreationHandler itemCreationHandler = null, bool isBubbleTimeFinish = false, bool nonAnimated = false, bool boosterSplit = false)
		{
			return false;
		}

		public void ArrangeTutorialEventsOnSetItems(Coordinate boardIndex, ItemController item, bool merged, bool move, bool swap)
		{
		}

		[IteratorStateMachine(typeof(_003CItemSetAnimationRoutine_003Ed__209))]
		public IEnumerator ItemSetAnimationRoutine(ItemController item, bool spawnAnimated, bool swapAnimated, bool panelAnimated, BoardPosition selectedBoardPosition, CellController targetCell, ItemCreationHandler itemCreationHandler, bool nonAnimated, bool boosterSplit)
		{
			return null;
		}

		public bool IsCellUnAvailable()
		{
			return false;
		}

		public void SpawnItemAnimation(ItemController item, CellController targetCell, BoardPosition selectedBoardPosition, ItemCreationHandler itemCreationHandler, bool boosterSplit)
		{
		}

		public Sequence GetPlacementSequence(ItemController item, CellController targetCell)
		{
			return null;
		}

		public TutorialIndex GetSpawnItemTutorialIndex(ItemController item, bool boosterSplit, bool isCellUnAvailable, bool is115WillBeEnabled)
		{
			return default(TutorialIndex);
		}

		public void TriggerSpawnItemTutorial(TutorialIndex tutorialIndex, ItemController item)
		{
		}

		public void SwapItemAnimation(ItemController item, CellController targetCell, BoardPosition selectedBoardPosition, ItemCreationHandler itemCreationHandler)
		{
		}

		public void PanelItemAnimation(ItemController item, CellController targetCell, BoardPosition selectedBoardPosition, ItemCreationHandler itemCreationHandler)
		{
		}

		public TutorialIndex GetPanelItemTutorialIndex(ItemController item, bool isOpenStep79, bool isCellUnAvailable)
		{
			return default(TutorialIndex);
		}

		public void TriggerPanelItemTutorial(TutorialIndex tutorialIndex, ItemController item)
		{
		}

		public void MoveItemAnimation(ItemController item, CellController targetCell, BoardPosition selectedBoardPosition, ItemCreationHandler itemCreationHandler)
		{
		}

		public void TryCreateNewItemFloatOnSetAnimation(ItemCreationHandler itemCreationHandler)
		{
		}

		public bool IsCreateNewFoundText(ItemController item)
		{
			return false;
		}

		public void CreateNewItemText(ItemController item, bool tutorialActive = false)
		{
		}

		public void SpawnAnimationComplete(ItemController item)
		{
		}

		public Coordinate GetSelectedPositionIndex()
		{
			return default(Coordinate);
		}

		public void DestroyItem(Coordinate boardIndex, bool saveBoard, bool resetInfo)
		{
		}

		public void DestroyItemViaSell(ItemController itemController, bool saveBoard)
		{
		}

		public bool DestroyItemGameObject(Coordinate boardIndex, bool resetInfo, bool saveBoard)
		{
			return false;
		}

		public bool DestroyItemGameObjectViaSell(ItemController itemController, bool saveBoard)
		{
			return false;
		}

		public void DestroyItemEntity(Coordinate boardIndex)
		{
		}

		public void DestroyItemEntitySave(Coordinate boardIndex)
		{
		}

		public void ClearCell(Coordinate boardIndex, bool saveBoard = true)
		{
		}

		public void DestroyItemsBySetID(int setID, bool saveBoard)
		{
		}

		public void DestroyItem(ItemController item, bool inventoryAdd, bool saveBoard = true, bool resetInfo = true, bool itemSell = false)
		{
		}

		public void DestroyItemViaSell(ItemController item)
		{
		}

		[AsyncStateMachine(typeof(_003CSpawnAllAnimatedRewardsForTask_003Ed__235))]
		public UniTaskVoid SpawnAllAnimatedRewardsForTask(BoardItemCollectable collectableData, RectTransform targetSpawnItem, BoardTaskItem boardTaskItem)
		{
			return default(UniTaskVoid);
		}

		public int CalculateTotalAnimatedItemCount(BoardTaskItem boardTaskItem, GameConfig gameConfig)
		{
			return 0;
		}

		public void OnAllAnimatedItemsCompleted()
		{
		}

		public void StartXPProgressAnimationIfXPShowClose(BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskExtraItemsReward(Vector3 position, float initDelay, BoardTaskItem boardTaskItem, bool isEvent)
		{
		}

		public void GenerateTaskRecurringEventReward(BoardItemCollectable collectableData, Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskSeasonReward(Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskBoardEventReward(Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskCoinReward(BoardItemCollectable collectableData, Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskXPReward(BoardItemCollectable collectableData, Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void GenerateTaskGemReward(BoardItemCollectable collectableData, Vector3 position, float initDelay, BoardTaskItem boardTaskItem)
		{
		}

		public void SpawnAnimatedCollectable(BoardItemCollectable collectableData, Vector3 position, int count, int toCollect, float initDelay)
		{
		}

		public AnimatedCollectableController InstantiateReward(Vector3 position, AnimatedCollectableController.AnimatedItemType type)
		{
			return null;
		}

		public void SyncSpawnersSpineParticle()
		{
		}

		public float GetTotalMergeLevelInBoardFloat(int setID)
		{
			return 0f;
		}

		public bool PlaySurpriseBoxParticle(BoardItemData perishableSpawnerData)
		{
			return false;
		}

		public List<Coordinate> GetAvailableNeighborCellPositions(Coordinate boardIndex)
		{
			return null;
		}

		public void CheckCreateParticle(BoardItemData boardItemData, Vector3 chestSpawnerPosition, SortingData sortingData)
		{
		}

		public ItemController SpawnAtRandomPosition(ItemEntity itemEntity, BoardItemData boardItemData, bool isNewlyCreated, Transform sourceTransform, bool disableItemSelection = false, bool isCapacityUpdated = true, ItemCreationHandler itemCreationHandler = null)
		{
			return null;
		}

		public void SpawnBubbleAtRandomPosition(ItemEntity itemEntity, BoardItemData boardItemData, bool isNewlyCreated, Transform sourceTransform, bool disableItemSelection = false, bool isCapacityUpdated = true, ItemCreationHandler itemCreationHandler = null)
		{
		}

		public void Save(bool close = false)
		{
		}

		public BoardEntity Load()
		{
			return null;
		}

		public void SetSelectedPosition(BoardPosition position, bool selectCell = true, bool dontUseAnimation = false)
		{
		}

		public void ClearSelectedPosition(bool resetInfo, bool itemDestroy)
		{
		}

		public void ArrangeSelectedCellImage(bool isActive)
		{
		}

		public void AnimateDoneBoardTaskItems(BoardTaskItemController completedTaskItemController, Action<bool> callback)
		{
		}

		public void AnimateDoneAllSpecialTaskItems(BoardTaskItemController completedTaskItemController, List<BoardPositionEntity> positionsMatched)
		{
		}

		public void PrepareItemToScrollableAreaAnimation(BoardPosition position)
		{
		}

		public bool IsTaskGoal(ItemController item, BoardTaskGoal goalItem)
		{
			return false;
		}

		public void ProcessDart(BoosterAnimationController.BubbleInfo Bubble)
		{
		}

		public void ProcessUpgrade(BoosterAnimationController.UpgradeInfo Upgrade)
		{
		}

		public void ProcessCharger(BoosterAnimationController.ChargeInfo Charge)
		{
		}

		[AsyncStateMachine(typeof(_003CProcessSplit_003Ed__267))]
		public UniTaskVoid ProcessSplit(BoosterAnimationController.SplitInfo Split)
		{
			return default(UniTaskVoid);
		}

		public List<CellEntity> GetAvailableCells()
		{
			return null;
		}

		public List<Coordinate> GetAvailableCellCoordinates(Coordinate targetIndex)
		{
			return null;
		}

		public List<CellController> GetNearestAvailableOtherCells(Transform sourceTransform)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CProcessCloudDestroy_003Ed__271))]
		public UniTaskVoid ProcessCloudDestroy(int level, bool isSentByTutorial, UnityAction onItemsSet)
		{
			return default(UniTaskVoid);
		}

		public void SetCloudItems(int level)
		{
		}

		[AsyncStateMachine(typeof(_003CSetCloudItemsAsync_003Ed__273))]
		public UniTask<bool> SetCloudItemsAsync(int level)
		{
			return default(UniTask<bool>);
		}

		public List<ItemController> GetSpawnersWithSpineOnBoard()
		{
			return null;
		}

		public void ClearAllTreasureBoxNotifs()
		{
		}

		public void ArrangeTreasureBoxNotifsOnBoard(ItemController initializingItem = null)
		{
		}

		public bool IsEventBoard()
		{
			return false;
		}

		public void FixFeatureInfoForBoardTasks()
		{
		}

		[IteratorStateMachine(typeof(_003CSendSaveBoardEvent_003Ed__279))]
		public IEnumerator SendSaveBoardEvent()
		{
			return null;
		}

		public bool IsSafeToUnPauseUnlimitedEnergy()
		{
			return false;
		}

		public void FixMissingSpawnerItems()
		{
		}

		public void FixMissingSpawnersInMap()
		{
		}

		public void TryFixSpecialTaskSpawner(ref int fixedItemCount, List<BoardItemData> boardItemDataList)
		{
		}

		public void FixMissingSpawner(int setID, int level)
		{
		}

		public void FixMissingSpawnerPrecise(int setID, int requiredPoints)
		{
		}

		public bool IsAnyItemMoving()
		{
			return false;
		}

		public void BlockAutoSpawners()
		{
		}

		public void ReleaseAutoSpawners()
		{
		}

		public void BlockSelectionItem()
		{
		}

		public void ReleaseSelectionItem()
		{
		}

		public bool ArrangeSeasonPassPoints(BoardTaskItem boardTaskItem)
		{
			return false;
		}

		public void CountChargingChest()
		{
		}

		public void DisableObjectsOnLevel(BoardPosition boardPosition)
		{
		}

		[AsyncStateMachine(typeof(_003CUnboxCellsAfterLevelupDismiss_003Ed__294))]
		public UniTask<bool> UnboxCellsAfterLevelupDismiss(bool isInit)
		{
			return default(UniTask<bool>);
		}

		public void CheckForTutorialStep62(ItemController item)
		{
		}

		[AsyncStateMachine(typeof(_003CProcessCurrencyClick_003Ed__296))]
		public UniTask ProcessCurrencyClick(ItemController item)
		{
			return default(UniTask);
		}

		public List<RewardEntity> GetActiveRewards()
		{
			return null;
		}

		public bool IsNextToAutoSpawner(Coordinate boardIndex)
		{
			return false;
		}

		public void SendBoardActionAnalyticEvent(Movable.BoardActionType boardActionType, string from, string to, BoardItemData itemData, BoardItemData spawnerData = null)
		{
		}

		public List<int> GetDiscoveryBoxIds()
		{
			return null;
		}

		public bool CheckDailyChallengeItem(int setID)
		{
			return false;
		}

		public bool HasMergeHintItems()
		{
			return false;
		}

		public bool IsMergeAvailable(ItemController itemController1, ItemController itemController2)
		{
			return false;
		}

		public BoardItemData GetMergedItemData(ItemController candidateItem)
		{
			return null;
		}

		public bool TryFindMergeableCandidateItems(ItemController itemController, out List<ItemController> candidates)
		{
			candidates = null;
			return false;
		}

		public void ArrangeCells()
		{
		}

		public void ArrangeCellsForEvent()
		{
		}

		public void ArrangeCellsForBoard()
		{
		}

		public void ArrangeCells(List<BoardPositionEntity> positionEntities)
		{
		}

		public void TryEnableCellBackgrounds(BoardTaskItemController boardTaskItemController)
		{
		}

		public void TryEnableCellBackgroundsForEvent(BoardTaskItemController boardTaskItemController)
		{
		}

		public void TryEnableCellBackgroundsForDefaultBoard(BoardTaskItemController boardTaskItemController)
		{
		}

		public void TryEnableCellBackgrounds(BoardTaskItemController boardTaskItemController, List<BoardPositionEntity> positionEntities)
		{
		}

		public void CreateBubbleBurst(CellController cellController, bool bubblePin)
		{
		}

		public void CreateBubbleBurst(ItemController itemController, bool bubblePin)
		{
		}

		public void ArrangeBubbleInterstitial(GameObject burstParticle)
		{
		}

		public void OnEvent(BoardEvent.InitializeBoard e)
		{
		}

		public void OnEvent(BoardEvent.PreMergeParticleActive e)
		{
		}

		public void OnEvent(BoardEvent.Move e)
		{
		}

		public void OnEvent(BoardEvent.Merge e)
		{
		}

		public void OnEvent(BoardEvent.RevertMove e)
		{
		}

		public void OnEvent(BoardEvent.Swap e)
		{
		}

		public void OnEvent(BoardEvent.CollectCollectable e)
		{
		}

		public void OnEvent(BoardEvent.EnergyRefillSuccess e)
		{
		}

		public void OnEvent(BoardEvent.SpawnerSpawn e)
		{
		}

		public void OnEvent(BoardEvent.PerishableSpawnerSpawn e)
		{
		}

		public void OnEvent(BoardEvent.AutoSpawnerSpawn e)
		{
		}

		public void OnEvent(BoardEvent.ChestSpawnerSpawn e)
		{
		}

		public void OnEvent(BoardEvent.TaskSupportChestSpawnerSpawn e)
		{
		}

		public void OnEvent(BoardEvent.RemoveFromInventory e)
		{
		}

		public void OnEvent(BoardEvent.AddToInventory e)
		{
		}

		public void OnEvent(BoardEvent.UndoItemSell e)
		{
		}

		public void OnEvent(BoardEvent.RemoveFromRewardUI e)
		{
		}

		public void OnEvent(BoardEvent.RemoveItemViaSellComplete e)
		{
		}

		public void OnEvent(BoardEvent.BubbleTimeFinish e)
		{
		}

		public void OnEvent(ItemClick e)
		{
		}

		public void OnEvent(NonMovableItemClick e)
		{
		}

		public void OnEvent(BoardEvent.BoosterPanelStatusChange e)
		{
		}

		public void OnEvent(BoardEvent.BoosterBoardAction e)
		{
		}

		public void OnEvent(BoardEvent.CloudDestroy e)
		{
		}

		public void OnEvent(TaskEvent.TaskDoneBoardItemsMoveCompleted e)
		{
		}

		public void OnEvent(CanvasEvent.PlayTimeLimitedClockParticle e)
		{
		}

		public void OnEvent(AnimationEvent.SpawnerHintAdd e)
		{
		}

		public void OnEvent(BoardEvent.BoosterAnimationCompleted e)
		{
		}

		public void OnEvent(BoardEvent.ClearBoard e)
		{
		}

		public void OnEvent(BoardEvent.DestroyFromBoard e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangedRequest e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangeCompleted e)
		{
		}

		public void OnEvent(SrDebuggerEvent.EventSpawn e)
		{
		}

		public void OnEvent(BoardEvent.ApplicationPause e)
		{
		}

		public void OnEvent(SrDebuggerEvent.CompleteMetaTaskUntil e)
		{
		}

		public void OnEvent(PurchaseEvent.PurchaseResult e)
		{
		}

		public void OnEvent(CanvasEvent.NonUndoClicked e)
		{
		}

		public void OnEvent(TaskEvent.LevelUpDismissed e)
		{
		}

		public void OnEvent(PurchaseEvent.SetTrigger e)
		{
		}

		public void OnEvent(BoardEvent.PickBoxItemSelection e)
		{
		}

		public void OnEvent(DailyChallengeEvent.PickChestConceptRewardBoxItemSelection e)
		{
		}

		public void OnEvent(AnimationEvent.AnimationFinished e)
		{
		}

		public void OnEvent(RecurringEvent.CurrencyClicked e)
		{
		}

		public void OnEvent(BoardEvent.ClearSelectedPosition e)
		{
		}

		public void OnEvent(BoardEvent.OnStateChange e)
		{
		}

		public void OnEvent(BoardEvent.BoardItemPositionUpdate e)
		{
		}

		public void OnEvent(MetaEvent.SeasonSoftFinish e)
		{
		}
	}
}
