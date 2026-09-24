using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventAreaMilestone : ProtoBaseProxy<EventAreaMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_milestoneReward_codec;

		public readonly RepeatedField<string> MilestoneReward;

		public int MilestoneScore;

		public string RewardIcon1;

		public string RewardIcon2;

		public int XXX_RowIdentifier { get; set; }

		public EventAreaMilestone()
		{
		}

		public EventAreaMilestone(EventAreaMilestone other)
		{
		}

		public override EventAreaMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
