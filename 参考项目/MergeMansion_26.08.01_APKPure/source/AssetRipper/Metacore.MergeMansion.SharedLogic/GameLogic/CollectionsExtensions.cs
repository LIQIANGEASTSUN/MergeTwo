using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic
{
	public static class CollectionsExtensions
	{
		[CompilerGenerated]
		public sealed class _003CAsEnumerable_003Ed__3<TValue> : IEnumerable<TValue>, IEnumerable, IEnumerator<TValue>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public TValue _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public TValue value;

			public TValue _003C_003E3__value;

			TValue IEnumerator<TValue>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(TValue);
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
			public _003CAsEnumerable_003Ed__3(int _003C_003E1__state)
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
			IEnumerator<TValue> IEnumerable<TValue>.GetEnumerator()
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
		public sealed class _003CCommonKeys_003Ed__1<TKey, TValue, TOtherValue> : IEnumerable<TKey>, IEnumerable, IEnumerator<TKey>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public TKey _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IDictionary<TKey, TValue> firstDict;

			public IDictionary<TKey, TValue> _003C_003E3__firstDict;

			[NonSerialized]
			public IDictionary<TKey, TOtherValue> secondDict;

			public IDictionary<TKey, TOtherValue> _003C_003E3__secondDict;

			[NonSerialized]
			public IEnumerator<TKey> _003C_003E7__wrap1;

			TKey IEnumerator<TKey>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(TKey);
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
			public _003CCommonKeys_003Ed__1(int _003C_003E1__state)
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
			IEnumerator<TKey> IEnumerable<TKey>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static void IncrementKey<TKey>(this IDictionary<TKey, int> counters, TKey entry, int increment = 1)
		{
		}

		[IteratorStateMachine(typeof(_003CCommonKeys_003Ed__1<, , >))]
		public static IEnumerable<TKey> CommonKeys<TKey, TValue, TOtherValue>(this IDictionary<TKey, TValue> firstDict, IDictionary<TKey, TOtherValue> secondDict)
		{
			return null;
		}

		public static TValue ElementAtOrDefault<TValue>(this IEnumerable<TValue> collection, int index)
		{
			return default(TValue);
		}

		[IteratorStateMachine(typeof(_003CAsEnumerable_003Ed__3<>))]
		public static IEnumerable<TValue> AsEnumerable<TValue>(this TValue value)
		{
			return null;
		}

		public static IEnumerable<TInfo> UnwrapMetaRefs<TInfo>(this List<MetaRef<TInfo>> metaRefs) where TInfo : class, IGameConfigData
		{
			return null;
		}

		public static Dictionary<TKey, TValue> ShallowClone<TKey, TValue>(this Dictionary<TKey, TValue> dictionary)
		{
			return null;
		}

		public static int? FindIndex<T>(this IEnumerable<T> collection, Func<T, bool> matcher)
		{
			return null;
		}

		public static bool ContainsValue<TKey, TValue>(this IReadOnlyDictionary<TKey, TValue> dictionary, TValue value)
		{
			return false;
		}

		public static List<T> NullifyIfEmpty<T>(this List<T> list)
		{
			return null;
		}

		public static bool ContainsReference<T>(this Span<T> span, T value) where T : class
		{
			return false;
		}

		public static int NullableCompare<T>(T a, T b) where T : IComparable<T>
		{
			return 0;
		}

		public static bool ContainsValue<T>(this T[] array, T value, int length)
		{
			return false;
		}
	}
}
