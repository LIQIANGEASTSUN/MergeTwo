using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeMixCost : ProtoBaseProxy<MergeMixCost>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_mixInfo_codec;

		public readonly RepeatedField<int> MixInfo;

		public static readonly MapField<int, int>.Codec _map_outputs_codec;

		public readonly MapField<int, int> Outputs;

		public int XXX_RowIdentifier { get; set; }

		public MergeMixCost()
		{
		}

		public MergeMixCost(MergeMixCost other)
		{
		}

		public override MergeMixCost Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
