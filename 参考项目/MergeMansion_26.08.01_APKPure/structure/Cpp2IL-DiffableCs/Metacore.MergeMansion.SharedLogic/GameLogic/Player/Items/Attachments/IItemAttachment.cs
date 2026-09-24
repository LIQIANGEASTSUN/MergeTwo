namespace GameLogic.Player.Items.Attachments;

[MetaSerializable]
public interface IItemAttachment
{

	public void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId) { }

}

