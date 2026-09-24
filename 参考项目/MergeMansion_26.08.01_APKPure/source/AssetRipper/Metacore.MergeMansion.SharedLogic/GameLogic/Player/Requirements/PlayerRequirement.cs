using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializable]
	public abstract class PlayerRequirement : IValidatable, IPlayerRequirement
	{
		public abstract void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries);

		public abstract bool Matches(IPlayer playerModel);

		public abstract void ForceComplete(IPlayer playerModel);

		public PlayerRequirement()
		{
		}
	}
}
