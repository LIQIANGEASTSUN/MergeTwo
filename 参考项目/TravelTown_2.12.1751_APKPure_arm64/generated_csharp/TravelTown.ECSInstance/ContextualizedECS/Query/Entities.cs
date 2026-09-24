namespace ContextualizedECS.Query
{
	public static class Entities
	{
		public delegate bool MatchDelegate<T>(Entity entity, out T result);

		public delegate bool ExcludeDelegate(Entity entity);

		public static bool Exclude<T1>(Entity entity) where T1 : struct, IComponent
		{
			return false;
		}

		public static bool Exclude<T1, T2>(Entity entity) where T1 : struct, IComponent where T2 : struct, IComponent
		{
			return false;
		}

		public static bool Exclude<T1, T2, T3>(Entity entity) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent
		{
			return false;
		}

		public static MatchDelegate<(Entity, T1)> With<T1>() where T1 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1>(Entity entity, out (Entity, T1) result) where T1 : struct, IComponent
		{
			result = default((Entity, T1));
			return false;
		}

		public static MatchDelegate<(Entity, T1, T2)> With<T1, T2>() where T1 : struct, IComponent where T2 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1, T2>(Entity entity, out (Entity, T1, T2) result) where T1 : struct, IComponent where T2 : struct, IComponent
		{
			result = default((Entity, T1, T2));
			return false;
		}

		public static MatchDelegate<(Entity, T1, T2, T3)> With<T1, T2, T3>() where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1, T2, T3>(Entity entity, out (Entity, T1, T2, T3) result) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent
		{
			result = default((Entity, T1, T2, T3));
			return false;
		}

		public static MatchDelegate<(Entity, T1, T2, T3, T4)> With<T1, T2, T3, T4>() where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1, T2, T3, T4>(Entity entity, out (Entity, T1, T2, T3, T4) result) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent
		{
			result = default((Entity, T1, T2, T3, T4));
			return false;
		}

		public static MatchDelegate<(Entity, T1, T2, T3, T4, T5)> With<T1, T2, T3, T4, T5>() where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1, T2, T3, T4, T5>(Entity entity, out (Entity, T1, T2, T3, T4, T5) result) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent
		{
			result = default((Entity, T1, T2, T3, T4, T5));
			return false;
		}

		public static MatchDelegate<(Entity, T1, T2, T3, T4, T5, T6)> With<T1, T2, T3, T4, T5, T6>() where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent where T6 : struct, IComponent
		{
			return null;
		}

		public static bool MatchMethod<T1, T2, T3, T4, T5, T6>(Entity entity, out (Entity, T1, T2, T3, T4, T5, T6) result) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent where T6 : struct, IComponent
		{
			result = default((Entity, T1, T2, T3, T4, T5, T6));
			return false;
		}
	}
}
