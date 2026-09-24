using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;

namespace Merger.Game.Signal
{
	public class BoardItemCooldownBaseSignal
	{
		public IMergeItem Item { get; }

		public string UUid { get; }

		public int NumEmptyPositions { get; }

		public TimeCycleComponentAnalytics TimeCycleComponentAnalytics { get; }

		public ResourceMultiple CooldownPrice { get; }

		public bool ShowTimeLeft { get; }

		public BoardItemCooldownBaseSignal(IMergeItem item, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, string uuId, bool showTimeLeft, ResourceMultiple cooldownPrice = null)
		{
		}
	}
}
