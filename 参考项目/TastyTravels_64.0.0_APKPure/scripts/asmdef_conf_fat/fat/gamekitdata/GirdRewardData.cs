using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class GirdRewardData : ProtoBaseProxy<GirdRewardData>
	{
		public static readonly string FullName;

		public int X;

		public int Y;

		public int RewardId;

		public int RewardCount;

		public bool HasReceive;

		public GirdRewardData()
		{
		}

		public GirdRewardData(GirdRewardData other)
		{
		}

		public override GirdRewardData Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
