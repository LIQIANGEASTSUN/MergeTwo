using System;
using System.Collections.Generic;

namespace Merger.Bubbles.Model.Data
{
	[Serializable]
	public class SmarterBubblesData
	{
		public List<BubbleData> BubblesCore;

		public List<BubbleData> BubblesEvent;
	}
}
