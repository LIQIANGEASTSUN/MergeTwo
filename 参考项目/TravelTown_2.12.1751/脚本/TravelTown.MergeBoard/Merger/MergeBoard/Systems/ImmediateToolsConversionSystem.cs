using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.Logic;
using Merger.Services;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ImmediateToolsConversionSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IToolSpawnHandler _toolSpawnHandler;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IBoardConfigService _boardConfigService;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		public void Tick(TickContext context)
		{
		}

		public bool IsToolOrToolbox(string itemId)
		{
			return false;
		}

		public bool IsToolbox(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsTool(IMergeItem mergeItem)
		{
			return false;
		}

		public void EnforceImmediateToolBehavior(Entity entity, IdComponent idComponent)
		{
		}

		public void RemoveImmediateToolBehavior(Entity entity, IdComponent idComponent, BoardTilePositionComponent boardTilePositionComponent)
		{
		}
	}
}
