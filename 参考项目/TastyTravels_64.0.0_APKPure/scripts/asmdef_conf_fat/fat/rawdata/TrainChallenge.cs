using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TrainChallenge : ProtoBaseProxy<TrainChallenge>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_connectSpawner_codec;

		public readonly RepeatedField<int> ConnectSpawner;

		public static readonly FieldCodec<int> _repeated_includeMilestone_codec;

		public readonly RepeatedField<int> IncludeMilestone;

		public static readonly FieldCodec<int> _repeated_includeTrainMission_codec;

		public readonly RepeatedField<int> IncludeTrainMission;

		public int XXX_RowIdentifier { get; set; }

		public TrainChallenge()
		{
		}

		public TrainChallenge(TrainChallenge other)
		{
		}

		public override TrainChallenge Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
