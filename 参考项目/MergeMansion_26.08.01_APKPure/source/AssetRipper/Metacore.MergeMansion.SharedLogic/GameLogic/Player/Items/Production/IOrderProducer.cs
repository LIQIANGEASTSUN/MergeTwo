using GameLogic.Player.Items.Order;
using GameLogic.Random;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializable]
	public interface IOrderProducer
	{
		int OrderCount { get; }

		OrderRequirements Produce(int orderIndex, IGenerationContext context);

		void AdvanceSequenceIndex(IGenerationContext context);
	}
}
