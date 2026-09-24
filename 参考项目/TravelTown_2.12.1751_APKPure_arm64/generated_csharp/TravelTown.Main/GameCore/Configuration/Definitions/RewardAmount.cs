using System;
using MergeEngine.Configuration.JsonConverters.RewardFactories;
using Newtonsoft.Json;
using Tools.Attributes;

namespace GameCore.Configuration.Definitions
{
	public class RewardAmount : IComparable<RewardAmount>, IEquatable<RewardAmount>
	{
		[ConstructorParameter(1)]
		[NonSerialized]
		public RewardAmountType _type;

		[ConstructorParameter(2)]
		[NonSerialized]
		public int _amount;

		[ConstructorParameter(3)]
		[NonSerialized]
		public int _min;

		[ConstructorParameter(4)]
		[NonSerialized]
		public int _max;

		[ConstructorParameter(5)]
		[NonSerialized]
		public int _outOf;

		public RewardAmountType Type => default(RewardAmountType);

		[JsonIgnore]
		public int Amount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int Min => 0;

		[JsonIgnore]
		public int Max => 0;

		[JsonIgnore]
		public int OutOf => 0;

		public bool IsPlural => false;

		public RewardAmount(RewardAmountType type, int amount, int min = 0, int max = 0, int outOf = 0)
		{
		}

		public static implicit operator RewardAmount(int amount)
		{
			return null;
		}

		public RewardAmount(int amount)
		{
		}

		public RewardAmount(RewardAmount other)
		{
		}

		public int CompareTo(RewardAmount other)
		{
			return 0;
		}

		public bool Equals(RewardAmount other)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static RewardAmount CreateFromSerialised(SerializedJsonReward rewardData)
		{
			return null;
		}

		public RewardAmount Clone()
		{
			return null;
		}

		public int GetAmountOrZero()
		{
			return 0;
		}
	}
}
