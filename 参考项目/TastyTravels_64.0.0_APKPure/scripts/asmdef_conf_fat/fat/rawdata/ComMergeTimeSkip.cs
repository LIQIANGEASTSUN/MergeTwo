using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeTimeSkip : ProtoBaseProxy<ComMergeTimeSkip>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Seconds;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeTimeSkip()
		{
		}

		public ComMergeTimeSkip(ComMergeTimeSkip other)
		{
		}

		public override ComMergeTimeSkip Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
