using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using IFix.Core;
using UnityEngine;
using UnityEngine.EventSystems;

namespace FAT
{
	public class MBBoardAreaAdapter : UIBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_DeferredBoardRecalc_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public BoardViewManager bvm;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003C_DeferredBoardRecalc_003Ed__28(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		public float topBottomAnchorRef;

		[SerializeField]
		public float sizeStatusBar;

		[SerializeField]
		public float boardOffsetPercent;

		[SerializeField]
		public float boardEdgeSpace;

		[SerializeField]
		public float rectOrderBottomExt;

		[SerializeField]
		public float rectBoardTopExt;

		[SerializeField]
		[Range(1f, 10f)]
		public float maxScaleLimitForOrder;

		[SerializeField]
		[Range(1f, 10f)]
		public float maxScaleLimitForBoard;

		[SerializeField]
		public RectTransform bgRoot;

		[SerializeField]
		public RectTransform bgTop;

		[SerializeField]
		public RectTransform bgBottom;

		[SerializeField]
		public RectTransform rectOrder;

		[SerializeField]
		public RectTransform rectBoard;

		[SerializeField]
		public RectTransform rectBottom;

		[SerializeField]
		public RectTransform rectMoveRoot;

		[NonSerialized]
		public Coroutine _deferredRecalcCoroutine;

		public override void OnRectTransformDimensionsChange()
		{
		}

		public override void OnEnable()
		{
		}

		public override void OnDisable()
		{
		}

		public void ForceRefresh()
		{
		}

		[IDTag(1)]
		public void _RefreshLayout()
		{
		}

		public void _OnScreenStateChanged(ScreenState state)
		{
		}

		[IDTag(0)]
		public void _RefreshLayout(Rect safeArea, int screenWidth, int screenHeight)
		{
		}

		public void _ClampScale_Order(ref float scale)
		{
		}

		public void _ClampScale_Board(ref float scale)
		{
		}

		public void _AdjustBgHeightScale(RectTransform root)
		{
		}

		public Vector3 JumpCardAlbumIconPos()
		{
			return default(Vector3);
		}

		public void _ScheduleDeferredBoardRecalc(BoardViewManager bvm)
		{
		}

		[IteratorStateMachine(typeof(_003C_DeferredBoardRecalc_003Ed__28))]
		public IEnumerator _DeferredBoardRecalc(BoardViewManager bvm)
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_OnRectTransformDimensionsChange()
		{
		}

		public void _003C_003EiFixBaseProxy_OnEnable()
		{
		}

		public void _003C_003EiFixBaseProxy_OnDisable()
		{
		}
	}
}
