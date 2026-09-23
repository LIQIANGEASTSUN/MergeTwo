using System;
using ContextualizedECS;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.Logic
{
	public class SellItemEligibilityValidator : ISellItemEligibilityValidator
	{
		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public bool CanBeSold(Entity entity)
		{
			return false;
		}
	}
}
