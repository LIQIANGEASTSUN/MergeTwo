using MergePuzzle.Locations;
using MergePuzzle.Tutorial.Core;

namespace MergePuzzle.Item.Creation
{
	public class ItemCreationHandler : LocationHandler
	{
		public bool NewItem { get; set; }

		public TutorialIndex TutorialIndex { get; set; }

		public bool TutorialActive => false;

		public ItemController ItemController { get; set; }

		public static ItemCreationHandler GetItemCreationHandler()
		{
			return null;
		}

		public ItemCreationHandler SetBubble()
		{
			return null;
		}

		public ItemCreationHandler SetInventory()
		{
			return null;
		}

		public ItemCreationHandler SetTrash()
		{
			return null;
		}

		public ItemCreationHandler SetPerishableSpawnerLocation()
		{
			return null;
		}

		public ItemCreationHandler SetJellyLocation()
		{
			return null;
		}

		public ItemCreationHandler SetLevelBoosterLocation()
		{
			return null;
		}

		public ItemCreationHandler SetSplitSpawnItemIndex(int itemIndex)
		{
			return null;
		}

		public ItemCreationHandler SetRewardsAreaLocation()
		{
			return null;
		}

		public ItemCreationHandler SetMerge()
		{
			return null;
		}

		public ItemCreationHandler SetRecurringEventSpawner()
		{
			return null;
		}
	}
}
