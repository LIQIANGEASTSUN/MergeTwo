using System;
using System.Collections.Generic;

namespace MergeEngine.ECS.Components
{
	[Serializable]
	public class SerializedDataComponent
	{
		public Dictionary<string, string> Data;
	}
}
