using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeJumpCD : ProtoBaseProxy<ComMergeJumpCD>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int Time;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeJumpCD()
		{
		}

		public ComMergeJumpCD(ComMergeJumpCD other)
		{
		}

		public override ComMergeJumpCD Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
