using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineCartRound : ProtoBaseProxy<EventMineCartRound>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public string RewardIcon;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BaseCount;

		public static readonly FieldCodec<string> _repeated_baseReward_codec;

		public readonly RepeatedField<string> BaseReward;

		public static readonly FieldCodec<int> _repeated_milestoneReward_codec;

		public readonly RepeatedField<int> MilestoneReward;

		public static readonly FieldCodec<int> _repeated_milestoneScore_codec;

		public readonly RepeatedField<int> MilestoneScore;

		public int RoundQueue;

		public static readonly FieldCodec<string> _repeated_roundReward_codec;

		public readonly RepeatedField<string> RoundReward;

		public int XXX_RowIdentifier { get; set; }

		public EventMineCartRound()
		{
		}

		public EventMineCartRound(EventMineCartRound other)
		{
		}

		public override EventMineCartRound Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
