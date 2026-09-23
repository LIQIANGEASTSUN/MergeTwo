using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Player;

namespace GameLogic.Player.Items.Bubble
{
	public class BubbleVariationSource : IConfigItemSource<BubbleVariantsDefinition, BubbleVariationId>, IGameConfigSourceItem<BubbleVariationId, BubbleVariantsDefinition>, IHasGameConfigKey<BubbleVariationId>
	{
		public int ExperimentPriority { get; set; }

		public BubbleVariationId ConfigKey { get; set; }

		public MetaDuration BubbleDuration { get; set; }

		public Currencies OpenCurrency { get; set; }

		public int OpenCost { get; set; }

		public int SpawnOdds { get; set; }

		public string ReplacementItem { get; set; }

		public List<PlayerSegmentId> Segments { get; set; }

		public int Priority { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public BubbleVariantsDefinition ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
