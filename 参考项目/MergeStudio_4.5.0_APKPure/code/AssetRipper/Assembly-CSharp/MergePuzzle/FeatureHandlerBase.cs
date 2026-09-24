using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace MergePuzzle
{
	public abstract class FeatureHandlerBase : IFeature
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadAndGetAddressable_003Ed__29<T> : IAsyncStateMachine where T : ScriptableObject
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public string label;

			[NonSerialized]
			public UniTask<T>.Awaiter _003C_003Eu__1;

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

		[NonSerialized]
		public MasterFeatureHandler _masterFeatureHandler;

		public int ID { get; set; }

		public bool IsInitialized { get; set; }

		public bool SetReadyForInitialize { get; set; }

		public abstract bool IsActive { get; }

		public bool IsProcessing { get; set; }

		public abstract void Initialize();

		public virtual void Process()
		{
		}

		public virtual void RemoveCompletely()
		{
		}

		public virtual void Disable()
		{
		}

		public virtual void ProcessLevelUp()
		{
		}

		public void ActivateProcessing()
		{
		}

		public virtual void OnInitializeBoard()
		{
		}

		public void TryRequestAddressable()
		{
		}

		public abstract FeatureAddressableRequest GetAddressableRequest();

		public virtual string GetAddressableLabel()
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CLoadAndGetAddressable_003Ed__29<>))]
		public UniTask<T> LoadAndGetAddressable<T>(string label) where T : ScriptableObject
		{
			return default(UniTask<T>);
		}

		public void BindToParent(MasterFeatureHandler masterFeatureHandler)
		{
		}

		public virtual void OnTutorialFinished()
		{
		}

		public void SaveBoard()
		{
		}

		public MasterFeatureHandler GetMasterFeatureHandler()
		{
			return null;
		}

		public void InputEnable()
		{
		}

		public void InputDisable()
		{
		}

		public FeatureHandlerBase()
		{
		}
	}
}
