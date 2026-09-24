using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeBoardGrp : ProtoBaseProxy<MergeBoardGrp>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_boardIds_codec;

		public readonly RepeatedField<int> BoardIds;

		public int XXX_RowIdentifier { get; set; }

		public MergeBoardGrp()
		{
		}

		public MergeBoardGrp(MergeBoardGrp other)
		{
		}

		public override MergeBoardGrp Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
