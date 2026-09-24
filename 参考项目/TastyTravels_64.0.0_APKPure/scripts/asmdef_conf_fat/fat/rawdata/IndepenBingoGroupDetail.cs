using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class IndepenBingoGroupDetail : ProtoBaseProxy<IndepenBingoGroupDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_includeBoard_codec;

		public readonly RepeatedField<int> IncludeBoard;

		public static readonly FieldCodec<int> _repeated_includeSpawner_codec;

		public readonly RepeatedField<int> IncludeSpawner;

		public int XXX_RowIdentifier { get; set; }

		public IndepenBingoGroupDetail()
		{
		}

		public IndepenBingoGroupDetail(IndepenBingoGroupDetail other)
		{
		}

		public override IndepenBingoGroupDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
