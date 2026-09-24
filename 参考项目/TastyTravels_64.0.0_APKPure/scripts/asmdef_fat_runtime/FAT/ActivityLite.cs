using IFix.Core;
using fat.rawdata;

namespace FAT
{
	public abstract class ActivityLite
	{
		public const int FromEventTime = 0;

		public const int FromEventTrigger = 1;

		public const int FlexEventTime = 10;

		public const int FlexEventTrigger = 11;

		public const int FromInternal = 100;

		public static ActivityLite Default { get; }

		public virtual int Id { get; set; }

		public (int, int) Id2 => default((int, int));

		public virtual EventType Type { get; set; }

		public virtual int Param { get; set; }

		public int From { get; set; }

		public int OpenCount { get; set; }

		public virtual long StartTS { get; set; }

		public virtual long EndTS { get; set; }

		public abstract bool Valid { get; }

		public virtual bool WillRecord { get; set; }

		public static bool Exist((int, int) id_)
		{
			return false;
		}

		public static (bool, string) ReadyToCreate((int, int) id_, in ActivityGroup.Option option_, out LiteInfo info_)
		{
			info_ = default(LiteInfo);
			return default((bool, string));
		}

		public static (bool, string) TryCreate(LiteInfo info_, EventType type_, out ActivityLite lite_)
		{
			lite_ = null;
			return default((bool, string));
		}

		public static ActivityLite TrySetup(ActivityLite lite_, LiteInfo info_, EventType type_, bool replace_ = false)
		{
			return null;
		}

		public static (bool, string) CheckType(ActivityLite l_, EventType t_)
		{
			return default((bool, string));
		}

		[IDTag(1)]
		public static int IdCompact(IGiftPackLike acti_)
		{
			return 0;
		}

		[IDTag(0)]
		public static int IdCompact(int id_, int from_)
		{
			return 0;
		}

		public static (int, int) IdUnwrap(int id_)
		{
			return default((int, int));
		}

		[IDTag(1)]
		public static string InfoCompact(IGiftPackLike acti_)
		{
			return null;
		}

		[IDTag(0)]
		public static string InfoCompact(int id_, int from_, EventType type_, string sub_)
		{
			return null;
		}

		public static (bool, int, int, EventType, string) InfoUnwrap(string s_)
		{
			return default((bool, int, int, EventType, string));
		}

		public virtual LiteInfo ToInfo()
		{
			return default(LiteInfo);
		}

		public abstract void Setup(LiteInfo info_, EventType type_);

		public virtual bool Match(LiteInfo info_)
		{
			return false;
		}

		public abstract (long, long) SetupTS(long sTS_, long eTS_);

		public abstract void Clear();

		public ActivityLite()
		{
		}
	}
}
