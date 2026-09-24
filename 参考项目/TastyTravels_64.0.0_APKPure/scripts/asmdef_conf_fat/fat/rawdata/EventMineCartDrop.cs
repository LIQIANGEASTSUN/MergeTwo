using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineCartDrop : ProtoBaseProxy<EventMineCartDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_outPutsFour_codec;

		public readonly RepeatedField<string> OutPutsFour;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<string> _repeated_outputsTwo_codec;

		public readonly RepeatedField<string> OutputsTwo;

		public int XXX_RowIdentifier { get; set; }

		public EventMineCartDrop()
		{
		}

		public EventMineCartDrop(EventMineCartDrop other)
		{
		}

		public override EventMineCartDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
