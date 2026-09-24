using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMiniBoardMulti : ProtoBaseProxy<EventMiniBoardMulti>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardNextTheme;

		public int BoardTheme;

		public int Cost;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public int GetKeyTheme;

		public int GradeId;

		public int HelpTheme;

		public bool IsFinishEnable;

		public int XXX_RowIdentifier { get; set; }

		public EventMiniBoardMulti()
		{
		}

		public EventMiniBoardMulti(EventMiniBoardMulti other)
		{
		}

		public override EventMiniBoardMulti Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
