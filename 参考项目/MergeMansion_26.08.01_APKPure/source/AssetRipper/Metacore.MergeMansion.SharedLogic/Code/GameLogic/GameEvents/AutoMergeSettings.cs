using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class AutoMergeSettings : GameConfigKeyValue<AutoMergeSettings>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool DefaultEnabledState { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public float AutoMergeInterval { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public float AutoMergeSpawnCooldown { get; set; }
	}
}
