using System;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;

namespace MergeEngine.Model.Configuration
{
	public sealed class LocalMergeItemsConfigurationModel : ConfigurationModelBase<LocalMergeItemsConfig>, ILocalMergeItemsConfigurationModel
	{
		[NonSerialized]
		public LocalMergeItemsConfig _config;

		public override void HandleDataLoaded(LocalMergeItemsConfig config)
		{
		}

		public bool IsLocalItem(string itemName)
		{
			return false;
		}

		public ReadOnlyCollection<string> GetLocalItemNames()
		{
			return null;
		}
	}
}
