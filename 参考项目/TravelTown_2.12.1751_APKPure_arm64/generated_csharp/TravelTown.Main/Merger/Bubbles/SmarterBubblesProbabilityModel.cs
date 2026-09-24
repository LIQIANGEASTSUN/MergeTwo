using System;
using GameCore.Model;
using MergeEngine.Configuration;
using MergeEngine.ECS;
using MergeEngine.Model.Configuration;
using Merger.Bubbles.Modifiers;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Services.User.Data.Profile.BubblesConfig;
using Zenject;

namespace Merger.Bubbles
{
	public class SmarterBubblesProbabilityModel : GameModelBase, ISmarterBubblesProbabilityModel
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public IBubbledItemsConfigurationModel _bubbledItemsConfigurationModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesAnalyticsModel _analyticsModel;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBubbleDropProbabilityModifier[] _modifiers;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public SmarterBubblesConfig _smarterBubblesConfig;

		public SmarterBubblesCheatData CheatData { get; set; }

		public override void InitializeModel()
		{
		}

		public void BoardTypeChanged(CurrentBoardType boardType)
		{
		}

		public void OnGameStarted(bool value)
		{
		}

		public void TryRegisterModifiers()
		{
		}

		public float GetBubbleProbability(IMergeItem mergeItem)
		{
			return 0f;
		}

		public void ResetPreviousBubbleCachedData()
		{
		}

		public void UpdateModifiers()
		{
		}

		public float? GetOverrideValue(IMergeItem mergeItem)
		{
			return null;
		}

		public float GetBaseProbability()
		{
			return 0f;
		}

		public override void DisposeModel()
		{
		}

		public bool IsItemAlreadyOnBoard(IMergeItem mergeItem)
		{
			return false;
		}
	}
}
