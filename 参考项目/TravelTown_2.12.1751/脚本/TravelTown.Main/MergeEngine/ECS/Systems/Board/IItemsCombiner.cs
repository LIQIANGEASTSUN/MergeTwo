using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems.Board
{
	public interface IItemsCombiner
	{
		public delegate void OnItemsCombined(bool success, bool shouldSelectItemAtTarget, bool shouldVerifyMerge = false);

		bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem);

		bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, OnItemsCombined callback);

		void ResetCombine();
	}
}
