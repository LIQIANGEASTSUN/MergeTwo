using System;

namespace Metaplay.Core
{
	public class CopyableEvent<DerivedEventType> where DerivedEventType : CopyableEvent<DerivedEventType>, new()
	{
		[NonSerialized]
		public Action _invoker;

		public void Invoke()
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType> self, Action action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1> where DerivedEventType : CopyableEvent<DerivedEventType, T1>, new()
	{
		[NonSerialized]
		public Action<T1> _invoker;

		public void Invoke(T1 arg1)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1> self, Action<T1> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2>, new()
	{
		[NonSerialized]
		public Action<T1, T2> _invoker;

		public void Invoke(T1 arg1, T2 arg2)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2> self, Action<T1, T2> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2, T3> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2, T3>, new()
	{
		[NonSerialized]
		public Action<T1, T2, T3> _invoker;

		public void Invoke(T1 arg1, T2 arg2, T3 arg3)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2, T3> self, Action<T1, T2, T3> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2, T3, T4> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2, T3, T4>, new()
	{
		[NonSerialized]
		public Action<T1, T2, T3, T4> _invoker;

		public void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2, T3, T4> self, Action<T1, T2, T3, T4> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5>, new()
	{
		[NonSerialized]
		public Action<T1, T2, T3, T4, T5> _invoker;

		public void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5> self, Action<T1, T2, T3, T4, T5> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6>, new()
	{
		[NonSerialized]
		public Action<T1, T2, T3, T4, T5, T6> _invoker;

		public void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6> self, Action<T1, T2, T3, T4, T5, T6> action)
		{
			return null;
		}
	}
	public class CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6, T7> where DerivedEventType : CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6, T7>, new()
	{
		[NonSerialized]
		public Action<T1, T2, T3, T4, T5, T6, T7> _invoker;

		public void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
		{
		}

		public static DerivedEventType operator +(CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6, T7> self, Action<T1, T2, T3, T4, T5, T6, T7> action)
		{
			return null;
		}
	}
}
