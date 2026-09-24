using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishBarReward : ProtoBaseProxy<EventWishBarReward>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BarNum;

		public static readonly FieldCodec<string> _repeated_barReward_codec;

		public readonly RepeatedField<string> BarReward;

		public string RewardIcon1;

		public string RewardIcon2;

		public int XXX_RowIdentifier { get; set; }

		public EventWishBarReward()
		{
		}

		public EventWishBarReward(EventWishBarReward other)
		{
		}

		public override EventWishBarReward Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
