using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.Services.Backend.Data.Payload;
using Merger.MergeBoard.Data.Payload;
using Merger.MergeBoard.Factories;
using Zenject;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public class BoardOperationActionsBuilder : IBoardOperationActionsBuilder
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardItemNotificationDataFactory _mergeBoardItemNotificationDataFactory;

		[NonSerialized]
		public readonly List<MergeBoardItemNotificationData> _payloadItems;

		[NonSerialized]
		public MergeBoardItemNotificationData _lastAddedItem;

		public IBoardOperationActionsBuilder SetAction(Entity entity, string destination = null)
		{
			return null;
		}

		public IBoardOperationActionsBuilder RemoveAction(Entity entity, string destination = null)
		{
			return null;
		}

		public IBoardOperationActionsBuilder UpdateAction(Entity entity, string destination = null)
		{
			return null;
		}

		public IBoardOperationActionsBuilder WithExtraData(ExtraData extraData)
		{
			return null;
		}

		public List<MergeBoardItemNotificationData> Build()
		{
			return null;
		}

		public IBoardOperationActionsBuilder AddAction(Entity entity, string action, string destination)
		{
			return null;
		}
	}
}
