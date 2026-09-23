using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.GameEvents;
using Metaplay.Core;
using UI;
using UnityEngine;

namespace Metacore.MergeMansion.UI.GarageCleanupEvent
{
	public class GarageCleanupEventButtonGroup : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadEventPrefab_003Ed__9 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public GarageCleanupEventPrefabs eventPrefabs;

			public CancellationToken ct;

			public GarageCleanupEventButtonGroup _003C_003E4__this;

			public GarageCleanupEventInfo eventInfo;

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
		public readonly Dictionary<IStringId, (GarageCleanupHudButton, IDisposableAssetHandle<GameObject>)> _instantiatedButtons;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public GarageCleanupEventManager _eventManager;

		[NonSerialized]
		public IMenuController _menuController;

		public void Initialize(PlayerModel player, GarageCleanupEventManager eventManager, IMenuController controller, ISafeRollback rollback)
		{
		}

		public void OnEventLoaded(GarageCleanupEventPrefabs prefabLibrary, GarageCleanupEventInfo eventInfo)
		{
		}

		public void OnEventRemoved(GarageCleanupEventInfo removed)
		{
		}

		[AsyncStateMachine(typeof(_003CLoadEventPrefab_003Ed__9))]
		public UniTask LoadEventPrefab(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventInfo eventInfo, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void DisposeItem(GarageCleanupEventInfo removed)
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

		public GarageCleanupHudButton CreateItem(GarageCleanupHudButton prefab, GarageCleanupEventInfo eventInfo, IMenuController controller, CancellationToken ct)
		{
			return null;
		}
	}
}
