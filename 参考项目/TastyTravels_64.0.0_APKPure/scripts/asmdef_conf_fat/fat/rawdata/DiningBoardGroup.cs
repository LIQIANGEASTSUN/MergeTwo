using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class DiningBoardGroup : ProtoBaseProxy<DiningBoardGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int BoostInfo;

		public static readonly FieldCodec<string> _repeated_cloudUnlock_codec;

		public readonly RepeatedField<string> CloudUnlock;

		public int Diff;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public int FreeToken;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public int MainCategory;

		public static readonly FieldCodec<int> _repeated_mapMilestone_codec;

		public readonly RepeatedField<int> MapMilestone;

		public static readonly FieldCodec<int> _repeated_scoreItemId_codec;

		public readonly RepeatedField<int> ScoreItemId;

		public static readonly FieldCodec<int> _repeated_scoreMilestone_codec;

		public readonly RepeatedField<int> ScoreMilestone;

		public int ScoreSpChest;

		public int ScoreTokenId;

		public static readonly FieldCodec<int> _repeated_tableInfo_codec;

		public readonly RepeatedField<int> TableInfo;

		public static readonly FieldCodec<string> _repeated_tokenDropOne_codec;

		public readonly RepeatedField<string> TokenDropOne;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public DiningBoardGroup()
		{
		}

		public DiningBoardGroup(DiningBoardGroup other)
		{
		}

		public override DiningBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
