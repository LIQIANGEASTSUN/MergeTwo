using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TrainMission : ProtoBaseProxy<TrainMission>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_itemInfo_codec;

		public readonly RepeatedField<string> ItemInfo;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_reward_codec;

		public readonly RepeatedField<string> Reward;

		public static readonly FieldCodec<string> _repeated_specialMissionInfo_codec;

		public readonly RepeatedField<string> SpecialMissionInfo;

		public int XXX_RowIdentifier { get; set; }

		public TrainMission()
		{
		}

		public TrainMission(TrainMission other)
		{
		}

		public override TrainMission Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
