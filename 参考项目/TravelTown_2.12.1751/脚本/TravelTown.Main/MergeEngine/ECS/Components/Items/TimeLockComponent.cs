using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components.Items
{
	public class TimeLockComponent : RemoteLoadedComponent<TimeLockCapability, SerializedTimeLockComponent, SerializedTimeLockComponent>, ITimeLocked
	{
		public const string Key = "timeLock";

		public override string ComponentKey => null;

		public double TimeLeft { get; set; }

		public double LockTime { get; }

		public TimeLockGroup LockGroup { get; }

		public bool Locked => false;

		public bool BeingUnlocked { get; set; }

		public bool CanBeUnlocked { get; set; }

		public bool Used { get; set; }

		public ItemOrigin LockOrigins { get; }

		public bool ModifiedByStateLoad { get; set; }

		public bool IsCooldownBlocked { get; set; }

		public TimeLockComponent(TimeLockCapability capability, Entity entity)
			: base((TimeLockCapability)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(SerializedTimeLockComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
