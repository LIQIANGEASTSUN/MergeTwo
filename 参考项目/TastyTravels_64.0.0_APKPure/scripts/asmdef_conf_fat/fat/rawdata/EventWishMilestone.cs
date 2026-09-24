using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishMilestone : ProtoBaseProxy<EventWishMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_dropItem_codec;

		public readonly RepeatedField<int> DropItem;

		public string Image;

		public int ItemId;

		public int MilestoneItem;

		public int XXX_RowIdentifier { get; set; }

		public EventWishMilestone()
		{
		}

		public EventWishMilestone(EventWishMilestone other)
		{
		}

		public override EventWishMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
