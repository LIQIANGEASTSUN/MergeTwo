using System;
using MergeEngine.ECS.Util;
using MergeEngine.Signal.Items;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class UndoSellAbuseSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[InjectSystem]
		[NonSerialized]
		public BoardQueueSystem _boardQueueSystem;

		[NonSerialized]
		public bool _canUndo;

		[NonSerialized]
		public bool _alreadyReportedBlockAnalytic;

		[NonSerialized]
		public string _blockedSpawnerId;

		[NonSerialized]
		public bool _alreadyReportedMaxQueueAnalytic;

		public int QueueThresholdSizeForAbuse => 0;

		public bool QueueAbuseThresholdReached => false;

		public bool IgnoreQueueAbuse => false;

		public override void InitializeSystem()
		{
		}

		public override void OnGameStarted()
		{
		}

		public void OnSellItemStart()
		{
		}

		public void OnSelectedItemStart()
		{
		}

		public void OnUndoSellStart()
		{
		}

		public void CheckForEnqueueAnalytics(ItemQueuedSignal signal)
		{
		}

		public void CheckForDequeueAnalytics(ItemDequeuedSignal signal)
		{
		}

		public void ReleaseFromInventoryAnalytics()
		{
		}

		public void BlockSpawnerAnalytics(bool isBlocked, string spawnerId)
		{
		}

		public bool SpawnerAbuseIsPossible(string spawnerId)
		{
			return false;
		}

		public override void DisposeSystem()
		{
		}
	}
}
