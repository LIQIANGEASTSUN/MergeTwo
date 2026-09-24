using Code.GameLogic.GameEvents;

namespace GameLogic.Player.Items.Collectable
{
	public static class CollectionContextExtensions
	{
		public static bool TryGetMysteryMachine(this ICollectionContext collectionContext, out MysteryMachine machine)
		{
			machine = null;
			return false;
		}
	}
}
