using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Metaplay.Core.Activables
{
	[MetaSerializable]
	[MetaReservedMembers(100, 200)]
	public abstract class MetaActivableSet<TId, TInfo, TActivableState> : IMetaActivableSet<TId, TInfo, TActivableState>, IMetaActivableSet<TId>, IMetaActivableSet where TInfo : IMetaActivableInfo<TId> where TActivableState : MetaActivableState
	{
		[CompilerGenerated]
		public sealed class _003CGetActiveStates_003Ed__28 : IEnumerable<TActivableState>, IEnumerable, IEnumerator<TActivableState>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public TActivableState _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MetaActivableSet<TId, TInfo, TActivableState> _003C_003E4__this;

			[NonSerialized]
			public IPlayerModelBase player;

			public IPlayerModelBase _003C_003E3__player;

			[NonSerialized]
			public MetaDictionary<TId, TActivableState>.ValueCollection.ValueEnumerator _003C_003E7__wrap1;

			TActivableState IEnumerator<TActivableState>.Current
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
			public _003CGetActiveStates_003Ed__28(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<TActivableState> IEnumerable<TActivableState>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[MetaMember(100, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<TId, TActivableState> _activableStates;

		[MetaMember(101, MetaMemberFlags.None)]
		[ServerOnly]
		[NonSerialized]
		public MetaDictionary<TId, TActivableState> _erroneousActivableStates;

		[MetaOnDeserialized]
		public void OrganizeActivableStatesByValidityOnDeserialization()
		{
		}

		public bool CanStartActivation(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public void ForceStartActivation(TInfo info, IPlayerModelBase player)
		{
		}

		public bool TryStartActivation(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public void TryStartActivationForEach(IEnumerable<TInfo> infos, IPlayerModelBase player)
		{
		}

		public void TryStartActivationForEach<T>(MetaDictionary<T, TInfo>.ValueCollection infos, IPlayerModelBase player)
		{
		}

		public bool IsInPreview(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public bool IsActive(TId id, IPlayerModelBase player)
		{
			return false;
		}

		public bool IsActive(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public bool IsInReview(TId id, IPlayerModelBase player)
		{
			return false;
		}

		public bool IsInReview(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public bool TryConsume(TId id, IPlayerModelBase player)
		{
			return false;
		}

		public bool TryConsume(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public void ForceEndActivation(TId id, IPlayerModelBase player)
		{
		}

		public void ForceEndActivation(TInfo info, IPlayerModelBase player)
		{
		}

		public int TryAdjustEachActivation(IPlayerModelBase player)
		{
			return 0;
		}

		public bool TryFinalize(TId id, IPlayerModelBase player)
		{
			return false;
		}

		public bool TryFinalize(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public void TryFinalizeEach(IEnumerable<TId> ids, IPlayerModelBase player)
		{
		}

		public void TryFinalizeEach(IEnumerable<TInfo> infos, IPlayerModelBase player)
		{
		}

		public void TryFinalizeEach<T>(MetaDictionary<T, TInfo>.ValueCollection infos, IPlayerModelBase player)
		{
		}

		public bool CanBeFinalized(TId id, IPlayerModelBase player)
		{
			return false;
		}

		public bool CanBeFinalized(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public TActivableState TryGetState(TId id)
		{
			return null;
		}

		public TActivableState TryGetState(TInfo info)
		{
			return null;
		}

		public MetaDictionary<TId, TActivableState>.ValueCollection GetStates()
		{
			return default(MetaDictionary<TId, TActivableState>.ValueCollection);
		}

		[IteratorStateMachine(typeof(MetaActivableSet<, , >._003CGetActiveStates_003Ed__28))]
		public IEnumerable<TActivableState> GetActiveStates(IPlayerModelBase player)
		{
			return null;
		}

		public bool TryGetVisibleStatus(TInfo info, IPlayerModelBase player, out MetaActivableVisibleStatus visibleStatus)
		{
			visibleStatus = null;
			return false;
		}

		public bool TryGetDebugVisibleStatus(TActivableState activableState, IPlayerModelBase player, MetaActivableState.DebugPhase phase, out MetaActivableVisibleStatus visibleStatus)
		{
			visibleStatus = null;
			return false;
		}

		public void DebugForceSetPhase(TInfo info, IPlayerModelBase player, MetaActivableState.DebugPhase? phaseMaybe)
		{
		}

		public TActivableState EnsureHasState(TInfo info, IPlayerModelBase player)
		{
			return null;
		}

		bool IMetaActivableSet.CanStartActivation(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		void IMetaActivableSet.ForceStartActivation(IMetaActivableInfo info, IPlayerModelBase player)
		{
		}

		bool IMetaActivableSet.TryStartActivation(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		bool IMetaActivableSet.IsInPreview(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		bool IMetaActivableSet.IsActive(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		bool IMetaActivableSet.IsInReview(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		bool IMetaActivableSet.TryConsume(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		void IMetaActivableSet.ForceEndActivation(IMetaActivableInfo info, IPlayerModelBase player)
		{
		}

		bool IMetaActivableSet.TryFinalize(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		bool IMetaActivableSet.CanBeFinalized(IMetaActivableInfo info, IPlayerModelBase player)
		{
			return false;
		}

		MetaActivableState IMetaActivableSet.TryGetState(IMetaActivableInfo info)
		{
			return null;
		}

		bool IMetaActivableSet.TryGetVisibleStatus(IMetaActivableInfo info, IPlayerModelBase player, out MetaActivableVisibleStatus visibleStatus)
		{
			visibleStatus = null;
			return false;
		}

		void IMetaActivableSet.DebugForceSetPhase(IMetaActivableInfo info, IPlayerModelBase player, MetaActivableState.DebugPhase? phase)
		{
		}

		MetaActivableState IMetaActivableSet<TId>.TryGetState(TId id)
		{
			return null;
		}

		public abstract TActivableState CreateActivableState(TInfo info, IPlayerModelBase player);

		public virtual bool CustomCanStartActivation(TInfo info, IPlayerModelBase player)
		{
			return false;
		}

		public virtual void OnJustBeforeStartActivation(TInfo info, IPlayerModelBase player)
		{
		}

		public virtual void OnStartedActivation(TInfo info, IPlayerModelBase player)
		{
		}

		public virtual void OnFinalizedActivation(TId id, IPlayerModelBase player)
		{
		}

		public int ClearErroneousActivableStates()
		{
			return 0;
		}

		public int ErroneousActivableStateCount()
		{
			return 0;
		}

		public MetaActivableSet()
		{
		}
	}
}
