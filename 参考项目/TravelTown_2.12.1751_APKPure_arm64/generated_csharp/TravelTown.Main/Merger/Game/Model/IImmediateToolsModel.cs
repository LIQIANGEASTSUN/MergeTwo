using Framework.Core.DataBinding;
using MergeEngine.Configuration;

namespace Merger.Game.Model
{
	public interface IImmediateToolsModel
	{
		BindableProperty<bool> IsImmediateToolsEnabled { get; }

		bool IsToolbox(IMergeItem mergeItem);

		bool IsMaxLevelTool(IMergeItem mergeItem);

		bool IsLowLevelTool(IMergeItem mergeItem);
	}
}
