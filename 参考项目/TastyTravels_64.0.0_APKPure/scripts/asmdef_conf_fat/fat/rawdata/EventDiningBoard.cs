using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventDiningBoard : ProtoBaseProxy<EventDiningBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardSkinId;

		public int BuildCompleteTheme;

		public int ChestTheme;

		public int Cost;

		public int EndTheme;

		public int EventGroup;

		public int ExpireTheme;

		public int GalleryCompleteTheme;

		public int GalleryTheme;

		public int HelpTheme;

		public int LoadingTheme;

		public int MainTheme;

		public int MilestoneTheme;

		public int StartTheme;

		public int XXX_RowIdentifier { get; set; }

		public EventDiningBoard()
		{
		}

		public EventDiningBoard(EventDiningBoard other)
		{
		}

		public override EventDiningBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
