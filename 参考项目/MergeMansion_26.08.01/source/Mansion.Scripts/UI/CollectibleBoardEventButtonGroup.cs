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
using GameLogic.Player;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metaplay.Core;
using UnityEngine;

namespace UI
{
	public class CollectibleBoardEventButtonGroup : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass10_0
		{
			public CollectibleBoardEventButtonGroup _003C_003E4__this;

			public CollectibleBoardEventHudButton buttonInstance;

			public void _003CLoadEventPrefab_003Eb__0(CollectibleBoardEventInfo e)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadEventPrefab_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CollectibleBoardEventButtonGroup _003C_003E4__this;

			public CollectibleBoardEventPrefabs eventPrefabs;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass10_0 _003C_003E8__1;

			public CollectibleBoardEventInfo eventInfo;

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
		public CollectibleBoardEventManager _eventManager;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public PlayerClientContext _playerContext;

		[NonSerialized]
		public readonly Dictionary<IStringId, (CollectibleBoardEventHudButton, IDisposableAssetHandle<GameObject>)> _instantiatedButtons;

		public void Initialize(PlayerModel player, CollectibleBoardEventManager eventManager, IMenuController controller, ISafeRollback rollback, PlayerClientContext playerContext)
		{
		}

		public void OnEventLoaded(CollectibleBoardEventPrefabs prefabLibrary, CollectibleBoardEventInfo eventInfo)
		{
		}

		public void OnEventRemoved(CollectibleBoardEventInfo removed)
		{
		}

		[AsyncStateMachine(typeof(_003CLoadEventPrefab_003Ed__10))]
		public UniTask LoadEventPrefab(CollectibleBoardEventPrefabs eventPrefabs, CollectibleBoardEventInfo eventInfo, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void DisposeItem(CollectibleBoardEventInfo removed)
		{
		}

		public void OnDestroyInner()
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

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void OnButtonClicked(CollectibleBoardEventHudButton button, CollectibleBoardEventInfo eventInfo)
		{
		}
	}
}
