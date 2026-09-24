using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class GirdRewardInfo : ProtoBaseProxy<GirdRewardInfo>
	{
		public static readonly string FullName;

		public bool HasConsume;

		public int UnlockLv;

		public static readonly FieldCodec<GirdRewardData> _repeated_girdRewardList_codec;

		public readonly RepeatedField<GirdRewardData> GirdRewardList;

		public GirdRewardInfo()
		{
		}

		public GirdRewardInfo(GirdRewardInfo other)
		{
		}

		public override GirdRewardInfo Clone()
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
