using System;
using IFix.Core;

namespace FAT
{
	public static class ActivityTransit
	{
		public static bool fromMerge;

		public static UIResource loading;

		public static ActivityVisual visual;

		[IDTag(1)]
		public static void Enter(ActivityLike acti_, VisualRes loading_, UIResAlt ui_, Action afterEntered = null)
		{
		}

		[IDTag(0)]
		public static void Enter(ActivityLike acti_, UIResource loading_, UIResAlt ui_, ActivityVisual visual_ = null, Action afterEntered = null)
		{
		}

		public static void Exit(ActivityLike acti_, UIResource ui_, Action afterFadeIn = null, bool ignoreFrom = false)
		{
		}
	}
}
