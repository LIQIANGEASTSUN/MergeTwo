using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.State;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace MergeEngine.ECS.Components.Items
{
	public class IdComponent : RemoteLoadedComponent<IdCapability, SerializedIdComponent, ItemPayloadBase>, IIdComponent
	{
		public const string ID = "id";

		public ItemOrigin Origin;

		public override string ComponentKey => null;

		public string Uuid => null;

		public string Id { get; set; }

		public string UUId { get; set; }

		public long MergedTimestamp { get; set; }

		public long CreatedTimestamp { get; set; }

		public long QueueAddedTimestamp { get; set; }

		public bool SpawnedByTimeLimited { get; set; }

		public IdComponent(IdCapability capability, Entity entity)
			: base((IdCapability)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(ItemPayloadBase componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
