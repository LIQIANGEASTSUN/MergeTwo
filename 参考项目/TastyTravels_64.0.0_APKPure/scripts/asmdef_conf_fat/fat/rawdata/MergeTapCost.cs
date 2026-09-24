using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeTapCost : ProtoBaseProxy<MergeTapCost>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Cost;

		public static readonly MapField<int, int>.Codec _map_outputs_codec;

		public readonly MapField<int, int> Outputs;

		public int XXX_RowIdentifier { get; set; }

		public MergeTapCost()
		{
		}

		public MergeTapCost(MergeTapCost other)
		{
		}

		public override MergeTapCost Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
