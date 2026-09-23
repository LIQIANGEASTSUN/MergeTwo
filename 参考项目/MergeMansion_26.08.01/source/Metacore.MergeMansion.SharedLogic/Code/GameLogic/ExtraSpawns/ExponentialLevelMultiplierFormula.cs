using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(1)]
	public class ExponentialLevelMultiplierFormula : IExtraSpawnFormula
	{
		public F32 Calculate<TId>(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id)
		{
			return default(F32);
		}

		public static F32 Calculate(F32 baseAmount, int itemLevelNumber)
		{
			return default(F32);
		}
	}
}
