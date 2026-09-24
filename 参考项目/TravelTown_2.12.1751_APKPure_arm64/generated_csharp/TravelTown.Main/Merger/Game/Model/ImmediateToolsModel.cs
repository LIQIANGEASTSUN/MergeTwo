using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Items.ImmidateToolsSystem;
using MergeEngine.Model.Configuration;
using Zenject;

namespace Merger.Game.Model
{
	public class ImmediateToolsModel : ModelBase, IImmediateToolsModel
	{
		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[NonSerialized]
		public ImmediateToolsSystem _immediateToolsSystem;

		public ImmediateToolsSystem ImmediateToolsSystem => null;

		public BindableProperty<bool> IsImmediateToolsEnabled => null;

		public bool IsToolbox(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsMaxLevelTool(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsLowLevelTool(IMergeItem mergeItem)
		{
			return false;
		}
	}
}
