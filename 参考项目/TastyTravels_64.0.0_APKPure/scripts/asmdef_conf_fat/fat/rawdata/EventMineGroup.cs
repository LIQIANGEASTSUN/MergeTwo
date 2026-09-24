using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineGroup : ProtoBaseProxy<EventMineGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int Cost;

		public int Diff;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public static readonly FieldCodec<int> _repeated_handbook_codec;

		public readonly RepeatedField<int> Handbook;

		public int MainCategory;

		public static readonly FieldCodec<int> _repeated_milestoneDrop_codec;

		public readonly RepeatedField<int> MilestoneDrop;

		public static readonly FieldCodec<int> _repeated_milestoneRewardId_codec;

		public readonly RepeatedField<int> MilestoneRewardId;

		public int TokenNum;

		public int XXX_RowIdentifier { get; set; }

		public EventMineGroup()
		{
		}

		public EventMineGroup(EventMineGroup other)
		{
		}

		public override EventMineGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
