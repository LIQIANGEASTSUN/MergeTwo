using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMonopoly : ProtoBaseProxy<EventMonopoly>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Cost;

		public int CycleTipTheme;

		public int DiceId;

		public static readonly FieldCodec<int> _repeated_diceStep_codec;

		public readonly RepeatedField<int> DiceStep;

		public int EndTheme;

		public int EventGroup;

		public int ExpireTheme;

		public int HelpTheme;

		public bool IsFinishEnable;

		public int LoadingTheme;

		public int MainTheme;

		public int MilestoneTheme;

		public int StartTheme;

		public int XXX_RowIdentifier { get; set; }

		public EventMonopoly()
		{
		}

		public EventMonopoly(EventMonopoly other)
		{
		}

		public override EventMonopoly Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
