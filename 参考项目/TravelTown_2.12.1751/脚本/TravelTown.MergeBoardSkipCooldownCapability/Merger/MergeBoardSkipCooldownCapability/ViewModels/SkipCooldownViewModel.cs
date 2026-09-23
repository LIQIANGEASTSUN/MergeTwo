using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Model;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using Merger.MergeBoardSkipCooldownCapability.Logic;
using Merger.RemoteLiveOps.Providers;
using Merger.VirtualPurchases.Services;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.MergeBoardSkipCooldownCapability.ViewModels
{
	public class SkipCooldownViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardSelectedItemModel _mergeBoardSelectedItemModel;

		[Inject]
		[NonSerialized]
		public ISkipCooldownProvider _skipCooldownProvider;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IVirtualPurchasesService _virtualPurchasesService;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IEventGlobalMetadata _eventGlobalMetadata;

		public Entity SelectedEntity => null;

		public IMergeItem SelectedMergeItem => null;

		public string EventId => null;

		public bool CanSkipCooldown(Entity entity)
		{
			return false;
		}

		public ResourceMultiple GetSkipCooldownPrice(Entity entity, IMergeItem item)
		{
			return null;
		}

		public bool CanAfford(ResourceMultiple price)
		{
			return false;
		}

		public IPromise PurchaseSkipCooldown(Entity entity, ResourceMultiple price)
		{
			return null;
		}

		public void ExecuteSkipCooldownAction(int itemPositionIndex, ResourceMultiple price)
		{
		}
	}
}
