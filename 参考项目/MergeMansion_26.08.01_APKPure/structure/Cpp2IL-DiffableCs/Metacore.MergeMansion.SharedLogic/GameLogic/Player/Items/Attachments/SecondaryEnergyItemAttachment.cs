namespace GameLogic.Player.Items.Attachments;

[MetaSerializableDerived(1)]
[Obsolete("Replaced by AuxEnergyItemAttachment. Required for migration.")]
public class SecondaryEnergyItemAttachment : IItemAttachment
{
	public const int GainOnConsumeAmount = 1; //Field offset: 0x0

	public SecondaryEnergyItemAttachment() { }

	public override void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId) { }

}

