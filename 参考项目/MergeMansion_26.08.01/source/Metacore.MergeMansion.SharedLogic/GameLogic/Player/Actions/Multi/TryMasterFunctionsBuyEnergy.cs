using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10916)]
	public class TryMasterFunctionsBuyEnergy : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public ShopItemId EnergyItemId { get; set; }

		public TryMasterFunctionsBuyEnergy()
		{
		}

		public TryMasterFunctionsBuyEnergy(MergeBoardId mergeBoardId, ShopItemId energyItemId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public AnalyticsContext CreateAnalyticsContext(IPlayer player, EnergyType energyType)
		{
			return null;
		}
	}
}
