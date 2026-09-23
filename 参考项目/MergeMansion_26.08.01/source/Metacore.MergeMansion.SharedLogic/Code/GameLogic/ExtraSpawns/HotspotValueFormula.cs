using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(3)]
	public class HotspotValueFormula : IExtraSpawnFormula
	{
		public F32 Calculate<TId>(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id)
		{
			return default(F32);
		}

		public static F32 Calculate<TId>(IPlayer player, F32 baseAmount, HotspotId hotspot, TId id)
		{
			return default(F32);
		}

		public static F32 GetRequirementValue<TId>(IPlayer player, PlayerRequirement requirement, TId id)
		{
			return default(F32);
		}
	}
}
