using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FogScoreDetail : ProtoBaseProxy<FogScoreDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Cost;

		public static readonly FieldCodec<string> _repeated_cycleMilestoneReward_codec;

		public readonly RepeatedField<string> CycleMilestoneReward;

		public static readonly FieldCodec<int> _repeated_cycleMilestoneScore_codec;

		public readonly RepeatedField<int> CycleMilestoneScore;

		public int Diff;

		public int ExtraScore;

		public static readonly FieldCodec<string> _repeated_milestoneReward_codec;

		public readonly RepeatedField<string> MilestoneReward;

		public static readonly FieldCodec<int> _repeated_milestoneScore_codec;

		public readonly RepeatedField<int> MilestoneScore;

		public static readonly FieldCodec<string> _repeated_outputs_codec;

		public readonly RepeatedField<string> Outputs;

		public static readonly FieldCodec<int> _repeated_rewardStepNum_codec;

		public readonly RepeatedField<int> RewardStepNum;

		public int XXX_RowIdentifier { get; set; }

		public FogScoreDetail()
		{
		}

		public FogScoreDetail(FogScoreDetail other)
		{
		}

		public override FogScoreDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
