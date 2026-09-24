using System.Collections.Generic;
using MergeEngine.Configuration;

namespace Merger.Game.Signal.Combinations
{
	public class ItemExtractedSignal
	{
		public IMergeItem ComboProducer;

		public TimeCycleComponentAnalytics TimeCycleComponentAnalytics;

		public int ExpendUsesLeft;

		public string ConsumedItems;

		public IEnumerable<int> EnergyCostOptions;

		public string SpawnedItemID;

		public ItemExtractedSignal(IMergeItem comboProducer, TimeCycleComponentAnalytics timeCycleComponentAnalytics, int expendUsesLeft, string consumedItems, IEnumerable<int> energyCostOptions, string id)
		{
		}
	}
}
