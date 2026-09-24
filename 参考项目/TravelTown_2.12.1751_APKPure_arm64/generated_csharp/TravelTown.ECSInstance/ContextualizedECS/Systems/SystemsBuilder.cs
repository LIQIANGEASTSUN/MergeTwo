using System;
using System.Collections.Generic;

namespace ContextualizedECS.Systems
{
	public class SystemsBuilder
	{
		[NonSerialized]
		public readonly List<SystemInfo> _systemsRegistry;

		public void RegisterSystem(SystemInfo systemInfo)
		{
		}

		public SystemsManager Build()
		{
			return null;
		}
	}
}
