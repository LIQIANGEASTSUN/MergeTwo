using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMiniBoardMultiInfo : ProtoBaseProxy<EventMiniBoardMultiInfo>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public string ItemNum;

		public string KeyIcon;

		public string KeyboardIcon;

		public static readonly FieldCodec<int> _repeated_levelItem_codec;

		public readonly RepeatedField<int> LevelItem;

		public static readonly FieldCodec<int> _repeated_levelid_codec;

		public readonly RepeatedField<int> Levelid;

		public static readonly MapField<int, int>.Codec _map_nextBoardItem_codec;

		public readonly MapField<int, int> NextBoardItem;

		public int XXX_RowIdentifier { get; set; }

		public EventMiniBoardMultiInfo()
		{
		}

		public EventMiniBoardMultiInfo(EventMiniBoardMultiInfo other)
		{
		}

		public override EventMiniBoardMultiInfo Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
