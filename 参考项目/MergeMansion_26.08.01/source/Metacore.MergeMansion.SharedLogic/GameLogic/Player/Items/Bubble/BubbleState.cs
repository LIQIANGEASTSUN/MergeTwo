using System;
using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializable]
	public sealed class BubbleState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaTime BubbleEndTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[Obsolete("Bonuses should be used instead")]
		public IBubbleBonus Bonus { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<IBubbleBonus> Bonuses { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public BubbleVariationId VariationId { get; set; }

		public BubbleState()
		{
		}

		public BubbleState(IPlayer player, IBubbleFeatures bubbleFeatures, MetaTime startTime, List<IBubbleBonus> bonuses)
		{
		}
	}
}
