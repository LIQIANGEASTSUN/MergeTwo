using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FestBoardGroup : ProtoBaseProxy<FestBoardGroup>, IRowIdentifier<int>
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

		public static readonly FieldCodec<string> _repeated_mapReward_codec;

		public readonly RepeatedField<string> MapReward;

		public string MapRewardFinishIcon;

		public string MapRewardIcon;

		public static readonly FieldCodec<int> _repeated_scoreCycleMilestone_codec;

		public readonly RepeatedField<int> ScoreCycleMilestone;

		public static readonly FieldCodec<int> _repeated_scoreItemId_codec;

		public readonly RepeatedField<int> ScoreItemId;

		public static readonly FieldCodec<int> _repeated_scoreMilestone_codec;

		public readonly RepeatedField<int> ScoreMilestone;

		public int ScoreTokenId;

		public int SpinActiveItemId;

		public static readonly FieldCodec<int> _repeated_spinDetail_codec;

		public readonly RepeatedField<int> SpinDetail;

		public int SpinItemId;

		public static readonly FieldCodec<string> _repeated_tokenDropOne_codec;

		public readonly RepeatedField<string> TokenDropOne;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public FestBoardGroup()
		{
		}

		public FestBoardGroup(FestBoardGroup other)
		{
		}

		public override FestBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
