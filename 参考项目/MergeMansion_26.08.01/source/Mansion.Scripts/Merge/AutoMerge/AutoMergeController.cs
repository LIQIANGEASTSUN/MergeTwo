using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Code.GameLogic.AutoMerge;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Config.Types;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.SystemGroups;
using UI;
using UI.Board.BoardStatusEffect;
using UI.Messaging;
using UnityEngine;

namespace Merge.AutoMerge
{
	public class AutoMergeController : ITickSystem
	{
		public class AutoMergeCandidate
		{
			public Coordinate ItemCoordinate;

			public MergeItem Item;

			public bool isProcessed;

			public float GetSecondsSinceSpawned(PlayerModel playerModel)
			{
				return 0f;
			}

			public AutoMergeCandidate(Coordinate itemCoordinate, MergeItem item)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadAndCreateAutoMergeEffectHandler_003Ed__30 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public AutoMergeController _003C_003E4__this;

			[NonSerialized]
			public UniTask<AutoMergeAssetLibrary>.Awaiter _003C_003Eu__1;

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

		public static readonly System.Random SuggestionRandom;

		public const float DefaultAutoMergeInterval = 0.4f;

		public const float DefaultAutoMergeSpawnCooldown = 0.1f;

		[NonSerialized]
		public AutoMergeSettings _autoMergeSettings;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public UnityBoardController _boardController;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public IMergeGoalItemQuery _mergeGoalItemQuery;

		[NonSerialized]
		public HashSet<int> _bannedItems;

		[NonSerialized]
		public float _lastAutoMergeTime;

		[NonSerialized]
		public bool _hasShownAlertMessage;

		[NonSerialized]
		public List<AutoMergeCandidate> _prioritizedCandidates;

		[NonSerialized]
		public Transform _canvasRoot;

		[NonSerialized]
		public UnityOption<AutoMergeEffectHandler> _autoMergeEffectHandlerOption;

		[NonSerialized]
		public AutoMergeAssetLoader _autoMergeAssetLoader;

		[NonSerialized]
		public AutoMergeAct _currentAutoMerge;

		[NonSerialized]
		public readonly IAutoMergeFeatureModel _autoMergeFeatureModel;

		[NonSerialized]
		public readonly BoardStatusEffectSystem _boardStatusEffectSystem;

		[NonSerialized]
		public readonly MessagingController _messagingController;

		public float autoMergeInterval => 0f;

		public float autoMergeSpawnCooldown => 0f;

		public bool IsAutoMergeEnabledOnCurrentBoard => false;

		public MergeBoardId RequiredAutoMergeBoardId => null;

		public AutoMergeController(AutoMergeSettings autoMergeSettings, PlayerModel playerModel, UnityBoardController boardController, IMenuController menuController, IMergeGoalItemQuery mergeGoalItemQuery, BoardStatusEffectSystem boardStatusEffectSystem, MessagingController messagingController, Transform canvasRoot, ISafeRollback rollback)
		{
		}

		public void DestroyAndUnloadAutoMergeEffectHandler()
		{
		}

		[AsyncStateMachine(typeof(_003CLoadAndCreateAutoMergeEffectHandler_003Ed__30))]
		public UniTask LoadAndCreateAutoMergeEffectHandler()
		{
			return default(UniTask);
		}

		public void CreateAutoMergeEffectHandler(AutoMergeEffectHandler handlerPrefab)
		{
		}

		public void OnStatusEffectConfigLoaded(BoardStatusEffectType effectType)
		{
		}

		public void OnAutoMergeStateChanged()
		{
		}

		public void OnAutoMergeDurationChanged()
		{
		}

		public void RefreshVisuals(bool isAvailable)
		{
		}

		public void RefreshAutoMergeBoardStatusEffect(bool isAvailable)
		{
		}

		public bool TryGetAutoMergeTimeWindow(out MetacoreTime startTime, out MetacoreTime endTime)
		{
			startTime = default(MetacoreTime);
			endTime = default(MetacoreTime);
			return false;
		}

		public void OnManualSpawnActProcessed(MergeBoardAct spawnAct)
		{
		}

		public void OnMerge(MergeBoardAct act)
		{
		}

		public void FillBannedItems(MergeBoard mergeBoard, IPlayer player, HashSet<int> bannedItems)
		{
		}

		public void PrioritizeItemForAutoMergeCheck(Coordinate itemCoordinate, MergeBoard mergeBoard)
		{
		}

		public void UpdateInner()
		{
		}

		public void Tick()
		{
		}

		public bool IsBannedFromAutoMerge(MergeItem currentItem, MergeBoard mergeBoard, IPlayer player)
		{
			return false;
		}

		public Coordinate FindMergePartner(Coordinate itemCoordinate, MergeBoard mergeBoard, MetacoreTime currentTime)
		{
			return default(Coordinate);
		}

		public void OnMenuVisibilityChanged(bool visibile)
		{
		}

		public void OnBoardTransition(MenuStatus status)
		{
		}

		public void TryShowAutoMergeEnabledAlertMessage()
		{
		}

		public void Cleanup()
		{
		}
	}
}
