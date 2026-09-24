using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeToolSource : ProtoBaseProxy<ComMergeToolSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Capacity;

		public static readonly FieldCodec<int> _repeated_dropInfo_codec;

		public readonly RepeatedField<int> DropInfo;

		public static readonly MapField<int, int>.Codec _map_outputInfo_codec;

		public readonly MapField<int, int> OutputInfo;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeToolSource()
		{
		}

		public ComMergeToolSource(ComMergeToolSource other)
		{
		}

		public override ComMergeToolSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
