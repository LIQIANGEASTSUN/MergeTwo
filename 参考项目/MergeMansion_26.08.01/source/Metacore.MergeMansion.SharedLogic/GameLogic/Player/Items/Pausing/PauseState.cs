using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Pausing
{
	[MetaSerializable]
	public class PauseState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool DecayPaused { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public bool ActivationPaused { get; set; }
	}
}
