using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeActiveSource : ProtoBaseProxy<ComMergeActiveSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Drop;

		public bool IsScaleAnim;

		public int Limit;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeActiveSource()
		{
		}

		public ComMergeActiveSource(ComMergeActiveSource other)
		{
		}

		public override ComMergeActiveSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
