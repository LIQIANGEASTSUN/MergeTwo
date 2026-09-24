using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventTileBingoDetail : ProtoBaseProxy<EventTileBingoDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_includeLevelGroups_codec;

		public readonly RepeatedField<int> IncludeLevelGroups;

		public int TileDetail;

		public int XXX_RowIdentifier { get; set; }

		public EventTileBingoDetail()
		{
		}

		public EventTileBingoDetail(EventTileBingoDetail other)
		{
		}

		public override EventTileBingoDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
