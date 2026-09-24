using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventStepDetail : ProtoBaseProxy<EventStepDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int DecorateScore;

		public int Diff;

		public static readonly FieldCodec<string> _repeated_milestoneReward_codec;

		public readonly RepeatedField<string> MilestoneReward;

		public static readonly FieldCodec<int> _repeated_taskId_codec;

		public readonly RepeatedField<int> TaskId;

		public int XXX_RowIdentifier { get; set; }

		public EventStepDetail()
		{
		}

		public EventStepDetail(EventStepDetail other)
		{
		}

		public override EventStepDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
