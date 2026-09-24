using GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.Config
{
	public interface IValidatable
	{
		void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries);
	}
}
