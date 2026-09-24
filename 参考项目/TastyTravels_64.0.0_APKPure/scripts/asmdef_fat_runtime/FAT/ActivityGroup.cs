using System;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public abstract class ActivityGroup
	{
		public readonly ref struct Option
		{
			public readonly bool flex;

			public readonly bool searchAB;

			public readonly Action<ActivityLike> Create;

			public Option(bool flex_ = false, bool searchAB_ = false, Action<ActivityLike> Create_ = null)
			{
				flex = false;
				searchAB = false;
				Create = null;
			}

			public void Apply(ActivityLike acti_)
			{
			}
		}

		public Activity Activity => null;

		public virtual (bool, string) TryAdd(Activity activity_, (int, int) id_, EventType type_, ActivityInstance data_, in Option option_)
		{
			return default((bool, string));
		}

		public virtual (bool, string) TryAddTo(Action<ActivityLike> Add_, Activity activity_, (int, int) id_, EventType type_, ActivityInstance data_, in Option option_)
		{
			return default((bool, string));
		}

		public virtual (bool, string) TryCreateByType(Activity activity_, (int, int) id_, EventType type_, LiteInfo lite_, ActivityInstance data_, in Option option_, out ActivityLike acti_)
		{
			acti_ = null;
			return default((bool, string));
		}

		public virtual (bool, string) CreateCheck(EventType type_, LiteInfo lite_)
		{
			return default((bool, string));
		}

		public virtual ActivityLike Create(EventType type_, ActivityLite lite_)
		{
			return null;
		}

		public virtual (bool, string) Filter(int filter_, (int, int) id_, EventType type_)
		{
			return default((bool, string));
		}

		public virtual (bool, string) FilterOne((int, int) id_, EventType type_)
		{
			return default((bool, string));
		}

		public virtual void End(Activity activity_, ActivityLike acti_, bool expire_)
		{
		}

		public ActivityGroup()
		{
		}
	}
}
