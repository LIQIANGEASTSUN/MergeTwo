using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFight : ProtoBaseProxy<EventFight>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int AttackCritical;

		public static readonly FieldCodec<int> _repeated_attackDamage_codec;

		public readonly RepeatedField<int> AttackDamage;

		public int AttackId;

		public int AttackNum;

		public int BoardTheme;

		public static readonly FieldCodec<string> _repeated_colorHealth_codec;

		public readonly RepeatedField<string> ColorHealth;

		public int Cost;

		public int CycleTipTheme;

		public int EndTheme;

		public int ExpirePopup;

		public int GradeId;

		public int GridHealth;

		public int HelpTheme;

		public bool IsFinishEnable;

		public int LoadingTheme;

		public string Name;

		public int RewardTheme;

		public int StartTheme;

		public int Weapon;

		public int XXX_RowIdentifier { get; set; }

		public EventFight()
		{
		}

		public EventFight(EventFight other)
		{
		}

		public override EventFight Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
