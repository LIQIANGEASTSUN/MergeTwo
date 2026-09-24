using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TileBingoGroupDetail : ProtoBaseProxy<TileBingoGroupDetail>, IRowIdentifier<int>
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

		public TileBingoGroupDetail()
		{
		}

		public TileBingoGroupDetail(TileBingoGroupDetail other)
		{
		}

		public override TileBingoGroupDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
