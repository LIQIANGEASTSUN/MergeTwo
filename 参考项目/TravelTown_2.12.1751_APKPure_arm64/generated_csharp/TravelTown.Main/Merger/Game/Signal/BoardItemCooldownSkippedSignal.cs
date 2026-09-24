using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;

namespace Merger.Game.Signal
{
	public class BoardItemCooldownSkippedSignal
	{
		public IMergeItem Item { get; }

		public int NumEmptyPositions { get; }

		public ResourceMultiple Price { get; }

		public bool ShowTimeLeft { get; }

		public TimeCycleComponentAnalytics TimeCycleComponentAnalytics { get; }

		public BoardItemCooldownSkippedSignal(IMergeItem item, int numEmptyPositions, ResourceMultiple price, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft)
		{
		}
	}
}
