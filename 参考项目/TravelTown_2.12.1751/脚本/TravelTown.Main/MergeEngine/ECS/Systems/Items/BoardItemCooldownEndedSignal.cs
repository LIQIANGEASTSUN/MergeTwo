using MergeEngine.Configuration;
using Merger.Game.Signal;

namespace MergeEngine.ECS.Systems.Items
{
	public class BoardItemCooldownEndedSignal : BoardItemCooldownBaseSignal
	{
		public BoardItemCooldownEndedSignal(IMergeItem item, string uuId, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft)
			: base(null, 0, default(TimeCycleComponentAnalytics), null, showTimeLeft: false)
		{
		}
	}
}
