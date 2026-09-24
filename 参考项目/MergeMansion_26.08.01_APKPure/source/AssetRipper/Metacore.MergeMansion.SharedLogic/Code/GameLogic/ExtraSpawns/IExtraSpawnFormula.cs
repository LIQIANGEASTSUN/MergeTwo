using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	public interface IExtraSpawnFormula
	{
		F32 Calculate<TId>(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id);

		static IExtraSpawnFormula From(ExtraSpawnTriggerType triggerType, ExtraSpawnFormulaType formulaType)
		{
			return null;
		}
	}
}
