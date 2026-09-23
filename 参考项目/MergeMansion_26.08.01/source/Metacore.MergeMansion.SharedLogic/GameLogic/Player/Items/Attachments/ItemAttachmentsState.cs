using System.Collections.Generic;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Attachments
{
	[MetaSerializable]
	public class ItemAttachmentsState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<IItemAttachment> Attachments { get; set; }

		public void ConsumeAttachments(IPlayer player, MergeBoardId mergeBoardId, int itemId)
		{
		}

		public void AddAttachment(IItemAttachment attachment)
		{
		}

		public int GetAttachmentCount<TAttachment>() where TAttachment : IItemAttachment
		{
			return 0;
		}
	}
}
