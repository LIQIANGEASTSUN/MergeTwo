using System;
using System.Collections.Generic;

namespace ContextualizedECS.Context
{
	public struct TickContext
	{
		public IEnumerable<Entity> Entities => null;

		public IEntitiesHolder EntitiesHolder { get; }

		public TickArgs InArgs { get; }

		public TickArgs Result { get; }

		public Dictionary<Entity, HashSet<Type>> TempComponents { get; }

		public TickContext(IEntitiesHolder entitiesManager, TickArgs inArgs, TickArgs result)
		{
			EntitiesHolder = null;
			InArgs = null;
			Result = null;
			TempComponents = null;
		}
	}
}
