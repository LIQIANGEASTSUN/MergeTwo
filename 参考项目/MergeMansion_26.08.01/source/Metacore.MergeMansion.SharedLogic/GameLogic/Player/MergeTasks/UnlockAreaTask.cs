using System;
using System.Collections.Generic;
using Code.GameLogic.Player.MergeTasks;
using GameLogic.Hotspots;
using GameLogic.Player.Requirements;

namespace GameLogic.Player.MergeTasks
{
	public class UnlockAreaTask : HotspotTask, ITaskCardView
	{
		[NonSerialized]
		public readonly IPlayer _player;

		[NonSerialized]
		public bool _canBeCompleted;

		public int UnlockLevel { get; }

		public HotspotId HotspotId => default(HotspotId);

		IEnumerable<PlayerRequirement> ITaskCardView.Requirements => null;

		public override bool CanBeCompleted => false;

		public MergeTask Task => null;

		public override bool IsBonusAvailable { get; }

		public override bool IsUnlockedAndAvailable { get; }

		public override TaskCategory Category => default(TaskCategory);

		public IEnumerable<IPlayerRequirement> Requirements(IPlayer player)
		{
			return null;
		}

		public UnlockAreaTask(HotspotDefinition hotspotDefinition, IPlayer player)
			: base(null, null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}

		public void RefreshCanBeCompleted()
		{
		}
	}
}
