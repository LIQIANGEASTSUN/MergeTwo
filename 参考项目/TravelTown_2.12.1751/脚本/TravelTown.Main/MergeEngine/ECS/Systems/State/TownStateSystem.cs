using System;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using Merger.LevelAndMeta.Responses;
using Merger.Metagame.ECS;
using Zenject;

namespace MergeEngine.ECS.Systems.State
{
	public class TownStateSystem : StateSystemBase<TownStateResponse>
	{
		[InjectSystem]
		[NonSerialized]
		public PlayerLevelSystem _playerLevelSystem;

		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectSystem]
		[NonSerialized]
		public MetagameSystem _metagameSystem;

		[Inject]
		[NonSerialized]
		public IPlayerProgressionConfigurationModel _playerProgressionConfigurationModel;

		public override void LoadState(TownStateResponse newState)
		{
		}

		public void UpdateTownWithResponse(TownStateResponse response)
		{
		}

		public void UpdateUserData(TownStateResponse state)
		{
		}

		public int GetClientBoundLevelFromState(TownStateResponse state)
		{
			return 0;
		}
	}
}
