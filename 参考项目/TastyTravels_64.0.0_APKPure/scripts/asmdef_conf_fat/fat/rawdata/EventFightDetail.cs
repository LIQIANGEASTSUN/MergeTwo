using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFightDetail : ProtoBaseProxy<EventFightDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_circleLevels_codec;

		public readonly RepeatedField<int> CircleLevels;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_freeItem_codec;

		public readonly RepeatedField<int> FreeItem;

		public static readonly FieldCodec<int> _repeated_levels_codec;

		public readonly RepeatedField<int> Levels;

		public static readonly FieldCodec<int> _repeated_orderGetItemId_codec;

		public readonly RepeatedField<int> OrderGetItemId;

		public int OrderRate;

		public int XXX_RowIdentifier { get; set; }

		public EventFightDetail()
		{
		}

		public EventFightDetail(EventFightDetail other)
		{
		}

		public override EventFightDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
