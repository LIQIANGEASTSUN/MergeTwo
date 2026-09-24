using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeSpecialBox : ProtoBaseProxy<ComMergeSpecialBox>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_actDiffRange_codec;

		public readonly RepeatedField<int> ActDiffRange;

		public int LimitCount;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeSpecialBox()
		{
		}

		public ComMergeSpecialBox(ComMergeSpecialBox other)
		{
		}

		public override ComMergeSpecialBox Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
