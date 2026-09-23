using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Newtonsoft.Json;

namespace Merger.ItemsRelations.Data
{
	public class ItemRelationEdge
	{
		[JsonProperty("targetId")]
		public MergeItemWeakReference TargetId;

		[JsonProperty("relationType")]
		public ItemRelationType RelationType;
	}
}
