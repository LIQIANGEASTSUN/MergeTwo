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
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class ProgressionEventButtonGroup : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass16_0
		{
			public ProgressionEventButtonGroup _003C_003E4__this;

			public ProgressionEventHudButton instance;

			public void _003CCreateItem_003Eb__0(ProgressionEventInfo e)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreateItem_003Ed__16 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ProgressionEventHudButton>> _003C_003Et__builder;

			public ProgressionEventButtonGroup _003C_003E4__this;

			public ProgressionEventPrefabs prefabs;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass16_0 _003C_003E8__1;

			public ProgressionEventInfo eventInfo;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Addressables.IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

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
		public struct _003CCreateItems_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public IReadOnlyCollection<ProgressionEventInfo> added;

			public ProgressionEventButtonGroup _003C_003E4__this;

			public CancellationToken ct;

			public Action OnItemsCreated;

			[NonSerialized]
			public IEnumerator<ProgressionEventInfo> _003C_003E7__wrap1;

			[NonSerialized]
			public UniTask<UnityOption<ProgressionEventHudButton>>.Awaiter _003C_003Eu__1;

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
		public PlayerModel playerModel;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public ProgressionEventManager eventManager;

		[NonSerialized]
		public ISafeRollback _rollback;

		[NonSerialized]
		public readonly List<ProgressionEventHudButton> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<ProgressionEventInfo> added, IReadOnlyCollection<ProgressionEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, ProgressionEventManager progressionEventManager, ISafeRollback rollback)
		{
		}

		[AsyncStateMachine(typeof(_003CCreateItems_003Ed__11))]
		public UniTaskVoid CreateItems(IReadOnlyCollection<ProgressionEventInfo> added, Action OnItemsCreated, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public void DisposeItems(IReadOnlyCollection<ProgressionEventInfo> removed)
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

		[AsyncStateMachine(typeof(_003CCreateItem_003Ed__16))]
		public UniTask<UnityOption<ProgressionEventHudButton>> CreateItem(ProgressionEventPrefabs prefabs, ProgressionEventInfo eventInfo, CancellationToken ct)
		{
			return default(UniTask<UnityOption<ProgressionEventHudButton>>);
		}

		public void OnButtonClicked(ProgressionEventHudButton button, ProgressionEventInfo eventInfo)
		{
		}
	}
}
