using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventStepTask : ProtoBaseProxy<EventStepTask>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Number;

		public int OutputsFixedFour;

		public int OutputsFixedOne;

		public int OutputsFixedTwo;

		public static readonly MapField<int, int>.Codec _map_outputsFour_codec;

		public readonly MapField<int, int> OutputsFour;

		public static readonly MapField<int, int>.Codec _map_outputsOne_codec;

		public readonly MapField<int, int> OutputsOne;

		public static readonly MapField<int, int>.Codec _map_outputsTwo_codec;

		public readonly MapField<int, int> OutputsTwo;

		public static readonly FieldCodec<int> _repeated_requireItemId_codec;

		public readonly RepeatedField<int> RequireItemId;

		public static readonly FieldCodec<string> _repeated_reward_codec;

		public readonly RepeatedField<string> Reward;

		public int RoleId;

		public static readonly FieldCodec<int> _repeated_withoutputTime_codec;

		public readonly RepeatedField<int> WithoutputTime;

		public int XXX_RowIdentifier { get; set; }

		public EventStepTask()
		{
		}

		public EventStepTask(EventStepTask other)
		{
		}

		public override EventStepTask Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
