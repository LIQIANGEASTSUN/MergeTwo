using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Components;

namespace Merger.MergeBoard.Systems
{
	public class TimeDurationSystem : ISystem
	{
		public void Tick(TickContext context)
		{
		}

		public void ProcessTimeDuration(double deltaTime, ref TimeDurationComponent modifiedComponent)
		{
		}
	}
}
