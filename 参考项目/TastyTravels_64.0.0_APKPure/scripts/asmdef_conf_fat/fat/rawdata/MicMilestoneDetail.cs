using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MicMilestoneDetail : ProtoBaseProxy<MicMilestoneDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BubbleRate;

		public static readonly FieldCodec<string> _repeated_bubbleScore_codec;

		public readonly RepeatedField<string> BubbleScore;

		public int Diff;

		public static readonly FieldCodec<int> _repeated_milestoneGroup_codec;

		public readonly RepeatedField<int> MilestoneGroup;

		public static readonly FieldCodec<string> _repeated_storeScore_codec;

		public readonly RepeatedField<string> StoreScore;

		public int XXX_RowIdentifier { get; set; }

		public MicMilestoneDetail()
		{
		}

		public MicMilestoneDetail(MicMilestoneDetail other)
		{
		}

		public override MicMilestoneDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
