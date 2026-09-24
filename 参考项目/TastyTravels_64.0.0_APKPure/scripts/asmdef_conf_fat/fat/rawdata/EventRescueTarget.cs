using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescueTarget : ProtoBaseProxy<EventRescueTarget>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ActiveTimes;

		public string BasePng;

		public int CloudId;

		public static readonly FieldCodec<string> _repeated_cycleReward_codec;

		public readonly RepeatedField<string> CycleReward;

		public static readonly FieldCodec<int> _repeated_outputId_codec;

		public readonly RepeatedField<int> OutputId;

		public int Score;

		public int XXX_RowIdentifier { get; set; }

		public EventRescueTarget()
		{
		}

		public EventRescueTarget(EventRescueTarget other)
		{
		}

		public override EventRescueTarget Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
