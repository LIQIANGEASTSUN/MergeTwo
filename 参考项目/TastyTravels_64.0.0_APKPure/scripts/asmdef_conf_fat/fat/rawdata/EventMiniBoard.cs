using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMiniBoard : ProtoBaseProxy<EventMiniBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardTheme;

		public int Cost;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public int GradeId;

		public int XXX_RowIdentifier { get; set; }

		public EventMiniBoard()
		{
		}

		public EventMiniBoard(EventMiniBoard other)
		{
		}

		public override EventMiniBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
