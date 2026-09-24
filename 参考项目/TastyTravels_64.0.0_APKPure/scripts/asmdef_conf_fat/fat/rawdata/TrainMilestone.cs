using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TrainMilestone : ProtoBaseProxy<TrainMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int MissionNum;

		public string Reward;

		public int XXX_RowIdentifier { get; set; }

		public TrainMilestone()
		{
		}

		public TrainMilestone(TrainMilestone other)
		{
		}

		public override TrainMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
