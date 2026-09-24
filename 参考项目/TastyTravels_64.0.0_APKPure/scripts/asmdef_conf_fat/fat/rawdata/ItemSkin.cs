using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ItemSkin : ProtoBaseProxy<ItemSkin>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string BlackIcon;

		public int CostTokenId;

		public static readonly FieldCodec<string> _repeated_coverPng_codec;

		public readonly RepeatedField<string> CoverPng;

		public string DisplayRes;

		public string Icon;

		public string Image;

		public int ItemId;

		public int XXX_RowIdentifier { get; set; }

		public ItemSkin()
		{
		}

		public ItemSkin(ItemSkin other)
		{
		}

		public override ItemSkin Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
