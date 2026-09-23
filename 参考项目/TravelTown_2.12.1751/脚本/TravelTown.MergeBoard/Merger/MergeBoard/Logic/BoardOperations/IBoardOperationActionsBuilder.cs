using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.Services.Backend.Data.Payload;
using Merger.MergeBoard.Data.Payload;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public interface IBoardOperationActionsBuilder
	{
		IBoardOperationActionsBuilder SetAction(Entity entity, string destination = null);

		IBoardOperationActionsBuilder RemoveAction(Entity entity, string destination = null);

		IBoardOperationActionsBuilder UpdateAction(Entity entity, string destination = null);

		IBoardOperationActionsBuilder WithExtraData(ExtraData extraData);

		List<MergeBoardItemNotificationData> Build();
	}
}
