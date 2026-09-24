using System;

namespace MergeEngine.ECS.Components
{
	[AttributeUsage(AttributeTargets.Class, Inherited = false, AllowMultiple = false)]
	public class CacheAsAttribute : Attribute
	{
		public Type[] Types { get; }

		public CacheAsAttribute(params Type[] types)
		{
		}
	}
}
