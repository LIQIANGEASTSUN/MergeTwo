namespace Code.GameLogic.LevelProgress;

public class AutoMergeEventLevelProgressDataSource : ILevelProgressDataSource
{
	private readonly CoreSupportEventInfo _eventInfo; //Field offset: 0x10

	public AutoMergeEventLevelProgressDataSource(CoreSupportEventInfo eventInfo) { }

	public override LevelProgressData GetLevelProgressData(IPlayer player) { }

}

