using System;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Services;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.ImmidateToolsSystem
{
	public class ImmediateToolsSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IBoardConfigService _boardConfigService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public MutableBindableProperty<bool> IsImmediateToolsEnabled { get; }

		public bool IsToolbox(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsTool(IMergeItem mergeItem)
		{
			return false;
		}

		public override void InitializeSystem()
		{
		}

		public override void OnGameStarted()
		{
		}

		public override void DisposeSystem()
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public void OnPlayerLevelChanged(int newLevel)
		{
		}

		public void OnImmediateToolsStateChanged(bool isEnabled)
		{
		}

		public void UpdateImmediateToolsState()
		{
		}

		public void ProcessEntity(Entity entity)
		{
		}

		public void UpdateAllBoardItems()
		{
		}

		public bool IsToolOrToolbox(Entity entity)
		{
			return false;
		}

		public void AddImmediateToolBehavior(Entity entity)
		{
		}

		public void RemoveConflictingComponents(Entity entity)
		{
		}

		public void RemoveSingleToolComponents(Entity entity, IMergeItem mergeItem)
		{
		}

		public void EnsureImmediateToolComponent(Entity entity, IMergeItem mergeItem)
		{
		}

		public void EnableVisualEffects(Entity entity)
		{
		}

		public void RemoveImmediateToolBehavior(Entity entity)
		{
		}

		public bool HasImmediateToolComponent(Entity entity)
		{
			return false;
		}

		public void RemoveImmediateComponents(Entity entity)
		{
		}

		public void DisableVisualEffects(Entity entity)
		{
		}

		public void RestoreOriginalComponents(Entity entity, IMergeItem mergeItem)
		{
		}

		public void RestoreToolBoxComponents(Entity entity, IMergeItem mergeItem)
		{
		}

		public void RestoreSingleToolComponents(Entity entity, IMergeItem mergeItem)
		{
		}
	}
}
