using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class OrderCommon : ProtoBaseProxy<OrderCommon>, IRowIdentifier<int>
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

		public int BoardId;

		public int DisplayLevel;

		public bool IsAbandon;

		public bool IsRelateBox;

		public static readonly FieldCodec<int> _repeated_requireItemId_codec;

		public readonly RepeatedField<int> RequireItemId;

		public int RequireOrderCount;

		public static readonly FieldCodec<string> _repeated_reward_codec;

		public readonly RepeatedField<string> Reward;

		public int RoleId;

		public static readonly FieldCodec<int> _repeated_shutdownItemId_codec;

		public readonly RepeatedField<int> ShutdownItemId;

		public int ShutdownLevel;

		public static readonly FieldCodec<int> _repeated_shutdownOrderId_codec;

		public readonly RepeatedField<int> ShutdownOrderId;

		public int XXX_RowIdentifier { get; set; }

		public OrderCommon()
		{
		}

		public OrderCommon(OrderCommon other)
		{
		}

		public override OrderCommon Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
