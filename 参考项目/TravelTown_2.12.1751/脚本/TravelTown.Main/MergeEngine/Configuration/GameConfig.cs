using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.Assets;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Sirenix.OdinInspector;
using Tools.Attributes;
using UnityEngine;

namespace MergeEngine.Configuration
{
	[Serializable]
	[CreateAssetMenu(fileName = "GameConfig.asset", menuName = "Game/Config")]
	[BakedConfiguration("Assets/Configuration/GameConfig.asset", "Assets/Scripts/MergeEngine/Configuration/Baked/BakedGameConfig.cs")]
	public class GameConfig : SerializedScriptableObject
	{
		public InventoryCapability Inventory;

		public int BuildNumber;

		public int MinSupportedBuildNumber;

		[RequiredWeakReference]
		[SerializeField]
		public List<MergeItemWeakReference> RatePopupTriggerItems;

		public BubbledItemsConfig BubbledItemsConfig;

		public SkipCooldownConfig SkipCooldownConfigMainBoard;

		public SkipCooldownConfig SkipCooldownConfigLiveOpsBoard;

		public string IosStoreUrl;

		public float IapMigrationMultiplierBonus;

		public SkinConfiguration SkinConfiguration;

		public string ChestInfoUrl;

		public string PackInfoUrl;

		public string ItemSelectionBoxInfoUrl;

		public string FacebookMessengerUrl;

		public string ContactUsUrl;

		public string ContactUsUrlPath;

		public string ContactUsUrlWithFormPath;

		public string DeleteAccountFormId;

		public ZendeskLanguageMapping[] ZendeskLanguageMapping;

		public int FtueEndPlayerLevel;

		public int PreventConsumableSpawnsBeforeLevel;

		public float ToolsRequiredByMetagameBooster;

		public MergeItemWeakReference[] ItemsTransferableFromLiveOpsEvent;

		public float ItemShopHCPriceMultiplier;

		public int SnapshotUploadLimitPerDay;

		[AssetGroupFilter("UI")]
		public Asset SpinnerOverlayAsset;

		[AssetGroupFilter("UI")]
		public Asset SpinnerAsset;

		[AssetGroupFilter("UI")]
		public Asset ThreeDotsLoaderAsset;

		[AssetGroupFilter("UI")]
		public Asset MaintenanceModeOverlayAsset;

		[AssetGroupFilter("UI")]
		public Asset ModedApkOverlayAsset;

		[SerializeField]
		public string _facebookPageUrl;

		[SerializeField]
		public string _facebookGroupUrl;

		[SerializeField]
		public string _twitterPageUrl;

		[SerializeField]
		public string _instagramPageUrl;

		public ReadOnlyCollection<IMergeItem> RatePopupTriggerItems2 => null;

		public string FacebookPageUrl
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string FacebookGroupUrl
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string TwitterPageUrl
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public string InstagramPageUrl
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public bool InventoryValid(InventoryCapability inventory)
		{
			return false;
		}
	}
}
