using Framework.Core.Services.Scheduler.Data;

namespace Merger.Game.Signal
{
	public class ScheduledItemExpiredSignal
	{
		public AbstractSchedulerItem Item { get; }

		public ScheduledItemExpiredSignal(AbstractSchedulerItem item)
		{
		}
	}
}
