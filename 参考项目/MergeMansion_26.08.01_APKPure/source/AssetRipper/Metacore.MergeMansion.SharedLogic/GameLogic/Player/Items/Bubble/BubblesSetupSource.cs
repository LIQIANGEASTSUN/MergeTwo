using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Bubble
{
	public class BubblesSetupSource : IConfigItemSource<BubblesSetup, BubblesSetupId>, IGameConfigSourceItem<BubblesSetupId, BubblesSetup>, IHasGameConfigKey<BubblesSetupId>
	{
		public int ExperimentPriority { get; set; }

		public BubblesSetupId ConfigKey { get; set; }

		public string SetupType { get; set; }

		public int MaxBubblesOnBoard { get; set; }

		public F32 FirstEncounterQuotient { get; set; }

		public int RollScale { get; set; }

		public int BubbleCountAdjustmentQuotient { get; set; }

		public F32 GraceRecoverySpeed { get; set; }

		public F32 GraceChanceReduction { get; set; }

		public F32 MaxGraceChance { get; set; }

		public F32 MinGraceChance { get; set; }

		public F32 BehaviorChanceRecoverySpeed { get; set; }

		public F32 BehaviorChanceReduction { get; set; }

		public F32 MaxBubbleBehaviourChance { get; set; }

		public F32 MinBubbleBehaviourChance { get; set; }

		public F32 NormalizationQuot { get; set; }

		public F32 NonNeededPenalty { get; set; }

		public F32 HardestTaskBoostQuot { get; set; }

		public List<MetaDuration?> MinTimeSinceBubble { get; set; }

		public List<MetaDuration?> MaxTimeSinceBubble { get; set; }

		public List<F32> BracketQuot { get; set; }

		public List<MergeChainId> SimplifiedLogicChains { get; set; }

		public BubblesSetup ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
