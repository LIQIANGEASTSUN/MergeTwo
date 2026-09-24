using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;

namespace Merger.Meteor.Compatibility
{
	public interface IMeteorService
	{
		bool TryDropMeteor(PositionComponent mergedItemPosition, MergeComponent firstItem, MergeComponent secondItem, Entity mergedItemEntity, out Entity meteorEntity);
	}
}
