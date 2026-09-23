using DysonCore.DynamicJson.EnhancedEnumParser;

namespace Merger.ItemsRelations.Data
{
	public enum ItemRelationType
	{
		[EnumMember.Fallback]
		Unknown = 0,
		Merge = 1,
		Transform = 2,
		Previous = 3,
		Consume = 4,
		Chain = 5,
		Produced = 6,
		Spawned = 7,
		SpawnedByUsesExpend = 8,
		TransformationByUsesExpend = 9,
		ConsumedToProduced = 10
	}
}
