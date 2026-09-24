using System;
using System.Collections.Generic;

namespace ContextualizedECS.Context
{
	public class TickArgs
	{
		[NonSerialized]
		public readonly Dictionary<Type, List<object>> _argumentsByType;

		public T FirstOrDefault<T>()
		{
			return default(T);
		}

		public T LastOrDefault<T>()
		{
			return default(T);
		}

		public bool TryGet<T>(out T value)
		{
			value = default(T);
			return false;
		}

		public bool ContainsEither<T1, T2>()
		{
			return false;
		}

		public IEnumerable<T> All<T>()
		{
			return null;
		}

		public bool ContainsArgType<T>()
		{
			return false;
		}

		public bool ContainsArgType(Type type)
		{
			return false;
		}

		public TickArgs AddArgument<T>(T argument)
		{
			return null;
		}

		public TickArgs AddArguments<T>(IEnumerable<T> arguments)
		{
			return null;
		}

		public bool ClearArgumentsOfType<T>()
		{
			return false;
		}

		public bool ClearArgumentsOfType(Type type)
		{
			return false;
		}

		public void ClearAll()
		{
		}

		public bool RemoveSpecificArgument<T>(T argument)
		{
			return false;
		}

		public bool HasArguments()
		{
			return false;
		}
	}
}
