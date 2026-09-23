using System.Collections.Generic;
using GameLogic.Hotspots;
using GameLogic.Player.Requirements;

namespace GameLogic.Player.MergeTasks
{
	public interface ITaskCardView
	{
		IEnumerable<PlayerRequirement> Requirements { get; }

		IHotspotDefinition Hotspot { get; }

		bool CanBeCompleted { get; }

		MergeTask Task { get; }

		void RefreshCanBeCompleted();
	}
}
