using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FrozenItem : ProtoBaseProxy<FrozenItem>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Cost;

		public int EventGroup;

		public int MaxFrozenItem;

		public int XXX_RowIdentifier { get; set; }

		public FrozenItem()
		{
		}

		public FrozenItem(FrozenItem other)
		{
		}

		public override FrozenItem Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
