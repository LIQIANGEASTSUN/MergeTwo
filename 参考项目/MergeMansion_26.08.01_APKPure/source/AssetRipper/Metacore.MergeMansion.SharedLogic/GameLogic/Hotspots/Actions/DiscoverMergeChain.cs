using System.Runtime.Serialization;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using Metaplay.Core.Model;

namespace GameLogic.Hotspots.Actions
{
	[MetaSerializableDerived(7)]
	public class DiscoverMergeChain : IDirectorAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeChainId MergeChainId { get; set; }

		[IgnoreDataMember]
		public bool IsVisualAction => false;

		public DiscoverMergeChain()
		{
		}

		public DiscoverMergeChain(MergeChainId mergeChainId)
		{
		}

		public void Run(IPlayer playerModel, IDirectorActionContext actionContext)
		{
		}
	}
}
