using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishBoardGroup : ProtoBaseProxy<EventWishBoardGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_barRewardId_codec;

		public readonly RepeatedField<int> BarRewardId;

		public int BoardId;

		public int BoostInfo;

		public int Cyclebox;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_dropId_codec;

		public readonly RepeatedField<int> DropId;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public int FreeToken;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public static readonly FieldCodec<int> _repeated_keyId_codec;

		public readonly RepeatedField<int> KeyId;

		public int MainCategory;

		public static readonly FieldCodec<int> _repeated_milestoneId_codec;

		public readonly RepeatedField<int> MilestoneId;

		public static readonly FieldCodec<int> _repeated_orderItemId_codec;

		public readonly RepeatedField<int> OrderItemId;

		public string Startitem;

		public static readonly FieldCodec<int> _repeated_tokenDropId_codec;

		public readonly RepeatedField<int> TokenDropId;

		public static readonly FieldCodec<string> _repeated_tokenDropOne_codec;

		public readonly RepeatedField<string> TokenDropOne;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public EventWishBoardGroup()
		{
		}

		public EventWishBoardGroup(EventWishBoardGroup other)
		{
		}

		public override EventWishBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
