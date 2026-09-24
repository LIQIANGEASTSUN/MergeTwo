using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.State;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace MergeEngine.ECS.Components.Items
{
	public class CombiningComponent : RemoteLoadedComponent<InteractionCapability, SerializedFeedingComponent, List<ItemPayloadBase>>
	{
		public const string Key = "pot";

		public override string ComponentKey => null;

		public List<ItemPayloadBase> ConsumedItems { get; set; }

		public List<Combination> Combinations { get; }

		public bool ReadyToProduce { get; set; }

		public bool IsProducing { get; set; }

		public bool BoardIsFullShown { get; set; }

		public CombiningComponent(InteractionCapability capability, Entity entity)
			: base((InteractionCapability)default(_00210), (Entity)null)
		{
		}

		public override void OnBeforeSerialize()
		{
		}

		public override void LoadComponent(List<ItemPayloadBase> componentData)
		{
		}
	}
}
