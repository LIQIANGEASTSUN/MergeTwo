using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishBoard : ProtoBaseProxy<EventWishBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardSkinId;

		public int BoardTheme;

		public static readonly FieldCodec<int> _repeated_bonusItemMax_codec;

		public readonly RepeatedField<int> BonusItemMax;

		public int CongratulateTheme;

		public int Cost;

		public int CycleBoxTheme;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public int GalleryThemeNew;

		public int GalleyTheme;

		public int GradeId;

		public int HelpTheme;

		public int LoadingTheme;

		public int StepRewardTheme;

		public int TipTheme;

		public int XXX_RowIdentifier { get; set; }

		public EventWishBoard()
		{
		}

		public EventWishBoard(EventWishBoard other)
		{
		}

		public override EventWishBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
