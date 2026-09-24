using System;
using System.Collections.Generic;
using ContextualizedECS.Context;

namespace ContextualizedECS.Systems
{
	public class SystemsManager
	{
		[NonSerialized]
		public readonly List<SystemInfo> _systems;

		public SystemsManager(List<SystemInfo> systems)
		{
		}

		public TickArgs Tick(TickArgs tickArgs, IEntitiesHolder entitiesHolder)
		{
			return null;
		}

		public void ExecuteSystems(TickContext context)
		{
		}
	}
}
