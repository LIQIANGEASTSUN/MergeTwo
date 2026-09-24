using System;
using System.Collections.Generic;
using Code.GameLogic.Player.MergeTasks;
using GameLogic.Hotspots;
using GameLogic.Player.Requirements;

namespace GameLogic.Player.MergeTasks
{
	public class HotspotMergeTask : HotspotTask, IHasRequirements, ITaskCardView
	{
		[NonSerialized]
		public bool canBeCompleted;

		[NonSerialized]
		public bool isBonusAvailable;

		[NonSerialized]
		public bool isUnlockedAndAvailable;

		public IEnumerable<PlayerRequirement> Requirements { get; }

		public IPlayer Player { get; }

		public HotspotId HotspotId => default(HotspotId);

		public override bool CanBeCompleted => false;

		public MergeTask Task => null;

		public override bool IsBonusAvailable => false;

		public override bool IsUnlockedAndAvailable => false;

		public override TaskCategory Category => default(TaskCategory);

		public HotspotMergeTask(IHotspotDefinition hotspot, IPlayer player)
			: base(null, null)
		{
		}

		public HotspotMergeTask(IHotspotDefinition hotspot, IPlayer player, bool canBeCompletedByPlayer)
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
	}
}
