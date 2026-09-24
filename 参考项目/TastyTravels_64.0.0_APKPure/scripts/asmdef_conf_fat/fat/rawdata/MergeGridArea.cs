using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeGridArea : ProtoBaseProxy<MergeGridArea>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public static readonly FieldCodec<int> _repeated_grid_codec;

		public readonly RepeatedField<int> Grid;

		public string Prefab;

		public static readonly FieldCodec<int> _repeated_shape_codec;

		public readonly RepeatedField<int> Shape;

		public int XXX_RowIdentifier { get; set; }

		public MergeGridArea()
		{
		}

		public MergeGridArea(MergeGridArea other)
		{
		}

		public override MergeGridArea Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
