using System;
using GameCore.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Rewards.Interfaces;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class ResourceReplenishment : IRewardReplenishment
	{
		public PlayerResourceEnum Resource;

		public int Amount;

		public int MaxAmount;

		public double Seconds;

		[JsonIgnore]
		public IRewardType RewardType => null;

		public int RefillAmount => 0;

		public int MaxRefillAmount => 0;

		public double RefillIntervalInSeconds => 0.0;

		public void UpdateRefillData(int amount, int maxAmount, double intervalInSeconds)
		{
		}
	}
}
