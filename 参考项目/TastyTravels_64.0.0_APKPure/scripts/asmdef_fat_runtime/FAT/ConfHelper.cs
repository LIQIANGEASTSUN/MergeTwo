using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using CenturyGame.AppUpdaterLib.Runtime;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Google.Protobuf;
using UnityEngine.Networking;

namespace FAT
{
	public static class ConfHelper
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAsyncLoadActiveResDataManifest_003Ed__22 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken token;

			[NonSerialized]
			public UniTask<string>.Awaiter _003C_003Eu__1;

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
		public struct _003CAsyncLoadConf_003Ed__13<T> : IAsyncStateMachine where T : IMessage, new()
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public string filePath;

			public Action<T> cb;

			[NonSerialized]
			public UnityWebRequest _003Creq_003E5__2;

			[NonSerialized]
			public UnityAsyncExtensions.UnityWebRequestAsyncOperationAwaiter _003C_003Eu__1;

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
		public struct _003CAsyncLoadConfBytes_003Ed__12 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public string filePath;

			public Action<byte[]> cb;

			[NonSerialized]
			public UnityWebRequest _003Creq_003E5__2;

			[NonSerialized]
			public UnityAsyncExtensions.UnityWebRequestAsyncOperationAwaiter _003C_003Eu__1;

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
		public struct _003CAsyncLoadText_003Ed__21 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<string> _003C_003Et__builder;

			public string path;

			public CancellationToken token;

			[NonSerialized]
			public string _003Curl_003E5__2;

			[NonSerialized]
			public UnityWebRequest _003Creq_003E5__3;

			[NonSerialized]
			public UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

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
		public struct _003CAsyncRegisterConf_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public string filePath;

			public Action<CodedInputStream> cb;

			[NonSerialized]
			public UnityWebRequest _003Creq_003E5__2;

			[NonSerialized]
			public UnityAsyncExtensions.UnityWebRequestAsyncOperationAwaiter _003C_003Eu__1;

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

		public static UpdateResMap s_updateResMap;

		public static StringBuilder sb;

		public static string prefix;

		public const string PlayerPrefs_LangKey = "lang";

		public static Dictionary<string, string> s_activeDataManifestFiles;

		public static IReadOnlyDictionary<string, string> ActiveDataManifestFiles => null;

		public static void RefreshResMap()
		{
		}

		public static bool CheckUpdateAndRefreshResMap()
		{
			return false;
		}

		public static void _EnsureResMap()
		{
		}

		public static string GetUpdatePath(string tablePath, out bool fileReadable, bool lowerName = false, string ext = ".bytes")
		{
			fileReadable = default(bool);
			return null;
		}

		public static string GetBuiltinPath(string tablePath, out bool fileReadable, bool isDataConf = false, string ext = ".bytes")
		{
			fileReadable = default(bool);
			return null;
		}

		public static string GetTableLoadPath(string tablePath, out bool fileReadable, bool lowerName = false, string ext = ".bytes")
		{
			fileReadable = default(bool);
			return null;
		}

		public static void _DebugPrintRes(UpdateResMap map)
		{
		}

		public static string FixFilePath(string name)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CAsyncRegisterConf_003Ed__11))]
		public static void AsyncRegisterConf(string filePath, Action<CodedInputStream> cb)
		{
		}

		[AsyncStateMachine(typeof(_003CAsyncLoadConfBytes_003Ed__12))]
		public static void AsyncLoadConfBytes(string filePath, Action<byte[]> cb)
		{
		}

		[AsyncStateMachine(typeof(_003CAsyncLoadConf_003Ed__13<>))]
		public static void AsyncLoadConf<T>(string filePath, Action<T> cb) where T : IMessage, new()
		{
		}

		public static string ConvertLangStrToConfName(string lang)
		{
			return null;
		}

		public static bool IsValidData(string dataKey)
		{
			return false;
		}

		public static string GetActiveResDataManifestPath(out bool fileReadable, out bool isLocal)
		{
			fileReadable = default(bool);
			isLocal = default(bool);
			return null;
		}

		[AsyncStateMachine(typeof(_003CAsyncLoadText_003Ed__21))]
		public static UniTask<string> AsyncLoadText(string path, CancellationToken token)
		{
			return default(UniTask<string>);
		}

		[AsyncStateMachine(typeof(_003CAsyncLoadActiveResDataManifest_003Ed__22))]
		public static UniTask AsyncLoadActiveResDataManifest(CancellationToken token)
		{
			return default(UniTask);
		}

		public static Dictionary<string, string> ParseResDataManifestToMap(string json)
		{
			return null;
		}
	}
}
