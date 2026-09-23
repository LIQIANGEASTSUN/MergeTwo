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

namespace Metacore.MergeMansion
{
	[CreateAssetMenu(fileName = "BoardVisualEffectConfigLibrary", menuName = "ScriptableObjects/Libraries/BoardVisualEffectConfigLibrary", order = 10)]
	public class BoardVisualEffectConfigLibrary : ScriptableObject
	{
		[Serializable]
		public class BoardVisualEffectConfigEntry
		{
			public BoardVisualEffectHandler.BoardVisualEffectType EffectType;

			public AssetReferenceT<BoardVisualEffectConfig> ConfigRef;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass4_0
		{
			public BoardVisualEffectConfigLibrary _003C_003E4__this;

			public BoardVisualEffectHandler.BoardVisualEffectType effectType;

			public void _003CLoadConfig_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadConfig_003Ed__4 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<BoardVisualEffectConfig>> _003C_003Et__builder;

			public BoardVisualEffectConfigLibrary _003C_003E4__this;

			public BoardVisualEffectHandler.BoardVisualEffectType effectType;

			public AssetReferenceT<BoardVisualEffectConfig> configRef;

			public CancellationToken ct;

			public ISafeRollback rollback;

			[NonSerialized]
			public _003C_003Ec__DisplayClass4_0 _003C_003E8__1;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<BoardVisualEffectConfig>>.Awaiter _003C_003Eu__1;

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
		public List<BoardVisualEffectConfigEntry> configEntries;

		[NonSerialized]
		public readonly Dictionary<BoardVisualEffectHandler.BoardVisualEffectType, IDisposableAssetHandle<BoardVisualEffectConfig>> _loadedConfigs;

		public UniTask<UnityOption<BoardVisualEffectConfig>> LoadConfig(BoardVisualEffectHandler.BoardVisualEffectType effectType, ISafeRollback rollback, CancellationToken ct)
		{
			return default(UniTask<UnityOption<BoardVisualEffectConfig>>);
		}

		[AsyncStateMachine(typeof(_003CLoadConfig_003Ed__4))]
		public UniTask<UnityOption<BoardVisualEffectConfig>> LoadConfig(BoardVisualEffectHandler.BoardVisualEffectType effectType, AssetReferenceT<BoardVisualEffectConfig> configRef, ISafeRollback rollback, CancellationToken ct)
		{
			return default(UniTask<UnityOption<BoardVisualEffectConfig>>);
		}

		public UnityOption<BoardVisualEffectConfig> GetConfig(BoardVisualEffectHandler.BoardVisualEffectType effectType)
		{
			return default(UnityOption<BoardVisualEffectConfig>);
		}
	}
}
