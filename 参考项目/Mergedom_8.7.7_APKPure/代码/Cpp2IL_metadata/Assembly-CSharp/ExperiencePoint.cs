//Type is in global namespace

public class ExperiencePoint : ConsumableItem
{
	[Inject]
	private UIAnimationController _uiAnimationController; //Field offset: 0xF8
	[Inject]
	private GameData _gameData; //Field offset: 0x100

	public ExperiencePoint() { }

	protected virtual void Collect() { }

}

