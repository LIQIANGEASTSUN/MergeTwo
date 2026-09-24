using System;
using System.Collections.Generic;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class CounterComponent : ComponentBase
	{
		[NonSerialized]
		public Dictionary<int, int> _counters;

		public CounterComponent(Entity entity)
			: base(null)
		{
		}

		public void Increment(int id = 0)
		{
		}

		public int GetCounter(int id = 0)
		{
			return 0;
		}
	}
}
