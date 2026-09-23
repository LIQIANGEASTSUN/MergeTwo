using ContextualizedECS;

namespace Merger.MergeBoard.Extensions
{
	public static class EntityLockExtension
	{
		public static bool IsBoxed(this Entity entity)
		{
			return false;
		}

		public static bool AnyMovementLock(this Entity entity)
		{
			return false;
		}

		public static bool OnlyMovementLock(this Entity entity)
		{
			return false;
		}

		public static bool FixedPosition(this Entity entity)
		{
			return false;
		}
	}
}
