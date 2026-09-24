using System;
using System.Collections.Generic;

namespace ContextualizedECS.Systems
{
	public class SystemInfo
	{
		public ISystem System { get; set; }

		public Type SystemType { get; set; }

		public Func<IList<SystemInfo>, int> ResolveMethod { get; set; }

		public SystemInfo(ISystem system, Type systemType)
		{
		}
	}
}
