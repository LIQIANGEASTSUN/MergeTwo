using System.Collections.Generic;
using MergeEngine.Configuration;

namespace Merger.Game.Signal.Combinations
{
	public class ItemLoadedSignal
	{
		public IMergeItem ComboProducer;

		public TimeCycleComponentAnalytics TimeCycleComponentAnalytics;

		public int ExpendUsesLeft;

		public string ConsumedItems;

		public IEnumerable<int> EnergyCostOptions;

		public ItemLoadedSignal(IMergeItem comboProducer, TimeCycleComponentAnalytics timeCycleComponentAnalytics, int expendUsesLeft, string consumedItems, IEnumerable<int> energyCostOptions)
		{
		}
	}
}
