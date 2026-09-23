using ContextualizedECS;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Items;

namespace Merger.MergeBoard.Components
{
	public struct IdComponent : IIdComponent, IComponent
	{
		public string Id { get; set; }

		public string Uuid { get; set; }

		public long CreatedTimestamp { get; set; }

		public long MergedTimestamp { get; set; }

		public ItemOrigin Origin { get; set; }

		public long QueueAddedTimestamp { get; set; }

		public IdComponent(string id, ItemOrigin origin)
		{
			Id = null;
			Uuid = null;
			CreatedTimestamp = 0L;
			MergedTimestamp = 0L;
			Origin = default(ItemOrigin);
			QueueAddedTimestamp = 0L;
		}
	}
}
