using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using FAT.Merge;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	[RequireComponent(typeof(MBBoardView))]
	public class MBBoardViewMoveComp : MonoBehaviour
	{
		public enum MoveDirection
		{
			Up = 0,
			Down = 1,
			Left = 2,
			Right = 3
		}

		[CompilerGenerated]
		public sealed class _003CCoBoardMove_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardViewMoveComp _003C_003E4__this;

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
			public _003CCoBoardMove_003Ed__52(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CCoRowMoveEffects_003Ed__60 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardViewMoveComp _003C_003E4__this;

			public float totalDuration;

			[NonSerialized]
			public float _003CsingleRowTime_003E5__2;

			[NonSerialized]
			public int _003Ci_003E5__3;

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
			public _003CCoRowMoveEffects_003Ed__60(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CCoStartMove_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardViewMoveComp _003C_003E4__this;

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
			public _003CCoStartMove_003Ed__51(int _003C_003E1__state)
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

		[Header("移动配置")]
		[SerializeField]
		public AnimationCurve moveUp;

		[SerializeField]
		public float moveTime;

		[SerializeField]
		public float itemFlyDelayRatio;

		[SerializeField]
		public MoveDirection moveDirection;

		[Header("振动效果配置")]
		[SerializeField]
		public bool enableShakeEffect;

		[SerializeField]
		public float shakeAmplitude;

		[SerializeField]
		public float shakeFrequency;

		[SerializeField]
		public AnimationCurve shakeCurve;

		[SerializeField]
		public RectMask2D mask;

		[SerializeField]
		public UITilling tilling;

		[SerializeField]
		public RectTransform scroll;

		[SerializeField]
		public Transform tempRoot;

		[SerializeField]
		public RectTransform shakeMask;

		[SerializeField]
		public string moveSoundOne;

		[SerializeField]
		public string moveSoundTwo;

		[SerializeField]
		public string moveSoundThree;

		[SerializeField]
		public string moveSoundFour;

		[NonSerialized]
		public GameObject tempIconPrefab;

		[NonSerialized]
		public MBBoardView _boardView;

		[NonSerialized]
		public List<List<MBBoardViewMoveTempIcon>> _tempIconsByRow;

		[NonSerialized]
		public bool _isPlayingMove;

		[NonSerialized]
		public int _accumulatedMoveCount;

		[NonSerialized]
		public List<List<Item>> _accumulatedItemRows;

		[NonSerialized]
		public Coroutine _moveCoroutine;

		[NonSerialized]
		public bool _isShaking;

		[NonSerialized]
		public Vector3 _originalScrollPosition;

		[NonSerialized]
		public float _shakeStartTime;

		[NonSerialized]
		public bool _hasHalfTileOffset;

		[NonSerialized]
		public bool _pendingHalfTileOffset;

		public Action OnLastRowFlyComplete;

		public Action OnMoveEnd;

		public Action OnMoveStart;

		public Action OnRowMoveStart;

		public UIBase uiBase { get; set; }

		public bool IsPlayingMove => false;

		public void Update()
		{
		}

		public void Awake()
		{
		}

		public void AccumulateCollectIcons(List<Item> collectItemList)
		{
		}

		public void Execute()
		{
		}

		public void ManualEndMoveUpProcess()
		{
		}

		public void ResetToInitialState()
		{
		}

		public void StartMoveUpProcess()
		{
		}

		public void EndMoveUpProcess()
		{
		}

		public void CreateTempIconPrefab()
		{
		}

		public void InitializeMoveState(int moveCount)
		{
		}

		public void ExecuteMoveUp(int upRowCount)
		{
		}

		[IteratorStateMachine(typeof(_003CCoStartMove_003Ed__51))]
		public IEnumerator CoStartMove()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoBoardMove_003Ed__52))]
		public IEnumerator CoBoardMove()
		{
			return null;
		}

		public Vector3 GetInitialOffset(float moveDis)
		{
			return default(Vector3);
		}

		public Vector3 GetMoveVector(float moveDis)
		{
			return default(Vector3);
		}

		public Vector3 GetTriggerDistanceVector(float distance)
		{
			return default(Vector3);
		}

		public bool IsVerticalMoveDirection()
		{
			return false;
		}

		public bool GetMoveResultHalfOffset(int moveRowCount)
		{
			return false;
		}

		public Vector2 GetTillingOffset(bool hasHalfOffset)
		{
			return default(Vector2);
		}

		public void PlaySingleRowShake()
		{
		}

		[IteratorStateMachine(typeof(_003CCoRowMoveEffects_003Ed__60))]
		public IEnumerator CoRowMoveEffects(float totalDuration)
		{
			return null;
		}

		public void PlayDebugShakeEffect(float duration)
		{
		}
	}
}
