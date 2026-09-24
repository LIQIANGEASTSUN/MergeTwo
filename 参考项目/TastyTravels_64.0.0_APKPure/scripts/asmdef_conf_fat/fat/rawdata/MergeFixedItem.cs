using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeFixedItem : ProtoBaseProxy<MergeFixedItem>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_fixedOutputs_codec;

		public readonly RepeatedField<int> FixedOutputs;

		public int XXX_RowIdentifier { get; set; }

		public MergeFixedItem()
		{
		}

		public MergeFixedItem(MergeFixedItem other)
		{
		}

		public override MergeFixedItem Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
