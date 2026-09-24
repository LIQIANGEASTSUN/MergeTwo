using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;

namespace Paxie
{
	public static class DataSaveWrapper
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CLoadDataFromLocalFileAsync_003Ed__14<T> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public string path;

			[NonSerialized]
			public TaskAwaiter<string> _003C_003Eu__1;

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
		public struct _003CSaveDataToLocalFileAsync_003Ed__13 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public string path;

			public object obj;

			[NonSerialized]
			public TaskAwaiter _003C_003Eu__1;

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

		public static string BoardEntityLocalSaveName;

		public const float PrefsSafetySaveInterval = 0.5f;

		public static float PrefsLastSaveTime;

		public static void DeleteAll()
		{
		}

		public static void DeleteKey(string key)
		{
		}

		public static void SavePrefs(bool forceSave)
		{
		}

		public static void SetStringAsync(string key, string val, bool writeDisc = true)
		{
		}

		public static bool HasKey(string key)
		{
			return false;
		}

		public static void SetIntAsync(string key, int val, bool writeDisc = true)
		{
		}

		public static void SetFloatAsync(string key, float val, bool writeDisc = true)
		{
		}

		public static string GetString(string key, string defaultVal = "")
		{
			return null;
		}

		public static int GetInt(string key, int defaultVal = 0)
		{
			return 0;
		}

		public static float GetFloat(string key, float defaultVal = 0f)
		{
			return 0f;
		}

		[AsyncStateMachine(typeof(_003CSaveDataToLocalFileAsync_003Ed__13))]
		public static UniTask SaveDataToLocalFileAsync(string path, object obj)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CLoadDataFromLocalFileAsync_003Ed__14<>))]
		public static UniTask<T> LoadDataFromLocalFileAsync<T>(string path)
		{
			return default(UniTask<T>);
		}
	}
}
