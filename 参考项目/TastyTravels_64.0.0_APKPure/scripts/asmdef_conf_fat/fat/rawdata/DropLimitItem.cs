using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class DropLimitItem : ProtoBaseProxy<DropLimitItem>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int LimitScore;

		public int ReplaceInto;

		public int ScoreId;

		public int XXX_RowIdentifier { get; set; }

		public DropLimitItem()
		{
		}

		public DropLimitItem(DropLimitItem other)
		{
		}

		public override DropLimitItem Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
