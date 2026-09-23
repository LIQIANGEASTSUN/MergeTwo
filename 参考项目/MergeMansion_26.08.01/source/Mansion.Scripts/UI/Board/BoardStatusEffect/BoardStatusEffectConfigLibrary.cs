using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI.Board.BoardStatusEffect
{
	[CreateAssetMenu(fileName = "BoardStatusEffectConfigLibrary", menuName = "ScriptableObjects/Libraries/BoardStatusEffectConfigLibrary", order = 10)]
	public class BoardStatusEffectConfigLibrary : ScriptableObject
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass3_0
		{
			public BoardStatusEffectConfigLibrary _003C_003E4__this;

			public BoardStatusEffectType effectType;

			public void _003CLoadConfig_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadConfig_003Ed__3 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<BoardStatusEffectConfig>> _003C_003Et__builder;

			public BoardStatusEffectConfigLibrary _003C_003E4__this;

			public BoardStatusEffectType effectType;

			public AssetReferenceT<BoardStatusEffectConfig> configRef;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass3_0 _003C_003E8__1;

			public ISafeRollback rollback;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<BoardStatusEffectConfig>>.Awaiter _003C_003Eu__1;

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
		public List<BoardStatusEffectConfigEntry> configEntries;

		[NonSerialized]
		public readonly Dictionary<BoardStatusEffectType, IDisposableAssetHandle<BoardStatusEffectConfig>> _loadedConfigs;

		public UniTask<UnityOption<BoardStatusEffectConfig>> LoadConfig(BoardStatusEffectType effectType, ISafeRollback rollback, CancellationToken ct)
		{
			return default(UniTask<UnityOption<BoardStatusEffectConfig>>);
		}

		[AsyncStateMachine(typeof(_003CLoadConfig_003Ed__3))]
		public UniTask<UnityOption<BoardStatusEffectConfig>> LoadConfig(BoardStatusEffectType effectType, AssetReferenceT<BoardStatusEffectConfig> configRef, ISafeRollback rollback, CancellationToken ct)
		{
			return default(UniTask<UnityOption<BoardStatusEffectConfig>>);
		}

		public UnityOption<BoardStatusEffectConfig> GetConfig(BoardStatusEffectType effectType)
		{
			return default(UnityOption<BoardStatusEffectConfig>);
		}

		public bool IsConfigLoaded(BoardStatusEffectType effectType)
		{
			return false;
		}
	}
}
