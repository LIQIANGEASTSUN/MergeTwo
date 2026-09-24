using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Pausing
{
	[MetaSerializable]
	public class PauseFeatures
	{
		public static readonly PauseFeatures NoPause;

		public static readonly PauseFeatures OnlyDecayCanBePaused;

		public static readonly PauseFeatures OnlyActivationCanBePaused;

		public static readonly PauseFeatures BoosterWithPause;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool SupportsPause { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public bool DecayCanBePaused { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool ActivationCanBePaused { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool BoostingCanBePaused { get; set; }
	}
}
