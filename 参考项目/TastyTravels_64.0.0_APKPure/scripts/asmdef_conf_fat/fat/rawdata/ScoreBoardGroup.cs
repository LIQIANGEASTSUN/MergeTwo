using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ScoreBoardGroup : ProtoBaseProxy<ScoreBoardGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int BoostInfo;

		public int Diff;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public int FreeToken;

		public static readonly FieldCodec<int> _repeated_gallery_codec;

		public readonly RepeatedField<int> Gallery;

		public string GalleryReward;

		public int MainCategory;

		public int MergeScoreTokenId;

		public static readonly FieldCodec<string> _repeated_milestoneCloud_codec;

		public readonly RepeatedField<string> MilestoneCloud;

		public static readonly FieldCodec<int> _repeated_milestoneItem_codec;

		public readonly RepeatedField<int> MilestoneItem;

		public static readonly FieldCodec<int> _repeated_scoreCycleMilestone_codec;

		public readonly RepeatedField<int> ScoreCycleMilestone;

		public static readonly FieldCodec<int> _repeated_scoreMilestone_codec;

		public readonly RepeatedField<int> ScoreMilestone;

		public static readonly FieldCodec<string> _repeated_tokenDropOne_codec;

		public readonly RepeatedField<string> TokenDropOne;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public ScoreBoardGroup()
		{
		}

		public ScoreBoardGroup(ScoreBoardGroup other)
		{
		}

		public override ScoreBoardGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
