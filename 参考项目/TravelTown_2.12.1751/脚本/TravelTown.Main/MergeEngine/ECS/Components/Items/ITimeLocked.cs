using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public interface ITimeLocked
	{
		double LockTime { get; }

		double TimeLeft { get; }

		bool Locked { get; }

		bool BeingUnlocked { get; }

		bool CanBeUnlocked { get; }

		bool Used { get; }

		TimeLockGroup LockGroup { get; }
	}
}
