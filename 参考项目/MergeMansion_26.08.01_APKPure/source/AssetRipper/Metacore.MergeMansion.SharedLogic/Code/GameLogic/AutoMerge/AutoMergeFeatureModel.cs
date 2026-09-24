using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Player;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.AutoMerge
{
	[MetaSerializableDerived(1)]
	public class AutoMergeFeatureModel : IAutoMergeFeatureModel
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsUserToggleOn { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetacoreTime? AvailableSince { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetacoreTime? AvailableUntil { get; set; }

		[IgnoreDataMember]
		public bool IsAvailable => false;

		[IgnoreDataMember]
		public bool IsActive => false;

		public void AddDuration(MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source, IPlayerModelClientListener clientListener)
		{
		}

		public void SetUserToggle(bool enabled, IPlayerModelClientListener clientListener)
		{
		}

		public void OnGameTick(MetaTime currentTime, IPlayerModelClientListener clientListener)
		{
		}

		public void ForceDeactivate(IPlayerModelClientListener clientListener)
		{
		}

		public void NotifyIfChanged(bool wasAvailable, bool wasActive, IPlayerModelClientListener clientListener)
		{
		}
	}
}
