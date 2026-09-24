using ContextualizedECS;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoard.Components
{
	public struct TimeLockComponent : IComponent
	{
		public double TimeLeft { get; set; }

		public double LockTime { get; set; }

		public bool IsCooldownBlocked { get; set; }

		public TimeLockGroup LockGroup { get; set; }

		public bool BeingUnlocked { get; set; }

		public bool CanBeUnlocked { get; set; }

		public ItemOrigin LockOrigins { get; set; }

		public bool ModifiedByStateLoad { get; set; }

		public bool Used { get; set; }

		public bool Locked => false;
	}
}
