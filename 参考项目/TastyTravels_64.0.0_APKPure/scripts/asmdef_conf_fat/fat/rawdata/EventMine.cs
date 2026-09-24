using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMine : ProtoBaseProxy<EventMine>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BannerTheme;

		public int BoardSkinId;

		public int BoardTheme;

		public static readonly FieldCodec<int> _repeated_bonusItemMax_codec;

		public readonly RepeatedField<int> BonusItemMax;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public int GalleryTheme;

		public int GradeId;

		public int HandbookTheme;

		public int HelpTheme;

		public int LoadingTheme;

		public int MilestoneTheme;

		public int ThemeTip;

		public int TokenId;

		public static readonly FieldCodec<int> _repeated_tokenMilestoneId_codec;

		public readonly RepeatedField<int> TokenMilestoneId;

		public int XXX_RowIdentifier { get; set; }

		public EventMine()
		{
		}

		public EventMine(EventMine other)
		{
		}

		public override EventMine Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
