namespace Code.GameLogic.GameEvents;

public class DigEventItemSource : IConfigItemSource<DigEventItemInfo, DigEventItemId>, IGameConfigSourceItem<DigEventItemId, DigEventItemInfo>, IHasGameConfigKey<DigEventItemId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private DigEventItemId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <AssetId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <GoesMuseum>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <MuseumItemWidth>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <MuseumItemHeight>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <CanBeShiny>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private DigEventItemId <ShinyReplaces>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <Coordinates>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <Weight>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private MuseumItemRotation <MuseumItemRotation>k__BackingField; //Field offset: 0x4C

	private string AssetId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool CanBeShiny
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override DigEventItemId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private string Coordinates
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private bool GoesMuseum
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int MuseumItemHeight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MuseumItemRotation MuseumItemRotation
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int MuseumItemWidth
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private DigEventItemId ShinyReplaces
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int Weight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public DigEventItemSource() { }

	[CompilerGenerated]
	private string get_AssetId() { }

	[CompilerGenerated]
	private bool get_CanBeShiny() { }

	[CompilerGenerated]
	public override DigEventItemId get_ConfigKey() { }

	[CompilerGenerated]
	private string get_Coordinates() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private bool get_GoesMuseum() { }

	[CompilerGenerated]
	private int get_MuseumItemHeight() { }

	[CompilerGenerated]
	private MuseumItemRotation get_MuseumItemRotation() { }

	[CompilerGenerated]
	private int get_MuseumItemWidth() { }

	[CompilerGenerated]
	private DigEventItemId get_ShinyReplaces() { }

	[CompilerGenerated]
	private int get_Weight() { }

	private List<ValueTuple`2<Int32, Int32>> ParseCoordinates(string coordinatesString) { }

	[CompilerGenerated]
	private void set_AssetId(string value) { }

	[CompilerGenerated]
	private void set_CanBeShiny(bool value) { }

	[CompilerGenerated]
	public void set_ConfigKey(DigEventItemId value) { }

	[CompilerGenerated]
	private void set_Coordinates(string value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_GoesMuseum(bool value) { }

	[CompilerGenerated]
	private void set_MuseumItemHeight(int value) { }

	[CompilerGenerated]
	private void set_MuseumItemRotation(MuseumItemRotation value) { }

	[CompilerGenerated]
	private void set_MuseumItemWidth(int value) { }

	[CompilerGenerated]
	private void set_ShinyReplaces(DigEventItemId value) { }

	[CompilerGenerated]
	private void set_Weight(int value) { }

	public override DigEventItemInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

