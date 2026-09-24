using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventStep : ProtoBaseProxy<EventStep>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int CompleteTheme;

		public int Cost;

		public int DecorateScore;

		public int EventTheme;

		public static readonly MapField<int, string>.Codec _map_expirePopup_codec;

		public readonly MapField<int, string> ExpirePopup;

		public int GradeId;

		public static readonly FieldCodec<string> _repeated_milestoneReward_codec;

		public readonly RepeatedField<string> MilestoneReward;

		public string Name;

		public string OrderPrefab;

		public int RandomerId;

		public int RecycleTheme;

		public string RewardIcon;

		public static readonly FieldCodec<int> _repeated_taskId_codec;

		public readonly RepeatedField<int> TaskId;

		public int XXX_RowIdentifier { get; set; }

		public EventStep()
		{
		}

		public EventStep(EventStep other)
		{
		}

		public override EventStep Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
