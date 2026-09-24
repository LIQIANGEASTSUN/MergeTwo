using System;
using Code.GameLogic.Utility;
using GameLogic.Player;
using GameLogic.Player.Modes;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config.EnergyModeEvent
{
	[MetaSerializableDerived(12)]
	[MetaActivableSet("EnergyModeEvent", false)]
	public class PlayerEnergyModeEventsModel : MetaActivableSet<EnergyModeEventId, EnergyModeEventInfo, EnergyModeEventModel>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime _nextEventStartTime;

		public override EnergyModeEventModel CreateActivableState(EnergyModeEventInfo info, IPlayerModelBase player)
		{
			return null;
		}

		public void RefreshState(PlayerModel player, PlayerEventsModelRefreshAction action)
		{
		}

		public Option<EnergyModeEventModel> GetFirstActiveUnlockedMatchingMode(PlayerModel player, PlayerModeId modeId)
		{
			return default(Option<EnergyModeEventModel>);
		}
	}
}
