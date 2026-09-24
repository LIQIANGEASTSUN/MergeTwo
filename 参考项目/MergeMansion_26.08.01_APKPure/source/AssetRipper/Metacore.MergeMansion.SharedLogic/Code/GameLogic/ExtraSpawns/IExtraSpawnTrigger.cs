using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	public interface IExtraSpawnTrigger
	{
		ExtraSpawnTriggerType Type { get; }

		bool Matches(IExtraSpawnTrigger other);

		CurrencySource ToCurrencySource();

		MergeBoardAct.ItemActSource ToItemActSource();

		static IExtraSpawnTrigger From(ExtraSpawnTriggerType type, string args)
		{
			return null;
		}

		Option<IItemDefinition> GetItem(IPlayer player, Option<ExtraSpawnBoardData> boardDataOption)
		{
			return default(Option<IItemDefinition>);
		}
	}
}
