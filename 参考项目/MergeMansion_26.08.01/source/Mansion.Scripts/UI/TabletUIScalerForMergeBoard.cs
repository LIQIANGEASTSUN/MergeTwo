using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Metacore.MergeMansion.Common.Options;
using UI.Board;
using UnityEngine;

namespace UI
{
	[ExecuteInEditMode]
	public class TabletUIScalerForMergeBoard : TabletUIScaler
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAdjustBoardTaskPanelPositionEndOfFrame_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public TabletUIScalerForMergeBoard _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

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
		public SerializableOption<Canvas> _canvas;

		[SerializeField]
		public SerializableOption<RectTransform> _mergeBoardTransform;

		[NonSerialized]
		public bool _scalingEnabled;

		[NonSerialized]
		public Vector2Int _preferredMobileResolution;

		[NonSerialized]
		public Vector2Int _preferredTabletResolution;

		[NonSerialized]
		public Option<UnityBoardController> _boardController;

		[NonSerialized]
		public Option<BoardViewTaskHandler> _boardViewTaskHandler;

		[NonSerialized]
		public bool _shouldDisplayTasksOnBoard;

		public override void Start()
		{
		}

		public override void UpdateUIScale(float aspectRatio)
		{
		}

		[AsyncStateMachine(typeof(_003CAdjustBoardTaskPanelPositionEndOfFrame_003Ed__10))]
		public UniTask AdjustBoardTaskPanelPositionEndOfFrame(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void ResetResolutions()
		{
		}

		public void ScaleMobilePlatformOptions(float scale)
		{
		}

		public void ScaleTabletPlatformOptions(float scale)
		{
		}
	}
}
