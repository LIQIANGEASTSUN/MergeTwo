using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ItemReplace : ProtoBaseProxy<ItemReplace>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ReplaceInto;

		public int XXX_RowIdentifier { get; set; }

		public ItemReplace()
		{
		}

		public ItemReplace(ItemReplace other)
		{
		}

		public override ItemReplace Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
