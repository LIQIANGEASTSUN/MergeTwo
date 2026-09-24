using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescueDetail : ProtoBaseProxy<EventRescueDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_boardId_codec;

		public readonly RepeatedField<int> BoardId;

		public int Diff;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int FreeToken;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public static readonly FieldCodec<int> _repeated_loopBoard_codec;

		public readonly RepeatedField<int> LoopBoard;

		public int MainCategory;

		public static readonly FieldCodec<int> _repeated_milestoneId_codec;

		public readonly RepeatedField<int> MilestoneId;

		public int XXX_RowIdentifier { get; set; }

		public EventRescueDetail()
		{
		}

		public EventRescueDetail(EventRescueDetail other)
		{
		}

		public override EventRescueDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
