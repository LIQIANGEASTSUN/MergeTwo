using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeBoardOrder : ProtoBaseProxy<MergeBoardOrder>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int CareWt;

		public int MaxWt;

		public int MinWt;

		public int OpposeWt;

		public int OriginWt;

		public int RandWtOther;

		public int RandWtOtherAuto;

		public int RandWtRecent;

		public int RandWtUsed;

		public int RandWtUsedAuto;

		public int RecentWt;

		public int SameOriginWt;

		public int UsedWt;

		public int XXX_RowIdentifier { get; set; }

		public MergeBoardOrder()
		{
		}

		public MergeBoardOrder(MergeBoardOrder other)
		{
		}

		public override MergeBoardOrder Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
