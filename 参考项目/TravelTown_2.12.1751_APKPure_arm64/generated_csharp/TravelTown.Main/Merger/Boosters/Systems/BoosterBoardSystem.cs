using System;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Models;
using Merger.LiveOps.Events.Model;
using Zenject;

namespace Merger.Boosters.Systems
{
	public class BoosterBoardSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public new IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public new IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		[Inject]
		[NonSerialized]
		public IBoosterActivator _boosterActivator;

		public void UpdateBoardQueuedBooster(RemoteBoosterData boosterData)
		{
		}

		public void ApplyActiveBoardBooster(RemoteBoosterData boosterData)
		{
		}

		public void TryActivateEligibleBoardBooster(RemoteBoosterData boosterData)
		{
		}

		public Entity TryActivateBoosterBoardEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source = ResourceSource.Default, Entity boardItemEntity = null)
		{
			return null;
		}

		public Entity CreateBoosterItemEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source, out bool alreadyExisted)
		{
			alreadyExisted = default(bool);
			return null;
		}

		public void SetupActiveBoosterVisuals(IBoosterItem booster, Entity boardItemEntity, bool activateSilently = false)
		{
		}

		public void TryLinkBoosterWithMergeItem(IBoosterItem booster, string boosterUuId, Entity boardItemEntity)
		{
		}

		public void SyncBoosterAndMergeTimer(Entity activatedBooster, Entity boardItemEntity, bool activateTimer = false)
		{
		}

		public void AddAnalyticsData(IBoosterItem booster, string reason, ResourceSource source, Entity entity)
		{
		}

		public void BoosterActivatedSendAnalytic(Entity entity)
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public IdComponent GetLinkedMergeItemIdComponent(string uuid)
		{
			return null;
		}
	}
}
