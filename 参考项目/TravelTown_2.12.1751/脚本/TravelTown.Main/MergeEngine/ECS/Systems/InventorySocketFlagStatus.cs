using Newtonsoft.Json;

namespace MergeEngine.ECS.Systems
{
	public class InventorySocketFlagStatus
	{
		[JsonProperty("slotId")]
		public string SlotId;

		[JsonProperty("flagStatus")]
		public string FlagStatus;

		public InventorySocketFlagStatus(string slotId, string flagStatus)
		{
		}
	}
}
