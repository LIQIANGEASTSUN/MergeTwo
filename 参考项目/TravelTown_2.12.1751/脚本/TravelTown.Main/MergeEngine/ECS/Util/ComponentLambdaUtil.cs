using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Util
{
	public static class ComponentLambdaUtil
	{
		public static bool MatchesIdAndUnlocked(IComponentBase component, string uniqueId)
		{
			return false;
		}

		public static bool AreSameType(IComponentBase component1, IComponentBase component2)
		{
			return false;
		}

		public static bool UnlockedAndUnboxed(IComponentBase component)
		{
			return false;
		}

		public static bool IsBasicItem(IComponentBase component)
		{
			return false;
		}

		public static bool MergingBlockedByLock(IComponentBase component)
		{
			return false;
		}

		public static bool IsTimeLocked(IComponentBase component)
		{
			return false;
		}
	}
}
