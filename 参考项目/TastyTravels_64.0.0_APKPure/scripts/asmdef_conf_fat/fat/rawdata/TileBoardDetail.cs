using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TileBoardDetail : ProtoBaseProxy<TileBoardDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardLength;

		public int BoardWidth;

		public int TileLength;

		public int TileWidth;

		public int XXX_RowIdentifier { get; set; }

		public TileBoardDetail()
		{
		}

		public TileBoardDetail(TileBoardDetail other)
		{
		}

		public override TileBoardDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
