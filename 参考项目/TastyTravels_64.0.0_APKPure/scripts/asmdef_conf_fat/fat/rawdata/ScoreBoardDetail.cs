using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ScoreBoardDetail : ProtoBaseProxy<ScoreBoardDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_boardRowId_codec;

		public readonly RepeatedField<int> BoardRowId;

		public int XXX_RowIdentifier { get; set; }

		public ScoreBoardDetail()
		{
		}

		public ScoreBoardDetail(ScoreBoardDetail other)
		{
		}

		public override ScoreBoardDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
