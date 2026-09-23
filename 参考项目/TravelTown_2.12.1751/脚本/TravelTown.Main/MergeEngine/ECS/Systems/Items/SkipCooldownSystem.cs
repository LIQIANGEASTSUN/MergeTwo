using System;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.Services.User;
using Merger.VirtualPurchases.Services;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class SkipCooldownSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[Inject]
		[NonSerialized]
		public IVirtualPurchasesService _virtualPurchasesService;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[NonSerialized]
		public TimeCycleSystem _timeCycleSystem;

		[NonSerialized]
		public TimeLockSystem _timeLockSystem;

		public SkipCooldownConfig SkipCooldownConfig => null;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void SkipBoardItemCooldownSignalFired(SkipBoardItemCooldownSignal signal)
		{
		}

		public ResourceMultiple GetSkipCooldownPrice(SelectedBoardItem selectedBoardItem)
		{
			return null;
		}

		public ResourceMultiple GetSkipCooldownPrice(TimeLockComponent timeLockComponent, IItemSpawning itemSpawning)
		{
			return null;
		}

		public ResourceMultiple CalculatePrice(double timeleft, SkipCooldownSettings skipCooldownSettings = null)
		{
			return null;
		}

		public ResourceMultiple CalculatePriceWithSkipCooldownSettings(double timeleft, SkipCooldownSettings skipCooldownSettings)
		{
			return null;
		}

		public ResourceMultiple CalculatePriceWithCoefficents(double timeleft)
		{
			return null;
		}

		public double GetTimeLeft(SelectedBoardItem selectedBoardItem)
		{
			return 0.0;
		}

		public double GetTimeLeft(ITimeLocked timeLocked, IItemSpawning itemSpawning)
		{
			return 0.0;
		}
	}
}
