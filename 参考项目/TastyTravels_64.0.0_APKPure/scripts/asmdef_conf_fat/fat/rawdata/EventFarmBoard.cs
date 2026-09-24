using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFarmBoard : ProtoBaseProxy<EventFarmBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardSkinId;

		public int BoardTheme;

		public int Cost;

		public int EndRewardTheme;

		public int EndTheme;

		public int EventTheme;

		public int FinishTheme;

		public int GalleryTheme;

		public int GradeId;

		public int HelpTheme;

		public int LoadingTheme;

		public int TokenId;

		public int TokenUse;

		public int XXX_RowIdentifier { get; set; }

		public EventFarmBoard()
		{
		}

		public EventFarmBoard(EventFarmBoard other)
		{
		}

		public override EventFarmBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
