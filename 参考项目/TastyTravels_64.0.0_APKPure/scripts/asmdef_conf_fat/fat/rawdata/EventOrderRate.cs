using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventOrderRate : ProtoBaseProxy<EventOrderRate>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int AppearToken;

		public int Cost;

		public int EventThemeId;

		public int GradeId;

		public int StartThemeId;

		public int XXX_RowIdentifier { get; set; }

		public EventOrderRate()
		{
		}

		public EventOrderRate(EventOrderRate other)
		{
		}

		public override EventOrderRate Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
