using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public class ItemRewardsState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool RewardsClaimed { get; set; }
	}
}
