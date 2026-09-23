namespace MergeEngine.Util
{
	public class WeightedItem<T>
	{
		public T Item { get; }

		public int Weight { get; }

		public int SumWeights { get; }

		public WeightedItem(T item, int weight, int sumWeights)
		{
		}
	}
}
