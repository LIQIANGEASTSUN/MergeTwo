using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineDrop : ProtoBaseProxy<EventMineDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string OutputFixedOne;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<int> _repeated_withoutputTime_codec;

		public readonly RepeatedField<int> WithoutputTime;

		public int XXX_RowIdentifier { get; set; }

		public EventMineDrop()
		{
		}

		public EventMineDrop(EventMineDrop other)
		{
		}

		public override EventMineDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
