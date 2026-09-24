using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MonopolyStage : ProtoBaseProxy<MonopolyStage>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_boardPos_codec;

		public readonly RepeatedField<int> BoardPos;

		public int ColCount;

		public static readonly FieldCodec<int> _repeated_dicePos_codec;

		public readonly RepeatedField<int> DicePos;

		public static readonly FieldCodec<int> _repeated_diceRoute_codec;

		public readonly RepeatedField<int> DiceRoute;

		public bool IfFixRoute;

		public static readonly FieldCodec<string> _repeated_keyGrid_codec;

		public readonly RepeatedField<string> KeyGrid;

		public int Lap;

		public static readonly FieldCodec<string> _repeated_lapReward_codec;

		public readonly RepeatedField<string> LapReward;

		public string OutputFixedOne;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public int RowCount;

		public static readonly FieldCodec<string> _repeated_stageReward_codec;

		public readonly RepeatedField<string> StageReward;

		public string StageRewardIcon;

		public string StageRewardIconDark;

		public static readonly FieldCodec<string> _repeated_stageRoute_codec;

		public readonly RepeatedField<string> StageRoute;

		public static readonly FieldCodec<int> _repeated_withoutputTime_codec;

		public readonly RepeatedField<int> WithoutputTime;

		public int XXX_RowIdentifier { get; set; }

		public MonopolyStage()
		{
		}

		public MonopolyStage(MonopolyStage other)
		{
		}

		public override MonopolyStage Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
