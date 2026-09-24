using System;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public sealed class TimeLimitedPostActivationSystem : BaseItemSystem<TimeLimitedActivationComponent>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		public long CurrentServerTimeMS => 0L;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override void ProcessComponent(TimeLimitedActivationComponent component)
		{
		}
	}
}
