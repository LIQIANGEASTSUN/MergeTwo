using Framework.Core.Services.Scheduler.Data;

namespace Merger.Game.Signal
{
	public class ScheduledItemActivatedSignal
	{
		public AbstractSchedulerItem Item { get; }

		public ScheduledItemActivatedSignal(AbstractSchedulerItem item)
		{
		}
	}
}
