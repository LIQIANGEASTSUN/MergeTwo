using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializableDerived(1)]
	public class BubbleProgressionEventProgressBonus : IBubbleBonus
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ProgressionEventId EventId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Progress { get; set; }

		public BubbleProgressionEventProgressBonus()
		{
		}

		public BubbleProgressionEventProgressBonus(ProgressionEventId eventId, int progress)
		{
		}
	}
}
