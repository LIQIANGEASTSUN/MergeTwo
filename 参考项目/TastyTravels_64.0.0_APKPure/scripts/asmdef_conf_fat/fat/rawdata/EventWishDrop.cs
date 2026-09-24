using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishDrop : ProtoBaseProxy<EventWishDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_outputsFour_codec;

		public readonly RepeatedField<string> OutputsFour;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<string> _repeated_outputsTokenOne_codec;

		public readonly RepeatedField<string> OutputsTokenOne;

		public static readonly FieldCodec<string> _repeated_outputsTwo_codec;

		public readonly RepeatedField<string> OutputsTwo;

		public int XXX_RowIdentifier { get; set; }

		public EventWishDrop()
		{
		}

		public EventWishDrop(EventWishDrop other)
		{
		}

		public override EventWishDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
