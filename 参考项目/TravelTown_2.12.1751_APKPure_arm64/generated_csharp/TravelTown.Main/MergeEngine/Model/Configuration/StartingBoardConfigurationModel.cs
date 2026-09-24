using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Board;

namespace MergeEngine.Model.Configuration
{
	public class StartingBoardConfigurationModel : MultipleConfigurationModelBase<IBoard, string, MultipleConfigurationStringKeyLookup<IBoard>>, IStartingBoardConfigurationModel
	{
	}
}
