using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	[MetaSerializableDerived(1019)]
	public class PlayerHasBoardEventActive : TypedPlayerPropertyId<bool>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId RequiredEventBoard { get; set; }

		public override string DisplayName => null;

		public PlayerHasBoardEventActive()
		{
		}

		public PlayerHasBoardEventActive(MergeBoardId requiredEventBoard)
		{
		}

		public override bool GetTypedValueForPlayer(IPlayerModelBase player)
		{
			return false;
		}
	}
}
