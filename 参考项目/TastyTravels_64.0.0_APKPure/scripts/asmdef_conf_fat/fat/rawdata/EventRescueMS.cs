using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescueMS : ProtoBaseProxy<EventRescueMS>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string ChestImg;

		public static readonly FieldCodec<string> _repeated_mileStoneReward_codec;

		public readonly RepeatedField<string> MileStoneReward;

		public static readonly FieldCodec<int> _repeated_milestoneScore_codec;

		public readonly RepeatedField<int> MilestoneScore;

		public int XXX_RowIdentifier { get; set; }

		public EventRescueMS()
		{
		}

		public EventRescueMS(EventRescueMS other)
		{
		}

		public override EventRescueMS Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
