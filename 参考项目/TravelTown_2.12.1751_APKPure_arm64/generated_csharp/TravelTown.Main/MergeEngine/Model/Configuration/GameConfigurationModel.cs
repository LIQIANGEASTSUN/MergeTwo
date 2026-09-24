using System;
using System.Collections.ObjectModel;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.Model.Configuration
{
	public class GameConfigurationModel : ConfigurationModelBase<GameConfig>, IGameConfigurationModel
	{
		public const string ChestInfoUrlKey = "chestProbabilitiesInfoUrl";

		public const string PackInfoUrlKey = "cardsInfoUrl";

		public const string ItemSelectionBoxInfoUrlKey = "ISBInfoUrl";

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[NonSerialized]
		public GameConfig _gameConfig;

		[NonSerialized]
		public MutableBindableProperty<int> _buildNumber;

		[NonSerialized]
		public SkipCooldownConfig _skipCooldownConfigMainBoard;

		[NonSerialized]
		public SkipCooldownConfig _skipCooldownConfigLiveOpsBoard;

		[NonSerialized]
		public ProducerInventoryCapability _producerInventoryCapability;

		public InventoryCapability InventoryCapability => null;

		public ProducerInventoryCapability ProducerInventoryCapability => null;

		public ReadOnlyCollection<IMergeItem> RatePopupTriggerItems => null;

		public BubbledItemsConfig BubbledItemsConfig => null;

		public SkipCooldownConfig SkipCooldownConfigMainBoard => null;

		public SkipCooldownConfig SkipCooldownConfigLiveOpsBoard => null;

		public BindableProperty<int> BuildNumber => null;

		public string AppVersion => null;

		public int MinSupportedBuildNumber => 0;

		public string ChestInfoUrl => null;

		public string PackInfoUrl => null;

		public string ItemSelectionBoxInfoUrl => null;

		public string FacebookMessengerUrl => null;

		public string FacebookPageUrl => null;

		public string FacebookGroupUrl => null;

		public string TwitterPageUrl => null;

		public string InstagramPageUrl => null;

		public string ContactUsUrl => null;

		public string ContactUsUrlPath => null;

		public string ContactUsUrlWithFormPath => null;

		public string DeleteAccountFormId => null;

		public ZendeskLanguageMapping[] ZendeskLanguageMappings => null;

		public float ItemShopHCPriceMultiplier => 0f;

		public int PreviousBuildNumber { get; set; }

		public int SnapshotUploadLimitPerDay => 0;

		public string StoreUrl => null;

		public GameConfig GameConfig => null;

		public override void HandleDataLoaded(GameConfig data)
		{
		}
	}
}
