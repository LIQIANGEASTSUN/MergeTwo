namespace MergePuzzle
{
	public interface INonSpawnableBoardItemHandler : IFeatureHandler
	{
		void OnNonSpawnableBoardItemClick(ItemInfo itemInfo);
	}
}
