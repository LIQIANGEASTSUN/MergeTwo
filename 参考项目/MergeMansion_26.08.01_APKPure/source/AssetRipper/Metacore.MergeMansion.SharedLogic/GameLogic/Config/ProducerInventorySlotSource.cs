using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Config
{
	public class ProducerInventorySlotSource : IConfigItemSource<ProducerInventorySlotConfig, ProducerInventorySlotId>, IGameConfigSourceItem<ProducerInventorySlotId, ProducerInventorySlotConfig>, IHasGameConfigKey<ProducerInventorySlotId>
	{
		public int ExperimentPriority { get; set; }

		public ProducerInventorySlotId ConfigKey { get; set; }

		public List<string> TeaseRequirementType { get; set; }

		public List<string> TeaseRequirementId { get; set; }

		public List<string> TeaseRequirementAmount { get; set; }

		public List<string> TeaseRequirementAux0 { get; set; }

		public List<string> UnlockRequirementType { get; set; }

		public List<string> UnlockRequirementId { get; set; }

		public List<string> UnlockRequirementAmount { get; set; }

		public List<string> UnlockRequirementAux0 { get; set; }

		public ProducerInventorySlotConfig ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
