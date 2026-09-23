using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.General.Physics;
using UnityEngine;

namespace UI
{
	public class MysteryMachinePhysics : MonoBehaviour
	{
		public struct MergeData
		{
			public MysteryMachineMergeData Data;

			public MysteryMachinePhysicsItem SourcePhysicsItem;

			public MysteryMachinePhysicsItem TargetPhysicsItem;

			public bool DestroyItemOnMerge;

			public MergeData(MysteryMachineMergeData data, MysteryMachinePhysicsItem sourcePhysicsItem, MysteryMachinePhysicsItem targetPhysicsItem, bool destroyItemOnMerge)
			{
				Data = default(MysteryMachineMergeData);
				SourcePhysicsItem = null;
				TargetPhysicsItem = null;
				DestroyItemOnMerge = false;
			}
		}

		[CompilerGenerated]
		public sealed class _003CHandleMerge_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MysteryMachineMergeData mergeData;

			public bool isNewChain;

			public MysteryMachinePhysics _003C_003E4__this;

			public bool isNewItem;

			public float mergeDuration;

			public Action<MysteryMachineMergeData> onComplete;

			[NonSerialized]
			public MysteryMachinePhysicsItem _003CphysicsItemA_003E5__2;

			[NonSerialized]
			public MysteryMachinePhysicsItem _003CphysicsItemB_003E5__3;

			[NonSerialized]
			public IMysteryMachineItem _003Cresult_003E5__4;

			[NonSerialized]
			public bool _003CdestroyItemOnMerge_003E5__5;

			[NonSerialized]
			public MysteryMachinePhysicsItem _003CphysicsItemToMove_003E5__6;

			[NonSerialized]
			public Vector3 _003CoriginalPosition_003E5__7;

			[NonSerialized]
			public MysteryMachinePhysicsItem _003CphysicsItemToStay_003E5__8;

			[NonSerialized]
			public float _003CmergeTimer_003E5__9;

			[NonSerialized]
			public WaitForFixedUpdate _003Cwaiter_003E5__10;

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
			public _003CHandleMerge_003Ed__30(int _003C_003E1__state)
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
		public MysteryMachinePhysicsItem physicsItemPrefab;

		[SerializeField]
		public MysteryMachinePhysicsContainer physicsContainer;

		[SerializeField]
		public float initialForce;

		[SerializeField]
		public float initialForceMaxAngle;

		[SerializeField]
		public AnimationCurve mergeCurve;

		[SerializeField]
		public MysteryMachineEventEffectView effectView;

		[NonSerialized]
		public readonly List<MysteryMachinePhysicsItem> physicsItems;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public Coroutine handleMergeRoutine;

		[NonSerialized]
		public MergeData mergeInProgressData;

		[NonSerialized]
		public Vector3 previousMergeResultPosition;

		[NonSerialized]
		public Physics2DHandle _physicsHandle;

		public List<MysteryMachinePhysicsItem> PhysicsItems => null;

		public bool MergeInProgress => false;

		public MergeData MergeInProgressData => default(MergeData);

		public MysteryMachineEventEffectView EffectView => null;

		public Transform ItemParent => null;

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void Initialize(PlayerModel playerModel, MysteryMachine machine, Vector2 containerDimensions, Vector2 uiDimensions, Vector2 spawnPointPositionRelative)
		{
		}

		public void InstantiatePhysicsItem(IMysteryMachineItem item)
		{
		}

		public void DestroyPhysicsItem(int i)
		{
		}

		public void StartMerge(MysteryMachineMergeData mergeData, float mergeDuration, bool isNewChain, bool isNewItem, Action<MysteryMachineMergeData> onComplete)
		{
		}

		public void StopMergeIfInProgress()
		{
		}

		[IteratorStateMachine(typeof(_003CHandleMerge_003Ed__30))]
		public IEnumerator HandleMerge(MysteryMachineMergeData mergeData, float mergeDuration, bool isNewChain, bool isNewItem, Action<MysteryMachineMergeData> onComplete)
		{
			return null;
		}

		public void AdjustItemForNewChainMerge(int originalIndex)
		{
		}

		public void AdjustItemForProximityMerge(int sourceIndex, Vector3 position)
		{
		}

		public void AdjustItemForProximityMerge(int sourceIndex, int originalTargetIndex)
		{
		}

		public Vector2 GetRandomInitialForce()
		{
			return default(Vector2);
		}

		public bool ShouldDestroyTargetItemOnMerge(IMysteryMachineItem mergeResult)
		{
			return false;
		}
	}
}
