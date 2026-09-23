using System;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class InventoryCapability
	{
		[JsonProperty("numStartSlots")]
		public int NumStartSlots;

		[JsonProperty("maxSlots")]
		public int MaxSlots;

		[JsonProperty("firstSlotPrice")]
		public int FirstSlotPrice;

		[JsonProperty("slotPriceMultiplier")]
		public float SlotPriceMultiplier;

		[JsonProperty("priceCap")]
		public int PriceCap;

		[JsonProperty("slotPriceCurrency")]
		public PlayerResourceEnum SlotPriceCurrency;
	}
}
