using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescueDrop : ProtoBaseProxy<EventRescueDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string OutputFixedOne;

		public static readonly FieldCodec<string> _repeated_outputOne_codec;

		public readonly RepeatedField<string> OutputOne;

		public static readonly FieldCodec<int> _repeated_withoutputTime_codec;

		public readonly RepeatedField<int> WithoutputTime;

		public int XXX_RowIdentifier { get; set; }

		public EventRescueDrop()
		{
		}

		public EventRescueDrop(EventRescueDrop other)
		{
		}

		public override EventRescueDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
