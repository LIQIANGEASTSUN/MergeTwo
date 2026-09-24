using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeBox : ProtoBaseProxy<ComMergeBox>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int EnergyCost;

		public static readonly FieldCodec<int> _repeated_outputs_codec;

		public readonly RepeatedField<int> Outputs;

		public static readonly FieldCodec<int> _repeated_outputsDisplay_codec;

		public readonly RepeatedField<int> OutputsDisplay;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeBox()
		{
		}

		public ComMergeBox(ComMergeBox other)
		{
		}

		public override ComMergeBox Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
