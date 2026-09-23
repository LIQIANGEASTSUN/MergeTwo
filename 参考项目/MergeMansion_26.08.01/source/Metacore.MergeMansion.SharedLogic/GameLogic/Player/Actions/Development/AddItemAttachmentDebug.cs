using GameLogic.Player.Board;
using GameLogic.Player.Items.Attachments;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21180)]
	[DevelopmentOnlyAction]
	public class AddItemAttachmentDebug : PlayerAction
	{
		public MergeBoardId BoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public IItemAttachment ItemAttachment { get; set; }

		public AddItemAttachmentDebug()
		{
		}

		public AddItemAttachmentDebug(MergeBoardId boardId, Coordinate coordinate, IItemAttachment itemAttachment)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
