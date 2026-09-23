using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	[MetaSerializableDerived(1006)]
	public class PlayerPropertyEventProgressReachedLevel : TypedPlayerPropertyId<int>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId MergeBoardId;

		public override string DisplayName => null;

		public PlayerPropertyEventProgressReachedLevel()
		{
		}

		public PlayerPropertyEventProgressReachedLevel(MergeBoardId mergeBoardId)
		{
		}

		public override int GetTypedValueForPlayer(IPlayerModelBase player)
		{
			return 0;
		}
	}
}
