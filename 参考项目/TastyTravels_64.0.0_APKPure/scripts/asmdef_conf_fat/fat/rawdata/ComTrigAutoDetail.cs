using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComTrigAutoDetail : ProtoBaseProxy<ComTrigAutoDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_outputs_codec;

		public readonly RepeatedField<int> Outputs;

		public int XXX_RowIdentifier { get; set; }

		public ComTrigAutoDetail()
		{
		}

		public ComTrigAutoDetail(ComTrigAutoDetail other)
		{
		}

		public override ComTrigAutoDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
