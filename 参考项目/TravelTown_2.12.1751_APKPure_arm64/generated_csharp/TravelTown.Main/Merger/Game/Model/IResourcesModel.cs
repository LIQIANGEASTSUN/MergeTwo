using System.Collections.Generic;
using Framework.Core.DataBinding;
using MergeEngine.Configuration.Definitions;
using Merger.Rewards.Enums;
using Merger.Rewards.Interfaces;

namespace Merger.Game.Model
{
	public interface IResourcesModel
	{
		BindableProperty<int> GetDisplayableResource(IRewardType rewardType);

		BindableProperty<int> GetResource(IRewardType rewardType);

		bool ConsumeResource(IRewardType rewardType, int amount, bool delayDisplay, ResourceSource source, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false);

		void GrantResource(IRewardType rewardType, int amount, bool delayDisplay, ResourceSource source, Dictionary<string, object> analyticParameters = null, bool shouldChangeRealValue = false);

		bool ConsumeResourceLocal(IRewardType rewardType, int amount);

		void GrantResourceLocal(IRewardType rewardType, int amount);

		void RemoveResourceLocalChanges(IRewardType rewardType);

		void AddPendingResource(IRewardType rewardType, int amount);

		bool HasResource(IRewardType rewardType);

		void SetResource(IRewardType rewardType, int value, bool delayDisplay, ResourceSource source);

		void UpdateResourceDisplayValue(IRewardType rewardType, int pendingAmount, bool isDelayed, ResourceSource source = ResourceSource.Default, RewardSource reason = null, Dictionary<string, object> analyticParameters = null);

		void PurchaseResource(ResourcePurchase resource, ResourceSource source, ResourcePurchaseType purchaseType);

		bool CanAfford(ResourceMultiple resourceMultiple);

		bool CanAfford(ResourceMultiple[] resourceMultiple);

		bool CanAfford(string resource, int resourceAmount);

		BindableProperty<double> GetResourceReplenishLeftSeconds(IRewardType resource);

		void SetResourceDisplayValue(IRewardType resourceType, int displayValue);

		float GetProgressPercentage(ResourceMultiple resourceMultiple);
	}
}
