using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescue : ProtoBaseProxy<EventRescue>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardSkinId;

		public int Cost;

		public int EndTheme;

		public int EventGroup;

		public int ExpireTheme;

		public int GalleryTheme;

		public int HelpTheme;

		public int JumpTheme;

		public int LoadingTheme;

		public int MainTheme;

		public int MilestoneTheme;

		public int RescueItem;

		public int SaveTheme;

		public int StartTheme;

		public static readonly FieldCodec<int> _repeated_targetItem_codec;

		public readonly RepeatedField<int> TargetItem;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public EventRescue()
		{
		}

		public EventRescue(EventRescue other)
		{
		}

		public override EventRescue Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
