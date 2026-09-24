using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class BoardSkin : ProtoBaseProxy<BoardSkin>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<int> _repeated_categoryInfo_codec;

		public readonly RepeatedField<int> CategoryInfo;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardBasicInfo;

		public static readonly FieldCodec<int> _repeated_itemSkinId_codec;

		public readonly RepeatedField<int> ItemSkinId;

		public int XXX_RowIdentifier { get; set; }

		public BoardSkin()
		{
		}

		public BoardSkin(BoardSkin other)
		{
		}

		public override BoardSkin Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
