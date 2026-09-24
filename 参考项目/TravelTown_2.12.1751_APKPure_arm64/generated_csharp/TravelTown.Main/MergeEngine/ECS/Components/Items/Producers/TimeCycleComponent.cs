using System;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components.Items.Producers
{
	[CacheAs(new Type[] { typeof(ITimeCycleComponent) })]
	public class TimeCycleComponent<TCapability, TSerializable, TLoadable> : RemoteLoadedComponent<TCapability, TSerializable, TLoadable>, ITimeCycleComponent, IComponentBase where TCapability : TimeCycleCapability where TSerializable : SerializedTimeCycleComponent, new() where TLoadable : SerializedTimeCycleComponent, new()
	{
		public const string Key = "timeCycle";

		public override string ComponentKey => null;

		public int ItemsPerSubCycle { get; }

		public int SubCycleTime { get; }

		public int SubCycles { get; }

		public int CycleDelay { get; }

		public int Capacity { get; }

		public TimeCycleState State { get; set; }

		public double CycleDelayLeft { get; set; }

		public double SubCycleDelayLeft { get; set; }

		public int CurrentSubCycle { get; set; }

		public int ItemsToProduce { get; set; }

		public int ItemsProducedPerSubCycle { get; set; }

		public bool ModifiedByStateLoad { get; set; }

		public bool ModifiedBySubCycle { get; set; }

		public bool IsCooldownBlocked { get; set; }

		public int TotalNumberOfCycles { get; set; }

		public bool ExceededLifetimeLimit => false;

		public int LifetimeSpawnedItemsLimit { get; }

		public bool LimitLifetimeSpawnedItems { get; }

		public int TotalSpawnedItemsInLifetime { get; set; }

		public double TimeUntilFullCapacity => 0.0;

		public TimeCycleComponent(TCapability capability, Entity entity)
			: base((TCapability)null, (Entity)null)
		{
		}

		public override void LoadComponent(TLoadable componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
