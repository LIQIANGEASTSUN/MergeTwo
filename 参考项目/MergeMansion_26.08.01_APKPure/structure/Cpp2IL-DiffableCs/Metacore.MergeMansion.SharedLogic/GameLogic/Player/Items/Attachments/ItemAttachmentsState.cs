namespace GameLogic.Player.Items.Attachments;

[MetaSerializable]
public class ItemAttachmentsState
{
	[CompilerGenerated]
	private List<IItemAttachment> <Attachments>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public List<IItemAttachment> Attachments
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public ItemAttachmentsState() { }

	public void AddAttachment(IItemAttachment attachment) { }

	public void ConsumeAttachments(IPlayer player, MergeBoardId mergeBoardId, int itemId) { }

	[CompilerGenerated]
	public List<IItemAttachment> get_Attachments() { }

	public int GetAttachmentCount() { }

	[CompilerGenerated]
	public void set_Attachments(List<IItemAttachment> value) { }

}

