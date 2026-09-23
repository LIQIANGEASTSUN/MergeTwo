using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializableDerived(1)]
	public class ActivationCycleData : IActivationCycleData
	{
		[CompilerGenerated]
		public sealed class _003CGetAllLists_003Ed__28 : IEnumerable<(IList, string)>, IEnumerable, IEnumerator<(IList, string)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IList list, string name) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ActivationCycleData _003C_003E4__this;

			(IList, string) IEnumerator<(IList, string)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((IList, string));
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
			public _003CGetAllLists_003Ed__28(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<(IList, string)> IEnumerable<(IList, string)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public List<MetaDuration> DelaysBetweenCycles { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<F64> TimerSkipMultiplier { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<int> ActivationAmountInCycle { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<int> HowManyAreGeneratedInCycle { get; set; }

		[IgnoreDataMember]
		public int CycleCount => 0;

		[IgnoreDataMember]
		public IReadOnlyList<MetaDuration> GetDelaysBetweenCycles => null;

		[IgnoreDataMember]
		public IReadOnlyList<F64> GetTimerSkipMultiplier => null;

		[IgnoreDataMember]
		public IReadOnlyList<int> GetActivationAmountInCycle => null;

		[IgnoreDataMember]
		public IReadOnlyList<int> GetHowManyAreGeneratedInCycle => null;

		public ActivationCycleData()
		{
		}

		public ActivationCycleData(List<MetaDuration> delaysBetweenCycles, List<F64> timerSkipMultiplier, List<int> activationAmountInCycle, List<int> howManyAreGeneratedInCycle)
		{
		}

		[IteratorStateMachine(typeof(_003CGetAllLists_003Ed__28))]
		public IEnumerable<(IList, string)> GetAllLists()
		{
			return null;
		}

		public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey)
		{
		}
	}
}
