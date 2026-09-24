namespace Code.GameLogic.Config;

public interface IValidatable
{

	public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

