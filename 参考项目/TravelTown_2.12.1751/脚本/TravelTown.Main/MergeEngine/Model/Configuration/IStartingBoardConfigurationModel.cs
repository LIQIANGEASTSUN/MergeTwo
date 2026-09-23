using MergeEngine.Configuration.Board;

namespace MergeEngine.Model.Configuration
{
	public interface IStartingBoardConfigurationModel
	{
		IBoard GetById(string uniqueId);
	}
}
