namespace Merger.Bubbles.Buckets
{
	public class Bucket
	{
		public int Start { get; }

		public int End { get; }

		public int MinDataAmount { get; }

		public int MaxDataAmount { get; }

		public float Addition { get; }

		public int SpawnedBubbles { get; set; }

		public int BurstBubbles { get; set; }

		public bool IsConversionCalculated { get; set; }

		public float ConversionRatio { get; set; }

		public Bucket(int start, int end, float addition, int minDataAmount, int maxDataAmount)
		{
		}

		public void UpdateConversionRatio(float newRatio)
		{
		}

		public bool IsInBucket(int price)
		{
			return false;
		}
	}
}
