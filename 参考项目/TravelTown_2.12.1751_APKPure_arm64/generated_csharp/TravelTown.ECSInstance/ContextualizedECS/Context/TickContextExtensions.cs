namespace ContextualizedECS.Context
{
	public static class TickContextExtensions
	{
		public static void SaveChanges<T1>(this (Entity, T1) target) where T1 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2>(this (Entity, T1, T2) target) where T1 : struct, IComponent where T2 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3>(this (Entity, T1, T2, T3) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3, T4>(this (Entity, T1, T2, T3, T4) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3, T4, T5>(this (Entity, T1, T2, T3, T4, T5) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3, T4, T5, T6>(this (Entity, T1, T2, T3, T4, T5, T6) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent where T6 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3, T4, T5, T6, T7>(this (Entity, T1, T2, T3, T4, T5, T6, T7) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent where T6 : struct, IComponent where T7 : struct, IComponent
		{
		}

		public static void SaveChanges<T1, T2, T3, T4, T5, T6, T7, T8>(this (Entity, T1, T2, T3, T4, T5, T6, T7, T8) target) where T1 : struct, IComponent where T2 : struct, IComponent where T3 : struct, IComponent where T4 : struct, IComponent where T5 : struct, IComponent where T6 : struct, IComponent where T7 : struct, IComponent where T8 : struct, IComponent
		{
		}

		public static void SaveChanges<T>(this T comp, Entity entity) where T : struct, IComponent
		{
		}

		public static void AddTempComponent<T>(this TickContext context, Entity entity, T component) where T : struct, IComponent
		{
		}
	}
}
