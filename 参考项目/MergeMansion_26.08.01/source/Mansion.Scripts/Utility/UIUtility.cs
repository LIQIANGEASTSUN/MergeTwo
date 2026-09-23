using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UI;
using UI.Indicators;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.UI;

namespace Utility
{
	public static class UIUtility
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass25_0
		{
			public IDisposableAssetHandle<Sprite> handle;

			public void _003CLoadSpriteReferenceVisual_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CFadeCanvasGroupAlphaFromTo_003Ed__27 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CanvasGroup canvasGroup;

			public float from;

			public float to;

			public float durationSeconds;

			public CancellationToken ct;

			[NonSerialized]
			public float _003Ct_003E5__2;

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
		public struct _003CLoadSpriteReferenceVisual_003Ed__25 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public Image referenceImage;

			public AssetReferenceT<Sprite> spriteReference;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass25_0 _003C_003E8__1;

			public ISafeRollback rollback;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<Sprite>>.Awaiter _003C_003Eu__1;

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
		public struct _003CPopMenusOnTopOf_003Ed__7 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public Option<IMenuSection> menuOption;

			public IMenuController menuController;

			public CancellationToken ct;

			public Option<Rollback> rollbackOption;

			public Option<Action> onFinishedOption;

			[NonSerialized]
			public IMenuSection _003Cmenu_003E5__2;

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
		public struct _003CWaitForPollIntervalOrMenusClosed_003Ed__5 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public float seconds;

			[NonSerialized]
			public CancellationTokenSource _003ClinkedCts_003E5__2;

			[NonSerialized]
			public UniTask<int>.Awaiter _003C_003Eu__1;

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

		public static readonly ProfilerMarker MARKER;

		public static bool IsUIUnblockedAndReEngagementInactive(bool allowBoard = false, bool allowCutscene = false, bool allowHotspotCompletion = false, bool allowPopups = false, bool allowTransitions = false, bool allowMansionCanvasHidden = true)
		{
			return false;
		}

		public static bool IsUIUnblocked(bool allowBoard = false, bool allowCutscene = false, bool allowHotspotCompletion = false, bool allowPopups = false, bool allowTransitions = false, bool allowMansionCanvasHidden = true)
		{
			return false;
		}

		public static bool IsUIUnblockedOnBoard()
		{
			return false;
		}

		public static bool ShouldHandleEventUITriggers()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CWaitForPollIntervalOrMenusClosed_003Ed__5))]
		public static UniTask WaitForPollIntervalOrMenusClosed(float seconds, CancellationToken ct)
		{
			return default(UniTask);
		}

		public static void SetRewardIndicators(PlayerModel playerModel, IMenuController menuController, SpineRewardItemIndicator[] rewardIndicators, IReadOnlyList<IPlayerReward> rewards)
		{
		}

		[AsyncStateMachine(typeof(_003CPopMenusOnTopOf_003Ed__7))]
		public static UniTask PopMenusOnTopOf(Option<IMenuSection> menuOption, IMenuController menuController, Option<Rollback> rollbackOption, Option<Action> onFinishedOption, CancellationToken ct)
		{
			return default(UniTask);
		}

		public static void PopMenusOnTopOf(Option<IMenuSection> menuOption, IMenuController menuController, IScheduler scheduler, ISafeRollback parentRollback, Option<Action> onFinishedOption, CancellationToken ct)
		{
		}

		public static void PopAllMenus(IMenuController menuController, IScheduler scheduler, ISafeRollback parentRollback, Option<Action> onFinishedOption, CancellationToken ct)
		{
		}

		public static bool ShouldShowShopButton(PlayerModel playerModel, IBoardController boardController)
		{
			return false;
		}

		public static bool IsInfoButtonUnlocked()
		{
			return false;
		}

		public static bool IsUsingAlternateInventoryButton(PlayerModel playerModel, IBoardController boardController)
		{
			return false;
		}

		public static bool ShouldShowRewardsInTask(PlayerModel player)
		{
			return false;
		}

		public static bool ShouldSupportDTOBLayout(IPlayer player)
		{
			return false;
		}

		public static bool ShouldSupportDTOBLayout(IPlayer player, MergeBoardId mergeBoardId)
		{
			return false;
		}

		public static bool ShouldDisplayTaskCards(IBoardEventModel eventModel, MergeBoardId eventBoardId)
		{
			return false;
		}

		public static bool ShouldDisplayTodoButton(PlayerModel playerModel, IMenuController menuController, IBoardController boardController)
		{
			return false;
		}

		public static bool ShouldShowAlternatePocket(IPlayer player, MergeBoardId mergeBoardId)
		{
			return false;
		}

		public static bool ShouldShowAlternatePocket(IPlayer player, MergeBoardId mergeBoardId, IBoardEventModel eventModel)
		{
			return false;
		}

		public static bool ShouldShowAlternateSettingsButtonLayout(PlayerModel player)
		{
			return false;
		}

		public static bool ShouldAutoLevelUp(IPlayer player)
		{
			return false;
		}

		public static bool TutorializedAreaUnlockEnabled(IPlayer player)
		{
			return false;
		}

		public static void SetCanvasGroupVisibleAndInteractable(this CanvasGroup canvasGroup, bool visibleAndInteractable)
		{
		}

		public static TasksTabStyle GetTasksTabStyle(PlayerModel playerModel)
		{
			return default(TasksTabStyle);
		}

		[AsyncStateMachine(typeof(_003CLoadSpriteReferenceVisual_003Ed__25))]
		public static UniTaskVoid LoadSpriteReferenceVisual(AssetReferenceT<Sprite> spriteReference, Image referenceImage, ISafeRollback rollback, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public static UniTask FadeCanvasGroupAlphaTo(CanvasGroup canvasGroup, float to, float durationSeconds, CancellationToken ct)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CFadeCanvasGroupAlphaFromTo_003Ed__27))]
		public static UniTask FadeCanvasGroupAlphaFromTo(CanvasGroup canvasGroup, float from, float to, float durationSeconds, CancellationToken ct)
		{
			return default(UniTask);
		}

		public static bool IsEventsOnBoardEnabled(IPlayer player)
		{
			return false;
		}

		public static bool IsFlashSaleBadgesEnabled(IPlayer player)
		{
			return false;
		}
	}
}
