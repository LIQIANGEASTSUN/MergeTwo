using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameEvents;
using GameLogic;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metaplay.Core;
using Navigation;
using UI.GameEvents;
using UnityEngine;

namespace UI
{
	public class LeaderboardEventButtonGroup : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass13_0
		{
			public LeaderboardEventButtonGroup _003C_003E4__this;

			public LeaderboardEventHudButton buttonInstance;

			public void _003CLoadEventPrefab_003Eb__0(LeaderboardEventInfo e)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadEventPrefab_003Ed__13 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public LeaderboardEventButtonGroup _003C_003E4__this;

			public LeaderboardEventPrefabs eventPrefabs;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass13_0 _003C_003E8__1;

			public LeaderboardEventInfo eventInfo;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

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
		public EventButtonGroupLayout buttonGroupLayout;

		[NonSerialized]
		public Option<Transform> _targetParent;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public LeaderboardEventManager _eventManager;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public IActionsExecutor _executor;

		[NonSerialized]
		public readonly Dictionary<IStringId, (LeaderboardEventHudButton, IDisposableAssetHandle<GameObject>)> _instantiatedButtons;

		public void OnDestroyInner()
		{
		}

		public void OnEventRemoved(LeaderboardEventInfo removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, LeaderboardEventManager eventManager, IMenuController controller, ISafeRollback rollback, INavigationController navigationController, IActionsExecutor executor)
		{
		}

		public void OnEventLoaded(LeaderboardEventPrefabs prefabLibrary, LeaderboardEventInfo eventInfo)
		{
		}

		[AsyncStateMachine(typeof(_003CLoadEventPrefab_003Ed__13))]
		public UniTask LoadEventPrefab(LeaderboardEventPrefabs eventPrefabs, LeaderboardEventInfo eventInfo, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void DisposeItem(LeaderboardEventInfo removed)
		{
		}

		public void DisposeAll()
		{
		}

		public void SetVisible(bool mansionViewVisibility)
		{
		}

		public void UpdateButtonVisibility()
		{
		}

		public void OnButtonClicked(LeaderboardEventHudButton button, LeaderboardEventInfo eventInfo)
		{
		}
	}
}
