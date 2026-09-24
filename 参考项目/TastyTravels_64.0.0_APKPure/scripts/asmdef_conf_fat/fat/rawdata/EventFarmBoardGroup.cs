using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFarmBoardGroup : ProtoBaseProxy<EventFarmBoardGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_areaId_codec;

		public readonly RepeatedField<int> AreaId;

		public static readonly FieldCodec<int> _repeated_boardDropId_codec;

		public readonly RepeatedField<int> BoardDropId;

		public int BoardId;

		public int BoostInfo;

		public int Diff;

		public int EatId;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public static readonly FieldCodec<int> _repeated_levelId_codec;

		public readonly RepeatedField<int> LevelId;

		public int MainCategory;

		public static readonly FieldCodec<int> _repeated_milestoneId_codec;

		public readonly RepeatedField<int> MilestoneId;

		public int TokenNum;

		public int XXX_RowIdentifier { get; set; }

		public EventFarmBoardGroup()
		{
		}

		public EventFarmBoardGroup(EventFarmBoardGroup other)
		{
		}

		public override EventFarmBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
