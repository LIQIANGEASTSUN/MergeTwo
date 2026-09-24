using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineCartDetail : ProtoBaseProxy<EventMineCartDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int CycleRound;

		public int Diff;

		public int DistanceFactor;

		public static readonly FieldCodec<int> _repeated_dropId_codec;

		public readonly RepeatedField<int> DropId;

		public static readonly FieldCodec<string> _repeated_freeItem_codec;

		public readonly RepeatedField<string> FreeItem;

		public static readonly FieldCodec<int> _repeated_orderItem_codec;

		public readonly RepeatedField<int> OrderItem;

		public static readonly FieldCodec<int> _repeated_roundId_codec;

		public readonly RepeatedField<int> RoundId;

		public int XXX_RowIdentifier { get; set; }

		public EventMineCartDetail()
		{
		}

		public EventMineCartDetail(EventMineCartDetail other)
		{
		}

		public override EventMineCartDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
