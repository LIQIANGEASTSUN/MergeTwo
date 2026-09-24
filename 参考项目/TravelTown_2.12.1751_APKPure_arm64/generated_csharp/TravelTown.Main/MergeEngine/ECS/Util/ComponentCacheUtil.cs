using System;
using System.Collections.Generic;

namespace MergeEngine.ECS.Util
{
	public static class ComponentCacheUtil
	{
		public static Dictionary<Type, List<Type>> _subtypeReflectionCache;

		public static List<Type> GetTypesToCacheAs(Type componentType)
		{
			return null;
		}
	}
}
