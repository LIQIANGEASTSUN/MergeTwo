using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoardSkipCooldownCapability.Data
{
	public class CooldownSkippedAnalyticEventPayload
	{
		public IMergeItem MergeItem { get; }

		public ResourceMultiple Price { get; }

		public int CurrentCycle { get; }

		public int CurrentSubCycle { get; }

		public int CurrentCapacity { get; }

		public int TimeLeftInSeconds { get; }

		public CooldownSkippedAnalyticEventPayload(IMergeItem mergeItem, ResourceMultiple price, int currentCycle, int currentSubCycle, int currentCapacity, int timeLeftInSeconds)
		{
		}
	}
}
