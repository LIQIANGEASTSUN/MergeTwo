using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializable]
	public class XpState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int Experience { get; set; }
	}
}
