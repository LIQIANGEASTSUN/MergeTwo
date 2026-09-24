using MergePuzzle.RecurringEvents;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public abstract class MiniBoardHandler<T> : MiniBoardHandlerBase where T : RecurringEventConfigBase
	{
		public T Config;

		public override RecurringEventConfigBase GetBaseConfig()
		{
			return null;
		}

		public MiniBoardHandler()
		{
		}
	}
}
