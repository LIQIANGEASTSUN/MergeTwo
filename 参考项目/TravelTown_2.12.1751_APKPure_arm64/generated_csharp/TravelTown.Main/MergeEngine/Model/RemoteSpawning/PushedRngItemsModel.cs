using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.ECS.Systems;
using Merger.LiveOps.Events.ECS.System;
using Merger.Services.Backend.WebSocket.RemoteSpawning;
using Zenject;

namespace MergeEngine.Model.RemoteSpawning
{
	public class PushedRngItemsModel : ModelBase, IPushedRngItemsModel
	{
		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[NonSerialized]
		public IList<PushedRngItem> contextPushedItems;

		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		public LiveOpsEventSystem LiveOpsEventSystem => null;

		public void AddPushItem(PushedItem pushedItem)
		{
		}

		public PushedRngItem ConvertToPushedItem(string itemId, string eventId, string boardEventId)
		{
			return null;
		}

		public void AddPushedItem(PushedRngItem newPushedRngItem)
		{
		}

		public void ClearCache(string eventId)
		{
		}

		public PushedItemNotificationData FindBoardEventItem(string boardEventId)
		{
			return null;
		}

		public PushedItemNotificationData FindItem()
		{
			return null;
		}

		public PushedItemNotificationData HandleFoundItem(PushedRngItem rngItem)
		{
			return null;
		}
	}
}
