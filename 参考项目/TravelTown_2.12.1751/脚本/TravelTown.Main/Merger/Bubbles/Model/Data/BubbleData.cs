using System;

namespace Merger.Bubbles.Model.Data
{
	[Serializable]
	public class BubbleData
	{
		public int Price;

		public bool Bursted;

		public long Timestamp;

		public string UUID;

		public BubbleData(int price, long timestamp, string uuid)
		{
		}
	}
}
