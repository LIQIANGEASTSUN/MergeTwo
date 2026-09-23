using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Attachments
{
	[MetaSerializableDerived(2)]
	public class AuxEnergyItemAttachment : IItemAttachment
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int EnergyAmount { get; set; }

		public AuxEnergyItemAttachment()
		{
		}

		public AuxEnergyItemAttachment(EnergyType energyType, int energyAmount)
		{
		}

		public void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId)
		{
		}
	}
}
