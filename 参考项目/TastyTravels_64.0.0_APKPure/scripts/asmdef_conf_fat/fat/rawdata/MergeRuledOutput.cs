using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeRuledOutput : ProtoBaseProxy<MergeRuledOutput>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_outputsFixed_codec;

		public readonly RepeatedField<int> OutputsFixed;

		public static readonly FieldCodec<int> _repeated_outputsFixedTime_codec;

		public readonly RepeatedField<int> OutputsFixedTime;

		public int XXX_RowIdentifier { get; set; }

		public MergeRuledOutput()
		{
		}

		public MergeRuledOutput(MergeRuledOutput other)
		{
		}

		public override MergeRuledOutput Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
