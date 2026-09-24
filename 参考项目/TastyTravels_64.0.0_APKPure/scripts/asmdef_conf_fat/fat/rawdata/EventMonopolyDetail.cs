using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMonopolyDetail : ProtoBaseProxy<EventMonopolyDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int CycleStage;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_freeItem_codec;

		public readonly RepeatedField<int> FreeItem;

		public static readonly FieldCodec<int> _repeated_orderItemId_codec;

		public readonly RepeatedField<int> OrderItemId;

		public static readonly FieldCodec<int> _repeated_regularStage_codec;

		public readonly RepeatedField<int> RegularStage;

		public static readonly FieldCodec<int> _repeated_trophyId_codec;

		public readonly RepeatedField<int> TrophyId;

		public int XXX_RowIdentifier { get; set; }

		public EventMonopolyDetail()
		{
		}

		public EventMonopolyDetail(EventMonopolyDetail other)
		{
		}

		public override EventMonopolyDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
