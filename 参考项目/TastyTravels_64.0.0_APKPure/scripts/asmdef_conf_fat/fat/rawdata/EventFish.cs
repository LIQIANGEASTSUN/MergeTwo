using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFish : ProtoBaseProxy<EventFish>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardTheme;

		public static readonly FieldCodec<int> _repeated_check_codec;

		public readonly RepeatedField<int> Check;

		public int Cost;

		public int EndTheme;

		public int ExpirePopup;

		public int FishCollectedTheme;

		public int FishRepeatNum;

		public int FishRod;

		public int FishTipTheme;

		public int GradeId;

		public int HelpTheme;

		public bool IsFinishEnable;

		public int LoadingTheme;

		public int MilestoneTheme;

		public string Name;

		public int NewFishTheme;

		public int StartTheme;

		public int TokenId;

		public int XXX_RowIdentifier { get; set; }

		public EventFish()
		{
		}

		public EventFish(EventFish other)
		{
		}

		public override EventFish Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
