using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFightLevel : ProtoBaseProxy<EventFightLevel>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_attackOutputs_codec;

		public readonly RepeatedField<string> AttackOutputs;

		public int Health;

		public static readonly FieldCodec<string> _repeated_levelReward_codec;

		public readonly RepeatedField<string> LevelReward;

		public string LevelRewardIcon;

		public string LevelRewardIconDark;

		public int Monster;

		public static readonly FieldCodec<string> _repeated_outputsFour_codec;

		public readonly RepeatedField<string> OutputsFour;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<string> _repeated_outputsTwo_codec;

		public readonly RepeatedField<string> OutputsTwo;

		public int ShowNum;

		public int XXX_RowIdentifier { get; set; }

		public EventFightLevel()
		{
		}

		public EventFightLevel(EventFightLevel other)
		{
		}

		public override EventFightLevel Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
