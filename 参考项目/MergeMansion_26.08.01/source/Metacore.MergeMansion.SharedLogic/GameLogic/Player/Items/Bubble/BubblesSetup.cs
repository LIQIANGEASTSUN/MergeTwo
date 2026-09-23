using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializable]
	public class BubblesSetup : IGameConfigData<BubblesSetupId>, IGameConfigData, IHasGameConfigKey<BubblesSetupId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public BubblesSetupId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IBubbleLogic Logic { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public BubblesSetup()
		{
		}

		public BubblesSetup(BubblesSetupId configKey, IBubbleLogic logic, int experimentPriority)
		{
		}
	}
}
