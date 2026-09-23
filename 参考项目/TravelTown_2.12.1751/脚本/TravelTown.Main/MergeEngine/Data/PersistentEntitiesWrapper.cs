using System;
using System.Collections.Generic;

namespace MergeEngine.Data
{
	[Serializable]
	public class PersistentEntitiesWrapper
	{
		public List<Dictionary<string, string>> EntitiesCache;
	}
}
