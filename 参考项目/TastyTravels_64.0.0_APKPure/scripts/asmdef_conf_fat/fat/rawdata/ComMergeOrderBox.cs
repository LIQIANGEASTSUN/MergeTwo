using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeOrderBox : ProtoBaseProxy<ComMergeOrderBox>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_boxDetailId_codec;

		public readonly RepeatedField<int> BoxDetailId;

		public int Time;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeOrderBox()
		{
		}

		public ComMergeOrderBox(ComMergeOrderBox other)
		{
		}

		public override ComMergeOrderBox Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
