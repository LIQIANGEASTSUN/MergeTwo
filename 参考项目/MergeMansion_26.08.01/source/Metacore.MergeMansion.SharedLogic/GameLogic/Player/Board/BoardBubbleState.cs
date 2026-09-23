using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board
{
	[MetaSerializable]
	public class BoardBubbleState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaTime LastBubbleAppearance { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime GraceChanceTimestamp { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public F32 GraceChance { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaTime BehaviourChanceTimestamp { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F32 BehaviourChance { get; set; }
	}
}
