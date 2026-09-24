using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Attachments
{
	[MetaSerializable]
	public interface IItemAttachment
	{
		void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId);
	}
}
