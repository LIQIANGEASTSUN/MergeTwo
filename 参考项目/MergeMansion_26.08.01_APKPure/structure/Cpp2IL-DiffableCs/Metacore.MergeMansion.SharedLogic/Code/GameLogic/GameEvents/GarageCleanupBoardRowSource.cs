namespace Code.GameLogic.GameEvents;

public class GarageCleanupBoardRowSource : IConfigItemSource<GarageCleanupBoardRowInfo, GarageCleanupBoardRowId>, IGameConfigSourceItem<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo>, IHasGameConfigKey<GarageCleanupBoardRowId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<String, Int32> <>9__16_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <ToConfigData>b__16_0(string x) { }

	}

	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private GarageCleanupBoardId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <RowNumber>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <ColumnNumber>k__BackingField; //Field offset: 0x28

	private List<String> ColumnNumber
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupBoardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private override GarageCleanupBoardRowId Metaplay.Core.Config.IHasGameConfigKey<Code.GameLogic.GameEvents.GarageCleanupBoardRowId>.ConfigKey
	{
		private get { } //Length: 48
	}

	private int RowNumber
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupBoardRowSource() { }

	[CompilerGenerated]
	private List<String> get_ColumnNumber() { }

	[CompilerGenerated]
	public GarageCleanupBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private int get_RowNumber() { }

	private override GarageCleanupBoardRowId Metaplay.Core.Config.IHasGameConfigKey<Code.GameLogic.GameEvents.GarageCleanupBoardRowId>.get_ConfigKey() { }

	[CompilerGenerated]
	private void set_ColumnNumber(List<String> value) { }

	[CompilerGenerated]
	public void set_ConfigKey(GarageCleanupBoardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_RowNumber(int value) { }

	public override GarageCleanupBoardRowInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

