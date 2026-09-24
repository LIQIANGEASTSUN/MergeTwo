using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeChoiceBox : ProtoBaseProxy<ComMergeChoiceBox>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_actDiffRange_codec;

		public readonly RepeatedField<int> ActDiffRange;

		public int ItemNum;

		public static readonly FieldCodec<int> _repeated_orderItemPayDiffRange_codec;

		public readonly RepeatedField<int> OrderItemPayDiffRange;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeChoiceBox()
		{
		}

		public ComMergeChoiceBox(ComMergeChoiceBox other)
		{
		}

		public override ComMergeChoiceBox Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
