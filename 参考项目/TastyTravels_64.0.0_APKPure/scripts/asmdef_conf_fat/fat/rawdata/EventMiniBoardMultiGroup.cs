using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMiniBoardMultiGroup : ProtoBaseProxy<EventMiniBoardMultiGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_infoId_codec;

		public readonly RepeatedField<int> InfoId;

		public int Milestone;

		public static readonly FieldCodec<int> _repeated_orderGetItemId_codec;

		public readonly RepeatedField<int> OrderGetItemId;

		public int OrderRate;

		public int XXX_RowIdentifier { get; set; }

		public EventMiniBoardMultiGroup()
		{
		}

		public EventMiniBoardMultiGroup(EventMiniBoardMultiGroup other)
		{
		}

		public override EventMiniBoardMultiGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
