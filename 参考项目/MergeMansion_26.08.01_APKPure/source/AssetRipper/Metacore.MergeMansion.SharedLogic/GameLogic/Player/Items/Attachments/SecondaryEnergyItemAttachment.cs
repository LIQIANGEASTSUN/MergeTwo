using System;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Attachments
{
	[MetaSerializableDerived(1)]
	[Obsolete("Replaced by AuxEnergyItemAttachment. Required for migration.")]
	public class SecondaryEnergyItemAttachment : IItemAttachment
	{
		public const int GainOnConsumeAmount = 1;

		public void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId)
		{
		}
	}
}
