using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFishDetail : ProtoBaseProxy<EventFishDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_collectfishId_codec;

		public readonly RepeatedField<int> CollectfishId;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_freeItem_codec;

		public readonly RepeatedField<int> FreeItem;

		public static readonly FieldCodec<int> _repeated_milestones_codec;

		public readonly RepeatedField<int> Milestones;

		public static readonly FieldCodec<int> _repeated_orderGetItemId_codec;

		public readonly RepeatedField<int> OrderGetItemId;

		public int OrderRate;

		public int XXX_RowIdentifier { get; set; }

		public EventFishDetail()
		{
		}

		public EventFishDetail(EventFishDetail other)
		{
		}

		public override EventFishDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
