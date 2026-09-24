using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Activables;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config.EnergyModeEvent
{
	[MetaSerializableDerived(13)]
	public class EnergyModeEventModel : MetaActivableState<EnergyModeEventId, EnergyModeEventInfo>, IGroupIdGetter
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public sealed override EnergyModeEventId ActivableId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public EnergyModeEnableType? CachedEnergyModeEnableType { get; set; }

		public bool StartNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool EndNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool FtueNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool EnergyModeEnableHandled
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public EnergyModeEventModel()
		{
		}

		public EnergyModeEventModel(EnergyModeEventInfo info)
		{
		}

		public override void OnStartedActivation(IPlayerModelBase player)
		{
		}

		public override void Finalize(IPlayerModelBase player)
		{
		}

		public void TryHandleEnergyModeEnable(PlayerModel playerModel)
		{
		}

		public void NotePhase(EnergyModeEventNotePhase phase)
		{
		}

		public Option<EventGroupId> GetGroupIdOption()
		{
			return default(Option<EventGroupId>);
		}
	}
}
