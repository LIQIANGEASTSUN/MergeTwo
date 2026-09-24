using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.UIFSM.Model.Navigation;
using GameCore.Configuration.Definitions;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Data;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Abstractions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Declarations.Signals.Workflow;
using Merger.RemoteContentManager.Services;
using Merger.Rewards.Interfaces;
using Merger.Services.User;
using Merger.TooltipsDynamicContent.KeyResolvers;
using Merger.TooltipsDynamicContent.Models;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace Merger.Boosters.Models
{
	public class BoosterModel : MultipleConfigurationModelBase<IBoosterItem, string, MultipleConfigurationStringKeyLookup<IBoosterItem>>, IBoosterModel, IRewardSpriteReferenceProvider
	{
		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public ITooltipsDynamicContentAssetsModel _tooltipsDynamicContentAssetsModel;

		[Inject]
		[NonSerialized]
		public ITooltipKeyResolver[] _tooltipKeyResolvers;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public INavigationModel _navigationModel;

		public ReadOnlyCollection<IBoosterItem> Boosters => null;

		public List<RemoteBoosterData> RemoteActiveBoosters { get; set; }

		public Dictionary<string, BoosterType> PendingQueueActivationBoosters { get; }

		public HashSet<string> DeactivatedBoosters { get; }

		public string[] SpriteReferenceRewardTypes => null;

		public List<RemoteBoosterData> RemoteActiveBoostersCached { get; set; }

		public HashSet<string> LockedBoosters { get; }

		public bool ShouldForceProcessAllBoosters { get; set; }

		public List<BoosterSendToActivationData> BoosterSendToActivationDatas { get; }

		public bool IsSpecialChainCollectSequence { get; set; }

		public List<BoosterActivatedSignal> PendingActivationSignal { get; }

		public bool HasBlockToProcess => false;

		public IBoosterItem GetBooster(string uniqueId)
		{
			return null;
		}

		public bool HasBoosterById(string itemId)
		{
			return false;
		}

		public IBoosterItem GetBoosterByMergeItemId(string itemId)
		{
			return null;
		}

		public AssetReferenceT<Sprite> GetRewardSpriteReference(string rewardType, string uniqueId)
		{
			return null;
		}

		public override void ConfigurationAdded(IBoosterItem configuration)
		{
		}

		public void InjectDynamicTooltipContent(IBoosterItem configuration)
		{
		}

		public RemoteBoosterData GetRemoteActiveBoosterByUuid(string uuid)
		{
			return null;
		}

		public bool IsBooster(ComponentBase component)
		{
			return false;
		}

		public T GetBoosterProgress<T>(string uniqueId) where T : BoosterProgressBase
		{
			return null;
		}

		public string GetTooltipContentName(RemoteBoosterItem remoteBoosterItem)
		{
			return null;
		}

		public bool HasAnyBoosterPendingForActivation(BoosterType boosterType)
		{
			return false;
		}

		public void AddBoosterToPendingActivationList(string uuid, BoosterType boosterType)
		{
		}
	}
}
