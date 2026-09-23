using System;
using System.Collections.Generic;

namespace MergeEngine.ECS.Util
{
	public static class ComponentSerializationUtil
	{
		public static T TryDeserialize<T>(Dictionary<string, string> entity, string key, T defaultValue, Func<string, T> convertFunction = null)
		{
			return default(T);
		}
	}
}
