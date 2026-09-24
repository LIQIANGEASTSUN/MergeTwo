using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Attachments
{
	[MetaSerializable]
	public class ItemLeaderboardState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool ScoreClaimed { get; set; }
	}
}
