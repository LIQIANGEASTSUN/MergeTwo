namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class DigEventItemInfo : IGameConfigData<DigEventItemId>, IGameConfigData, IHasGameConfigKey<DigEventItemId>
{
	public const string ShinyAppendix = "_Shiny"; //Field offset: 0x0
	[CompilerGenerated]
	private DigEventItemId <ItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <AssetId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <GoesMuseum>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <MuseumItemWidth>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <MuseumItemHeight>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <CanBeShiny>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private DigEventItemId <ShinyReplaces>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"x", "y"})]
	private List<ValueTuple`2<Int32, Int32>> <Coordinates>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <Weight>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private MuseumItemRotation <MuseumItemRotation>k__BackingField; //Field offset: 0x44
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x48

	[MetaMember(2, MetaMemberFlags::None (0))]
	public string AssetId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public bool CanBeShiny
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override DigEventItemId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"x", "y"})]
	public List<ValueTuple`2<Int32, Int32>> Coordinates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public bool GoesMuseum
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public DigEventItemId ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int MuseumItemHeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public MuseumItemRotation MuseumItemRotation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public int MuseumItemWidth
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public string ResolvedShinyAssetId
	{
		 get { } //Length: 76
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private DigEventItemId ShinyReplaces
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public int Weight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public DigEventItemInfo(DigEventItemId configKey, string assetId, bool goesMuseum, int museumItemWidth, int museumItemHeight, bool canBeShiny, DigEventItemId shinyReplaces, List<ValueTuple`2<Int32, Int32>> coordinates, int weight, MuseumItemRotation museumItemRotation, int experimentPriority) { }

	public DigEventItemInfo() { }

	[CompilerGenerated]
	public string get_AssetId() { }

	[CompilerGenerated]
	public bool get_CanBeShiny() { }

	public override DigEventItemId get_ConfigKey() { }

	[CompilerGenerated]
	public List<ValueTuple`2<Int32, Int32>> get_Coordinates() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public bool get_GoesMuseum() { }

	[CompilerGenerated]
	public DigEventItemId get_ItemId() { }

	[CompilerGenerated]
	public int get_MuseumItemHeight() { }

	[CompilerGenerated]
	public MuseumItemRotation get_MuseumItemRotation() { }

	[CompilerGenerated]
	public int get_MuseumItemWidth() { }

	public string get_ResolvedShinyAssetId() { }

	[CompilerGenerated]
	private DigEventItemId get_ShinyReplaces() { }

	[CompilerGenerated]
	public int get_Weight() { }

	[CompilerGenerated]
	public void set_AssetId(string value) { }

	[CompilerGenerated]
	public void set_CanBeShiny(bool value) { }

	[CompilerGenerated]
	public void set_Coordinates(List<ValueTuple`2<Int32, Int32>> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_GoesMuseum(bool value) { }

	[CompilerGenerated]
	public void set_ItemId(DigEventItemId value) { }

	[CompilerGenerated]
	public void set_MuseumItemHeight(int value) { }

	[CompilerGenerated]
	public void set_MuseumItemRotation(MuseumItemRotation value) { }

	[CompilerGenerated]
	public void set_MuseumItemWidth(int value) { }

	[CompilerGenerated]
	private void set_ShinyReplaces(DigEventItemId value) { }

	[CompilerGenerated]
	public void set_Weight(int value) { }

}

