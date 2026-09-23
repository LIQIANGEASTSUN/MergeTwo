using System.Collections.ObjectModel;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Model.Configuration
{
	public interface IGameConfigurationModel
	{
		InventoryCapability InventoryCapability { get; }

		ProducerInventoryCapability ProducerInventoryCapability { get; }

		ReadOnlyCollection<IMergeItem> RatePopupTriggerItems { get; }

		BubbledItemsConfig BubbledItemsConfig { get; }

		SkipCooldownConfig SkipCooldownConfigMainBoard { get; }

		SkipCooldownConfig SkipCooldownConfigLiveOpsBoard { get; }

		BindableProperty<int> BuildNumber { get; }

		string AppVersion { get; }

		int MinSupportedBuildNumber { get; }

		string StoreUrl { get; }

		GameConfig GameConfig { get; }

		string ChestInfoUrl { get; }

		string PackInfoUrl { get; }

		string ItemSelectionBoxInfoUrl { get; }

		string FacebookMessengerUrl { get; }

		string FacebookPageUrl { get; }

		string FacebookGroupUrl { get; }

		string TwitterPageUrl { get; }

		string InstagramPageUrl { get; }

		string ContactUsUrl { get; }

		string ContactUsUrlPath { get; }

		string ContactUsUrlWithFormPath { get; }

		string DeleteAccountFormId { get; }

		ZendeskLanguageMapping[] ZendeskLanguageMappings { get; }

		float ItemShopHCPriceMultiplier { get; }

		int PreviousBuildNumber { get; set; }

		int SnapshotUploadLimitPerDay { get; }
	}
}
