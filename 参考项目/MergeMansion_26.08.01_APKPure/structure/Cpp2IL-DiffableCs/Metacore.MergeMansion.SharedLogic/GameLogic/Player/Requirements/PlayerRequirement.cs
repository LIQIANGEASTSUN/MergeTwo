namespace GameLogic.Player.Requirements;

[MetaSerializable]
public abstract class PlayerRequirement : IValidatable, IPlayerRequirement
{

	protected PlayerRequirement() { }

	public abstract void ForceComplete(IPlayer playerModel) { }

	public abstract bool Matches(IPlayer playerModel) { }

	public abstract void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

