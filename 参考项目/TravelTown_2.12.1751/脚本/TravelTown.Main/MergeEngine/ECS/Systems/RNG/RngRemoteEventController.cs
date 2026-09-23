using System;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using Merger.Game.ViewModel.Rng;
using Merger.RemoteLiveOps.Controllers;
using Merger.RemoteLiveOps.Data.EventData;
using Zenject;

namespace MergeEngine.ECS.Systems.RNG
{
	public class RngRemoteEventController : EventControllerBase<RemoteLiveOpData>
	{
		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public RngEventViewModel _rngEventViewModel;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		public RngProgressSystem RngProgressSystem => null;

		public override void StartEvent()
		{
		}

		public override void EndEvent()
		{
		}

		public override void OnDataUpdated()
		{
		}

		public override void UpdateRewardsData(RemoteLiveOpData updatedConfig)
		{
		}

		public RngProgressContext CreateProgressContext()
		{
			return null;
		}
	}
}
