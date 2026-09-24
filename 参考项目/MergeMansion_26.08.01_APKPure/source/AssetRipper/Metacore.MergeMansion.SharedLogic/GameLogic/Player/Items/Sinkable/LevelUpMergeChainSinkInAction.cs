using GameLogic.MergeChains;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sinkable
{
	[MetaSerializableDerived(1)]
	public class LevelUpMergeChainSinkInAction : ISinkInAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeChainId MergeChainId { get; set; }

		public LevelUpMergeChainSinkInAction()
		{
		}

		public LevelUpMergeChainSinkInAction(MergeChainId mergeChainId)
		{
		}

		public void SinkIn(IPlayer player, MergeItem itemToSinkIn)
		{
		}
	}
}
