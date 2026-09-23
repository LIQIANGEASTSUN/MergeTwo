using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.ExtraSpawns
{
	public class ExtraSpawnValuesValidator : IValidatable
	{
		public const string SHEET_NAME = "ExtraSpawnValues";

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
