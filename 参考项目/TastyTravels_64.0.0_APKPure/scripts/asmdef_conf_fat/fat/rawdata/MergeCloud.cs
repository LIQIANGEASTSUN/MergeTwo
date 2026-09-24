using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeCloud : ProtoBaseProxy<MergeCloud>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int CloudId;

		public static readonly FieldCodec<string> _repeated_coord_codec;

		public readonly RepeatedField<string> Coord;

		public static readonly FieldCodec<int> _repeated_rect_codec;

		public readonly RepeatedField<int> Rect;

		public int UnlockLevel;

		public int XXX_RowIdentifier { get; set; }

		public MergeCloud()
		{
		}

		public MergeCloud(MergeCloud other)
		{
		}

		public override MergeCloud Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
