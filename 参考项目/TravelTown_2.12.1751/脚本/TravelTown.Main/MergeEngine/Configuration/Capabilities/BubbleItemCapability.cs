using System;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class BubbleItemCapability : CapabilityBase
	{
		public float DropProbabilityPercentage;

		public int BurstPriceInHardCurrency;

		public int? SaleBurstPriceInHardCurrency;

		public bool CanBeBurstByRewardedAd;

		public int BubbleExpirationTimeInSeconds;

		public float? SmarterBubblesOverrideValue;

		[JsonIgnore]
		public bool WasOverriden;
	}
}
