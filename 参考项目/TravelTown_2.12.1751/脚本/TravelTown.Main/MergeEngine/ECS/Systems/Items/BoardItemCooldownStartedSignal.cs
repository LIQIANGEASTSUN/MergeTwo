using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Signal;

namespace MergeEngine.ECS.Systems.Items
{
	public class BoardItemCooldownStartedSignal : BoardItemCooldownBaseSignal
	{
		public BoardItemCooldownStartedSignal(IMergeItem item, string uuId, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft, ResourceMultiple cooldownPrice = null)
			: base(null, 0, default(TimeCycleComponentAnalytics), null, showTimeLeft: false)
		{
		}
	}
}
