using GameLogic.Player;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(5)]
	public class ItemLevelFormula : IExtraSpawnFormula
	{
		public F32 Calculate<TId>(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id)
		{
			return default(F32);
		}

		public static F32 Calculate(F32 baseAmount, Option<IItemDefinition> itemOption)
		{
			return default(F32);
		}
	}
}
