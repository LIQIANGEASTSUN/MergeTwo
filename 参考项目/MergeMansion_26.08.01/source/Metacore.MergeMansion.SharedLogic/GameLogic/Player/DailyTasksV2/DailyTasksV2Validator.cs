using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.DailyTasksV2;
using GameLogic.MergeChains;
using Metaplay.Core.Config;

namespace GameLogic.Player.DailyTasksV2
{
	public class DailyTasksV2Validator : IValidatable
	{
		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void ValidateMergeChains(IMergeMansionGameConfig configuration)
		{
		}

		public void ValidateMergeChain(IMergeMansionGameConfig configuration, MergeChainId mergeChainId)
		{
		}

		public void ValidateMergeChainAreasReferences(IMergeMansionGameConfig configuration, DailyTasksV2MergeChainInfo info)
		{
		}
	}
}
