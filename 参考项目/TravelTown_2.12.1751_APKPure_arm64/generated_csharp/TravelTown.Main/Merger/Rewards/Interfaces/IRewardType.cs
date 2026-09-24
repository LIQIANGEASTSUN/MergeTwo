using System;

namespace Merger.Rewards.Interfaces
{
	public interface IRewardType : IEquatable<IRewardType>
	{
		string Type { get; }
	}
}
