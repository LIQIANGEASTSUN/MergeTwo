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
using Merge;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI
{
	public class CoreSupportEventButtonGroup : MonoBehaviour
	{
		public class Entry
		{
			public Option<IDisposableAssetHandle<GameObject>> Handle;

			public Option<CoreSupportEventHudButton> ButtonOption;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass15_0
		{
			public CoreSupportEventButtonGroup _003C_003E4__this;

			public CoreSupportEventHudButton button;

			public void _003CCreateButtonAsync_003Eb__0(CoreSupportEventInfo e)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreateButtonAsync_003Ed__15 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public CoreSupportEventButtonGroup _003C_003E4__this;

			public AssetReferenceT<GameObject> prefabReference;

			public CancellationToken ct;

			public Entry entry;

			[NonSerialized]
			public _003C_003Ec__DisplayClass15_0 _003C_003E8__1;

			public CoreSupportEventInfo eventInfo;

			public CoreSupportEventPrefabs prefabs;

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
		public PlayerModel playerModel;

		[NonSerialized]
		public PlayerClientContext playerContext;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IBoardController boardController;

		[NonSerialized]
		public ISafeRollback rollback;

		[NonSerialized]
		public CoreSupportEventManager eventManager;

		[NonSerialized]
		public readonly Dictionary<CoreSupportEventId, Entry> _entries;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<CoreSupportEventInfo> added, IReadOnlyCollection<CoreSupportEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel playerModel, PlayerClientContext playerContext, IMenuController menuController, IBoardController boardController, CoreSupportEventManager eventManager, ISafeRollback rollback)
		{
		}

		public void CreateEntries(IReadOnlyCollection<CoreSupportEventInfo> added)
		{
		}

		[AsyncStateMachine(typeof(_003CCreateButtonAsync_003Ed__15))]
		public UniTaskVoid CreateButtonAsync(Entry entry, AssetReferenceT<GameObject> prefabReference, CoreSupportEventInfo eventInfo, CoreSupportEventPrefabs prefabs, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public void ReleaseEntries(IReadOnlyCollection<CoreSupportEventInfo> removed)
		{
		}

		public void ReleaseEntry(CoreSupportEventInfo eventInfo)
		{
		}

		public void ReleaseEntry(Entry entry)
		{
		}

		public void ReleaseAllEntries()
		{
		}

		public void SetVisible(bool visible)
		{
		}

		public void UpdateButtonVisibility()
		{
		}

		public void OnButtonClicked(CoreSupportEventHudButton button, CoreSupportEventInfo eventInfo)
		{
		}

		public void HandleEndPopups(CoreSupportEventInfo eventInfo, CoreSupportEventModel eventModel)
		{
		}

		public Option<Transform> GetButtonTransform(CoreSupportEventType eventType)
		{
			return default(Option<Transform>);
		}

		public Option<Transform> GetButtonTransform(CoreSupportEventInfo eventInfo)
		{
			return default(Option<Transform>);
		}
	}
}
