using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;

namespace Merge.AutoMerge
{
	public class AutoMergeAssetLoader
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoad_003Ed__4 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<AutoMergeAssetLibrary> _003C_003Et__builder;

			public AutoMergeAssetLoader _003C_003E4__this;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<AutoMergeAssetLibrary>>.Awaiter _003C_003Eu__1;

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

		public const string AutoMergeAssetLibraryPath = "AutoMerge/AssetLibrary";

		[NonSerialized]
		public Option<IDisposableAssetHandle<AutoMergeAssetLibrary>> _assetHandle;

		[NonSerialized]
		public readonly CancellationTokenSource _cancellationTokenSource;

		public AutoMergeAssetLoader(ISafeRollback rollback)
		{
		}

		[AsyncStateMachine(typeof(_003CLoad_003Ed__4))]
		public UniTask<AutoMergeAssetLibrary> Load()
		{
			return default(UniTask<AutoMergeAssetLibrary>);
		}

		public void UnLoadAssetLibrary()
		{
		}
	}
}
