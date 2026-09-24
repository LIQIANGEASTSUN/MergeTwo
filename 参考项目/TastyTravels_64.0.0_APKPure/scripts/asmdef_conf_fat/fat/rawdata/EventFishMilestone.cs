using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFishMilestone : ProtoBaseProxy<EventFishMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_chestOutputs_codec;

		public readonly RepeatedField<string> ChestOutputs;

		public static readonly FieldCodec<string> _repeated_outputsFour_codec;

		public readonly RepeatedField<string> OutputsFour;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public static readonly FieldCodec<string> _repeated_outputsTwo_codec;

		public readonly RepeatedField<string> OutputsTwo;

		public static readonly FieldCodec<int> _repeated_randomFish_codec;

		public readonly RepeatedField<int> RandomFish;

		public static readonly FieldCodec<string> _repeated_reward_codec;

		public readonly RepeatedField<string> Reward;

		public string RewardIcon;

		public int ShowNum;

		public int Star;

		public int XXX_RowIdentifier { get; set; }

		public EventFishMilestone()
		{
		}

		public EventFishMilestone(EventFishMilestone other)
		{
		}

		public override EventFishMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
