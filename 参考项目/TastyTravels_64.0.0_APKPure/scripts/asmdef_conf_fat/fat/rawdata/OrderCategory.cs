using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class OrderCategory : ProtoBaseProxy<OrderCategory>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_activeItemId_codec;

		public readonly RepeatedField<int> ActiveItemId;

		public int ActiveLevel;

		public static readonly FieldCodec<int> _repeated_activeOrderId_codec;

		public readonly RepeatedField<int> ActiveOrderId;

		public int BasicWt;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_careGraphId_codec;

		public readonly RepeatedField<int> CareGraphId;

		public bool IsAutoGraph;

		public bool IsIgnoreByEasy;

		public static readonly FieldCodec<int> _repeated_opposeGraphId_codec;

		public readonly RepeatedField<int> OpposeGraphId;

		public int OriginGraphId;

		public static readonly FieldCodec<int> _repeated_shutdownItemId_codec;

		public readonly RepeatedField<int> ShutdownItemId;

		public int ShutdownLevel;

		public static readonly FieldCodec<int> _repeated_shutdownOrderId_codec;

		public readonly RepeatedField<int> ShutdownOrderId;

		public int XXX_RowIdentifier { get; set; }

		public OrderCategory()
		{
		}

		public OrderCategory(OrderCategory other)
		{
		}

		public override OrderCategory Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
