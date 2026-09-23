using System.Collections.ObjectModel;

namespace MergeEngine.Model.Configuration
{
	public interface ILocalMergeItemsConfigurationModel
	{
		bool IsLocalItem(string itemName);

		ReadOnlyCollection<string> GetLocalItemNames();
	}
}
