using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMiniBoardDetail : ProtoBaseProxy<EventMiniBoardDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int Diff;

		public string ItemNum;

		public static readonly FieldCodec<int> _repeated_levelItem_codec;

		public readonly RepeatedField<int> LevelItem;

		public static readonly FieldCodec<int> _repeated_levelid_codec;

		public readonly RepeatedField<int> Levelid;

		public int XXX_RowIdentifier { get; set; }

		public EventMiniBoardDetail()
		{
		}

		public EventMiniBoardDetail(EventMiniBoardDetail other)
		{
		}

		public override EventMiniBoardDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
