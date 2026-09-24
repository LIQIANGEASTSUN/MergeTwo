using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Logic;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ImmediateToolsSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IToolSpawnHandler _toolSpawnHandler;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void CollectToolBox(TickContext context, Entity entity, PendingInteractionComponent pendingInteraction, ImmediateToolComponent immediateToolComponent)
		{
		}

		public void CollectSingleTool(TickContext context, Entity entity, PendingInteractionComponent pendingInteractionComponent, IdComponent idComponent)
		{
		}

		public void UpdateToolProgressionData(IMergeItem toolItem, ref Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionData)
		{
		}
	}
}
