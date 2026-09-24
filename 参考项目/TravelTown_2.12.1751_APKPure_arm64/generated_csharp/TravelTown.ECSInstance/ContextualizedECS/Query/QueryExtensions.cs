using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ContextualizedECS.Context;

namespace ContextualizedECS.Query
{
	public static class QueryExtensions
	{
		public struct QueryBuilder<T1>
		{
			[CompilerGenerated]
			public sealed class _003CAll_003Ed__7 : IEnumerable<T1>, IEnumerable, IEnumerator<T1>, IEnumerator, IDisposable
			{
				[NonSerialized]
				public int _003C_003E1__state;

				[NonSerialized]
				public T1 _003C_003E2__current;

				[NonSerialized]
				public int _003C_003El__initialThreadId;

				public QueryBuilder<T1> _003C_003E4__this;

				public QueryBuilder<T1> _003C_003E3___003C_003E4__this;

				[NonSerialized]
				public IEnumerator<Entity> _003C_003E7__wrap1;

				T1 IEnumerator<T1>.Current
				{
					[DebuggerHidden]
					get
					{
						return default(T1);
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
				public _003CAll_003Ed__7(int _003C_003E1__state)
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
				IEnumerator<T1> IEnumerable<T1>.GetEnumerator()
				{
					return null;
				}

				[DebuggerHidden]
				IEnumerator IEnumerable.GetEnumerator()
				{
					return null;
				}
			}

			[CompilerGenerated]
			public sealed class _003CAllPairs_003Ed__8 : IEnumerable<(T1, T1)>, IEnumerable, IEnumerator<(T1, T1)>, IEnumerator, IDisposable
			{
				[NonSerialized]
				public int _003C_003E1__state;

				[NonSerialized]
				public (T1, T1) _003C_003E2__current;

				[NonSerialized]
				public int _003C_003El__initialThreadId;

				public QueryBuilder<T1> _003C_003E4__this;

				public QueryBuilder<T1> _003C_003E3___003C_003E4__this;

				[NonSerialized]
				public Entity[] _003CsourceArray_003E5__2;

				[NonSerialized]
				public int _003Cindex_003E5__3;

				[NonSerialized]
				public T1 _003Cresult1_003E5__4;

				[NonSerialized]
				public int _003CotherIndex_003E5__5;

				(T1, T1) IEnumerator<(T1, T1)>.Current
				{
					[DebuggerHidden]
					get
					{
						return default((T1, T1));
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
				public _003CAllPairs_003Ed__8(int _003C_003E1__state)
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
				IEnumerator<(T1, T1)> IEnumerable<(T1, T1)>.GetEnumerator()
				{
					return null;
				}

				[DebuggerHidden]
				IEnumerator IEnumerable.GetEnumerator()
				{
					return null;
				}
			}

			[NonSerialized]
			public IEnumerable<Entity> _source;

			[NonSerialized]
			public Func<T1, bool> _predicate;

			[NonSerialized]
			public readonly Entities.MatchDelegate<T1> _matcher;

			[NonSerialized]
			public readonly Entities.ExcludeDelegate _exclude;

			public QueryBuilder(Entities.MatchDelegate<T1> matcher, Entities.ExcludeDelegate exclude)
			{
				_source = null;
				_predicate = null;
				_matcher = null;
				_exclude = null;
			}

			public QueryBuilder<T1> Where(Func<T1, bool> predicate)
			{
				return default(QueryBuilder<T1>);
			}

			public QueryBuilder<T1> From(IEnumerable<Entity> source)
			{
				return default(QueryBuilder<T1>);
			}

			[IteratorStateMachine(typeof(QueryBuilder<>._003CAll_003Ed__7))]
			public IEnumerable<T1> All()
			{
				return null;
			}

			[IteratorStateMachine(typeof(QueryBuilder<>._003CAllPairs_003Ed__8))]
			public IEnumerable<(T1, T1)> AllPairs()
			{
				return null;
			}

			public bool One(out T1 result)
			{
				result = default(T1);
				return false;
			}

			public bool CheckPredicate(T1 result)
			{
				return false;
			}
		}

		public static QueryBuilder<T> Query<T>(this TickContext context, Entities.MatchDelegate<T> match, Entities.ExcludeDelegate exclude = null)
		{
			return default(QueryBuilder<T>);
		}
	}
}
