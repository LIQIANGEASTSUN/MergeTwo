namespace Code.GameLogic.LevelProgress;

public class AutoMergeEventLevelDataSource : ILevelDataSource
{
	private static readonly LevelData FALLBACK_LEVEL_DATA; //Field offset: 0x0
	private readonly CoreSupportEventInfo _eventInfo; //Field offset: 0x10

	private static AutoMergeEventLevelDataSource() { }

	public AutoMergeEventLevelDataSource(CoreSupportEventInfo eventInfo) { }

	public override LevelData GetLevelData(IPlayer player, int level) { }

	public override Option<Int32> GetMainLevelCount(IPlayer player) { }

}

