using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventOrderLike : ProtoBaseProxy<EventOrderLike>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_activeTiming_codec;

		public readonly RepeatedField<int> ActiveTiming;

		public int BoardId;

		public int CycleDetail;

		public int CycleRound;

		public static readonly FieldCodec<int> _repeated_duration_codec;

		public readonly RepeatedField<int> Duration;

		public int EventTheme;

		public bool IsCorner;

		public bool IsTokenLimit;

		public int NormalHelp;

		public int NormalStart;

		public int NormalTip;

		public static readonly FieldCodec<int> _repeated_queueDetail_codec;

		public readonly RepeatedField<int> QueueDetail;

		public int RaceHelp;

		public static readonly FieldCodec<int> _repeated_raceRound_codec;

		public readonly RepeatedField<int> RaceRound;

		public int RaceStart;

		public int RaceTheme;

		public int RaceTip;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public EventOrderLike()
		{
		}

		public EventOrderLike(EventOrderLike other)
		{
		}

		public override EventOrderLike Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
