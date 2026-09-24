using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventAreaBoardGroup : ProtoBaseProxy<EventAreaBoardGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_bonusItem_codec;

		public readonly RepeatedField<int> BonusItem;

		public int BoostInfo;

		public int Cyclebox;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_dropId_codec;

		public readonly RepeatedField<int> DropId;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public static readonly FieldCodec<string> _repeated_freeItem_codec;

		public readonly RepeatedField<string> FreeItem;

		public int FreeToken;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public int MainCategory;

		public static readonly FieldCodec<string> _repeated_milestoneCloud_codec;

		public readonly RepeatedField<string> MilestoneCloud;

		public static readonly FieldCodec<int> _repeated_milestoneItem_codec;

		public readonly RepeatedField<int> MilestoneItem;

		public static readonly FieldCodec<int> _repeated_milestonePt_codec;

		public readonly RepeatedField<int> MilestonePt;

		public static readonly FieldCodec<int> _repeated_orderItemId_codec;

		public readonly RepeatedField<int> OrderItemId;

		public int OrderRate;

		public static readonly FieldCodec<int> _repeated_tokenDropId_codec;

		public readonly RepeatedField<int> TokenDropId;

		public static readonly FieldCodec<string> _repeated_tokenDropOne_codec;

		public readonly RepeatedField<string> TokenDropOne;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public EventAreaBoardGroup()
		{
		}

		public EventAreaBoardGroup(EventAreaBoardGroup other)
		{
		}

		public override EventAreaBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
