using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.Configuration;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using Merger.Boosters.Declarations.Models;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.LiveOps.Events.ECS.System;
using Merger.PendingRewarders.Services.Interfaces;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class BoardQueueStateSystem<TState> : StateSystemBase<TState> where TState : BoardQueueBackendState
	{
		[InjectSystem]
		[NonSerialized]
		public BoardQueueSystem _boardQueueSystem;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[Inject]
		[NonSerialized]
		public IItemsEntityService _itemsEntityService;

		[Inject]
		[NonSerialized]
		public IPendingRewardsService _pendingRewardsService;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IBoardQueueExclusionModel _boardQueueExclusionModel;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void OnBoardSwitched()
		{
		}

		public override void LoadState(TState boardQueueBackendState)
		{
		}

		public List<QueuedItem> ConvertToQueuedItem(List<BackendBoardQueueItem> backendBoardQueueItems)
		{
			return null;
		}

		public Entity GetItemEntityData(IItem mergeItem, ItemPayloadBase itemData)
		{
			return null;
		}

		public virtual bool ShouldLoadStateForDomain()
		{
			return false;
		}
	}
}
