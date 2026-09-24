using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class OrderReward : ProtoBaseProxy<OrderReward>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_reward_codec;

		public readonly RepeatedField<string> Reward;

		public int XXX_RowIdentifier { get; set; }

		public OrderReward()
		{
		}

		public OrderReward(OrderReward other)
		{
		}

		public override OrderReward Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
