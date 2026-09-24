using System;
using System.Collections.Generic;
using Code.GameLogic.Player.MergeTasks;
using GameLogic.Hotspots;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;

namespace GameLogic.Player.MergeTasks
{
	public class RepeatableTask : HotspotTask, IHasRequirements, ITaskCardView
	{
		[NonSerialized]
		public bool canBeCompleted;

		[NonSerialized]
		public bool isBonusAvailable;

		[NonSerialized]
		public bool isUnlockedAndAvailable;

		[NonSerialized]
		public HashSet<IItemDefinition> taskRewards;

		public IEnumerable<PlayerRequirement> Requirements { get; }

		public IPlayer Player { get; }

		public HotspotId HotspotId => default(HotspotId);

		public override bool CanBeCompleted => false;

		public MergeTask Task => null;

		public override bool IsBonusAvailable => false;

		public override bool IsUnlockedAndAvailable => false;

		public override TaskCategory Category => default(TaskCategory);

		public RepeatableTask(HotspotDefinition hotspot, IPlayer playerModel)
			: base(null, null)
		{
		}

		public override void Update()
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}

		public void RefreshCanBeCompleted()
		{
		}

		public void RefreshIsBonusAvailable()
		{
		}

		public void RefreshIsUnlockedAndAvailable()
		{
		}

		public bool MatchesRequirements()
		{
			return false;
		}

		public bool IsTaskRewardRequiredForTask(MergeTask task)
		{
			return false;
		}

		public HashSet<IItemDefinition> GetRewardItems()
		{
			return null;
		}

		public void AddItemAndProducedItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards)
		{
		}

		public void ProcessProducerItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards)
		{
		}

		public void ProcessSinkItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards)
		{
		}

		public void ProcessMergeChain(IItemDefinition item, HashSet<IItemDefinition> possibleRewards)
		{
		}
	}
}
