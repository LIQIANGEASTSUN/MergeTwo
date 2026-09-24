using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMineCart : ProtoBaseProxy<EventMineCart>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BannerTheme;

		public int BoardTheme;

		public int BookTheme;

		public static readonly FieldCodec<string> _repeated_chatContent_codec;

		public readonly RepeatedField<string> ChatContent;

		public int Cost;

		public int Detail;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public static readonly FieldCodec<int> _repeated_handBook_codec;

		public readonly RepeatedField<int> HandBook;

		public int HelpTheme;

		public int LoadingTheme;

		public static readonly FieldCodec<int> _repeated_specialItem_codec;

		public readonly RepeatedField<int> SpecialItem;

		public int SpriteItemId;

		public int XXX_RowIdentifier { get; set; }

		public EventMineCart()
		{
		}

		public EventMineCart(EventMineCart other)
		{
		}

		public override EventMineCart Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
