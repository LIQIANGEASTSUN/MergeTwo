using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComTrigAutoSource : ProtoBaseProxy<ComTrigAutoSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int CostTokenId;

		public int CostTokenNum;

		public static readonly FieldCodec<string> _repeated_coverPng_codec;

		public readonly RepeatedField<string> CoverPng;

		public int DieInto;

		public FeatureEntry FeatureEntry;

		public static readonly FieldCodec<int> _repeated_triggerInfo_codec;

		public readonly RepeatedField<int> TriggerInfo;

		public int XXX_RowIdentifier { get; set; }

		public ComTrigAutoSource()
		{
		}

		public ComTrigAutoSource(ComTrigAutoSource other)
		{
		}

		public override ComTrigAutoSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
