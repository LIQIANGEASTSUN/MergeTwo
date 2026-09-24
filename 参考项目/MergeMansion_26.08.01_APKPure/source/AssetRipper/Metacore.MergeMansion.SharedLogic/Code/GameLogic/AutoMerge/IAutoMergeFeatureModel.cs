using GameLogic.Config.Types;
using GameLogic.Player;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.AutoMerge
{
	[MetaSerializable]
	public interface IAutoMergeFeatureModel
	{
		bool IsAvailable { get; }

		bool IsUserToggleOn { get; }

		MetacoreTime? AvailableSince { get; }

		MetacoreTime? AvailableUntil { get; }

		bool IsActive { get; }

		void AddDuration(MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source, IPlayerModelClientListener clientListener);

		void SetUserToggle(bool enabled, IPlayerModelClientListener clientListener);

		void OnGameTick(MetaTime newTime, IPlayerModelClientListener clientListener);

		void ForceDeactivate(IPlayerModelClientListener clientListener);
	}
}
