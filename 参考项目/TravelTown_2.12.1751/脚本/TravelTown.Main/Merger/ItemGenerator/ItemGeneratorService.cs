using System;
using Framework.Core.Services.Backend.Remote.Payloads.TutorialState;
using GameCore.States.Contexts;
using MergeEngine.ECS;
using MergeEngine.ECS.Systems.Player;
using Merger.ItemGenerator.Repositories;
using Merger.Meteor.Compatibility;
using Merger.ProducerExcitement.Compatibility;
using Merger.Tutorials.Models;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.ItemGenerator
{
	public class ItemGeneratorService
	{
		[Inject]
		[NonSerialized]
		public ItemGeneratorRepository _itemGeneratorRepository;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public ITutorialModel _tutorialModel;

		[Inject]
		[NonSerialized]
		public StateContext<TutorialStatePayload> _tutorialStateContext;

		[Inject]
		[NonSerialized]
		public IMeteorStateModel _meteorStateModel;

		[Inject]
		[NonSerialized]
		public IProducerExcitementModel _producerExcitementModel;

		[NonSerialized]
		public TutorialProgressComponent _tutorialProgressComponent;

		public TutorialProgressComponent TutorialProgressComponent => null;

		public IPromise GetState()
		{
			return null;
		}

		public bool IsTutorialCompleted(string id)
		{
			return false;
		}
	}
}
