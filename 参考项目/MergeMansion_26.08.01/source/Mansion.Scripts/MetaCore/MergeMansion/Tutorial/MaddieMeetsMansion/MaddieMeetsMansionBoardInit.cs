using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player;
using GameLogic.Player.Board;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.UI.Board;
using UnityEngine;

namespace Metacore.MergeMansion.Tutorial.MaddieMeetsMansion
{
	public class MaddieMeetsMansionBoardInit : BoardCustomInit
	{
		public enum TweenStyle
		{
			In = 0,
			Out = 1
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CHideBoardAfter_003Ed__22 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public float duration;

			public CancellationToken ct;

			public MaddieMeetsMansionBoardInit _003C_003E4__this;

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
		public MergeChainProgressView _progressView;

		[SerializeField]
		public RectTransform _board;

		[SerializeField]
		public float _tweenOffset;

		[SerializeField]
		public float _tweenDuration;

		[SerializeField]
		public float _itemTweenDuration;

		[SerializeField]
		public float _itemTweenInitialDelay;

		[SerializeField]
		public float _itemTweenBetweenDelay;

		[SerializeField]
		public AnimationCurve _itemTweenCurve;

		[NonSerialized]
		public Option<Vector2> _originalBoardAnchoredPositionOption;

		[NonSerialized]
		public Option<CanvasGroup> _addedCanvasGroupOption;

		[NonSerialized]
		public IBoardController _boardController;

		public void OnDisable()
		{
		}

		public override void Init(IPlayer player, IBoard board, IBoardController boardController)
		{
		}

		public void Hide()
		{
		}

		public void DestroyAddedCanvasGroupIfExists()
		{
		}

		public void Tween(TweenStyle style)
		{
		}

		public void TweenBoardPosition(TweenStyle style)
		{
		}

		public void TweenItemParentPosition(TweenStyle style)
		{
		}

		public void TweenAlpha(TweenStyle style)
		{
		}

		public static void TweenRectTransformOffsetMinMax(RectTransform rectTransform, Vector2 from, Vector2 to, float duration)
		{
		}

		public static void TweenCanvasGroupAlpha(CanvasGroup canvasGroup, float from, float to, float duration)
		{
		}

		[AsyncStateMachine(typeof(_003CHideBoardAfter_003Ed__22))]
		public UniTaskVoid HideBoardAfter(float duration, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public void TweenItems()
		{
		}
	}
}
