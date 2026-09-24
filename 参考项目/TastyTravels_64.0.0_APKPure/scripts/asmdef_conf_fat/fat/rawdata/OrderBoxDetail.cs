using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class OrderBoxDetail : ProtoBaseProxy<OrderBoxDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string Icon;

		public static readonly FieldCodec<int> _repeated_randomReward_codec;

		public readonly RepeatedField<int> RandomReward;

		public int RandomerId;

		public int XXX_RowIdentifier { get; set; }

		public OrderBoxDetail()
		{
		}

		public OrderBoxDetail(OrderBoxDetail other)
		{
		}

		public override OrderBoxDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
