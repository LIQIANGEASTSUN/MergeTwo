using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.Game.Views.Popups.Data;
using Merger.MergeBoard.Handlers;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.Models;
using Zenject;

namespace Merger.MergeBoard.Controller
{
	public class BoardController : IInitializable, ITimeIntervalProcessor
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[Inject]
		[NonSerialized]
		public IBoardControllerDecorator[] _decorators;

		[Inject]
		[NonSerialized]
		public IBoardControllerPostTickProcessor[] _postTickProcessors;

		[Inject]
		[NonSerialized]
		public IItemsCollectionHandler _itemsCollectionHandler;

		[NonSerialized]
		public SystemsManager _systems;

		public bool IsPaused { get; set; }

		public void Initialize()
		{
		}

		public void Pause()
		{
		}

		public void Resume()
		{
		}

		public void InitializeSystems()
		{
		}

		public void MoveItem(int fromPosition, int toPosition)
		{
		}

		public void ExtractItemFromFeedingCombination(Entity feedingCombinationItem, string itemId)
		{
		}

		public void HandleTap(int selectedEntityPosition, TickArgs additionalArgs = null)
		{
		}

		public void HandleCombinationVerification(bool isSuccess, int firstPosition, int secondPosition, MergeCheckItemType checkItemType)
		{
		}

		public void TickSystems(TickArgs inArgs)
		{
		}

		public void DoAction<T>(T actionData)
		{
		}

		public void ProcessTimeInterval(float deltaTime)
		{
		}

		public void OnPostTick(TickArgs result)
		{
		}
	}
}
