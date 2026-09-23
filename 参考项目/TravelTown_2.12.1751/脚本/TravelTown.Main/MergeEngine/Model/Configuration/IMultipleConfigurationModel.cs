using System.Collections.ObjectModel;

namespace MergeEngine.Model.Configuration
{
	public interface IMultipleConfigurationModel<TKey, T>
	{
		ReadOnlyCollection<T> Configurations { get; }

		T GetById(TKey uniqueId);
	}
}
