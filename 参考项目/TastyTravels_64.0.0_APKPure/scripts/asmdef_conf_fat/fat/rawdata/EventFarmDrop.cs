using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFarmDrop : ProtoBaseProxy<EventFarmDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_outputsFour_codec;

		public readonly RepeatedField<string> OutputsFour;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<string> _repeated_outputsTwo_codec;

		public readonly RepeatedField<string> OutputsTwo;

		public int XXX_RowIdentifier { get; set; }

		public EventFarmDrop()
		{
		}

		public EventFarmDrop(EventFarmDrop other)
		{
		}

		public override EventFarmDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
