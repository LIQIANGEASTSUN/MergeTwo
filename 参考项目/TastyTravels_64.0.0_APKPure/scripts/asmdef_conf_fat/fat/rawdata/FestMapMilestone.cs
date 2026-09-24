using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FestMapMilestone : ProtoBaseProxy<FestMapMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string BuildingImg;

		public int DisplayItem;

		public static readonly FieldCodec<string> _repeated_outputsOne_codec;

		public readonly RepeatedField<string> OutputsOne;

		public int UnlockItem;

		public int XXX_RowIdentifier { get; set; }

		public FestMapMilestone()
		{
		}

		public FestMapMilestone(FestMapMilestone other)
		{
		}

		public override FestMapMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
