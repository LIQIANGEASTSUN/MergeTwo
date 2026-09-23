using System.Collections.Generic;
using MergeEngine.ECS.Systems.Triggers;
using Merger.RemotePromotions.Responses;

namespace MergeEngine.Util
{
	public static class TriggerFrequencyUtil
	{
		public const int RequiredTriggersForMatching = 0;

		public static bool EvaluateFrequencyMatch(TriggerData triggerData)
		{
			return false;
		}

		public static Dictionary<string, Dictionary<TriggerType, DisplayTriggerResponse>> ConvertToDisplayTriggersById(string uniqueId, Dictionary<TriggerType, DisplayTriggerResponse> displayTriggers)
		{
			return null;
		}
	}
}
