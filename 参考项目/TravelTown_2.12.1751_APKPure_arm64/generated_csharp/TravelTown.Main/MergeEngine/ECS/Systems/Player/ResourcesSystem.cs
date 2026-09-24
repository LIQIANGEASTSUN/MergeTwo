using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Player;
using MergeEngine.Model;
using Merger.Rewards.Enums;
using Merger.Rewards.Interfaces;
using Zenject;

namespace MergeEngine.ECS.Systems.Player
{
	public class ResourcesSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[NonSerialized]
		public ResourcesComponent _resourcesComponent;

		[NonSerialized]
		public readonly Dictionary<string, int> _pendingReward;

		[NonSerialized]
		public readonly Dictionary<string, int> _localChanges;

		public override void InitializeSystem()
		{
		}

		public bool ConsumeResource(ResourceMultiple resourceMultiple, bool delayDisplay, ResourceSource source, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false)
		{
			return false;
		}

		public bool ConsumeResource(PlayerResourceEnum resourceType, int amount, bool delayDisplay, ResourceSource source, ResourcePurchaseType? purchaseType = null, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false)
		{
			return false;
		}

		public bool ConsumeResource(IRewardType rewardType, int amount, bool delayDisplay, ResourceSource source, ResourcePurchaseType? purchaseType = null, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false)
		{
			return false;
		}

		public void AddPendingResource(string resourceType, int amount)
		{
		}

		public void RemovePendingResource(string resourceType, int amount)
		{
		}

		public void GrantResourceLocal(IRewardType rewardType, int amount)
		{
		}

		public bool ConsumeResourceLocal(IRewardType rewardType, int amount)
		{
			return false;
		}

		public void RemoveResourceLocalChanges(IRewardType rewardType)
		{
		}

		public void GrantResource(IRewardType rewardType, int amount, bool delayDisplay, ResourceSource source, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false, RewardSource rewardSource = null)
		{
		}

		public ResourceSource GetMostRecentGrantedResourceSource(string resource)
		{
			return default(ResourceSource);
		}

		public DisplayableBindableProperty<int> GetResourceInternal(string resourceType)
		{
			return null;
		}

		public bool HasResource(IRewardType rewardType)
		{
			return false;
		}

		public void SetResource(PlayerResourceEnum resourceType, int value, bool delayDisplay, ResourceSource source)
		{
		}

		public void SetResource(IRewardType rewardType, int value, bool delayDisplay, ResourceSource source)
		{
		}

		public void SendEnergyDeltaAnalytics(DisplayableBindableProperty<int> currentValue, int newValue, string resourceType, ResourceSource resourceSource)
		{
		}

		public void SetDisplayValue(IRewardType rewardType, DisplayableBindableProperty<int> resource, bool delayDisplay)
		{
		}

		public void SendDisplayedNegativeAnalyticIfNeeded(IRewardType rewardType, int resourceDisplayValue)
		{
		}

		public BindableProperty<int> GetDisplayableResource(PlayerResourceEnum resourceType)
		{
			return null;
		}

		public BindableProperty<int> GetResource(PlayerResourceEnum resourceType)
		{
			return null;
		}

		public BindableProperty<int> GetDisplayableResource(string resourceType)
		{
			return null;
		}

		public BindableProperty<int> GetResource(string resourceType)
		{
			return null;
		}

		public void SubscribeToResourceChanged(string resourceType, Action<int, int> changedHandler)
		{
		}

		public void UnsubscribeFromResourceChanged(string resourceType, Action<int, int> changedHandler)
		{
		}

		public void UpdatePendingResourceDisplayValue(IRewardType rewardType, int pendingAmount, bool isDelayed, ResourceSource source = ResourceSource.Default, RewardSource reason = null, Dictionary<string, object> analyticParameters = null)
		{
		}

		public void SetDisplayValue(string resourceType, int amountToDisplay)
		{
		}

		public bool CanAfford(ResourceMultiple resourceMultiple)
		{
			return false;
		}

		public bool CanAfford(string resource, int resourceAmount)
		{
			return false;
		}

		public bool CanAfford(ResourceMultiple[] resourcesMultiple)
		{
			return false;
		}

		public bool PurchaseResource(ResourcePurchaseBase<PlayerResourceEnum> resourcePurchase, ResourceSource resourceSource, ResourcePurchaseType purchaseType)
		{
			return false;
		}

		public int GetResourceSpendCount(string resource)
		{
			return 0;
		}

		public bool HasPendingReward(string resource)
		{
			return false;
		}

		public void RegisterResource(string resourceType)
		{
		}
	}
}
