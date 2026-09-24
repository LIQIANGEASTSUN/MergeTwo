using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MicMilestoneGroup : ProtoBaseProxy<MicMilestoneGroup>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public bool IfGrandReward;

		public string MilestoneReward;

		public int MilestoneScore;

		public static readonly MapField<int, int>.Codec _map_outputsEight_codec;

		public readonly MapField<int, int> OutputsEight;

		public static readonly MapField<int, int>.Codec _map_outputsFour_codec;

		public readonly MapField<int, int> OutputsFour;

		public static readonly MapField<int, int>.Codec _map_outputsOne_codec;

		public readonly MapField<int, int> OutputsOne;

		public static readonly MapField<int, int>.Codec _map_outputsSixteen_codec;

		public readonly MapField<int, int> OutputsSixteen;

		public static readonly MapField<int, int>.Codec _map_outputsTwo_codec;

		public readonly MapField<int, int> OutputsTwo;

		public int XXX_RowIdentifier { get; set; }

		public MicMilestoneGroup()
		{
		}

		public MicMilestoneGroup(MicMilestoneGroup other)
		{
		}

		public override MicMilestoneGroup Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
