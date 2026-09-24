using System.Collections.Generic;

namespace ContextualizedECS.Systems
{
	public static class SystemInfoExtensions
	{
		public static SystemInfo Register<T>(this SystemsBuilder builder, T system) where T : ISystem
		{
			return null;
		}

		public static SystemInfo After<T>(this SystemInfo system) where T : ISystem
		{
			return null;
		}

		public static int ResolveAfter<T>(IList<SystemInfo> systems) where T : ISystem
		{
			return 0;
		}

		public static SystemInfo Before<T>(this SystemInfo system) where T : ISystem
		{
			return null;
		}

		public static int ResolveBefore<T>(IList<SystemInfo> systems) where T : ISystem
		{
			return 0;
		}

		public static SystemInfo Last(this SystemInfo system)
		{
			return null;
		}

		public static int ResolveLast(IList<SystemInfo> systems)
		{
			return 0;
		}

		public static SystemInfo First(this SystemInfo system)
		{
			return null;
		}

		public static int ResolveFirst(IList<SystemInfo> systems)
		{
			return 0;
		}
	}
}
