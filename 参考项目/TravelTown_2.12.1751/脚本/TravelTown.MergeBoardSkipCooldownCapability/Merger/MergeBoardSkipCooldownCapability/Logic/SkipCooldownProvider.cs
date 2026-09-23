using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Services.User;
using Zenject;

namespace Merger.MergeBoardSkipCooldownCapability.Logic
{
	public class SkipCooldownProvider : Base, ISkipCooldownProvider
	{
		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public List<ISkipCooldownStrategy> _strategies;

		public SkipCooldownConfig SkipCooldownConfig => null;

		public bool CanSkipCooldown(Entity entity)
		{
			return false;
		}

		public double GetTimeLeft(Entity entity)
		{
			return 0.0;
		}

		public ResourceMultiple GetSkipCooldownPrice(Entity entity, IMergeItem mergeItem)
		{
			return null;
		}

		public ResourceMultiple CalculatePriceWithSkipCooldownSettings(double timeLeft, SkipCooldownSettings skipCooldownSettings)
		{
			return null;
		}

		public ResourceMultiple CalculatePriceWithCoefficents(double timeleft)
		{
			return null;
		}
	}
}
