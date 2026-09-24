namespace GameLogic.Player.Items;

public class OnFireFeaturesSource : IItemConfigPart<OnFireFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ItemKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ProducerType>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <RandomMarker>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private InitialSequenceType <InitialSequenceType>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <InitialSequence>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <Item>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<Int32> <Weight>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private bool <UseMaxLevel>k__BackingField; //Field offset: 0x48

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	private string InitialSequence
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private InitialSequenceType InitialSequenceType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> Item
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public string ItemKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private string ProducerType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RandomMarker
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool UseMaxLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> Weight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OnFireFeaturesSource() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	private string get_InitialSequence() { }

	[CompilerGenerated]
	private InitialSequenceType get_InitialSequenceType() { }

	[CompilerGenerated]
	private List<String> get_Item() { }

	[CompilerGenerated]
	public string get_ItemKey() { }

	[CompilerGenerated]
	private string get_ProducerType() { }

	[CompilerGenerated]
	private string get_RandomMarker() { }

	[CompilerGenerated]
	private bool get_UseMaxLevel() { }

	[CompilerGenerated]
	private List<Int32> get_Weight() { }

	[CompilerGenerated]
	private void set_InitialSequence(string value) { }

	[CompilerGenerated]
	private void set_InitialSequenceType(InitialSequenceType value) { }

	[CompilerGenerated]
	private void set_Item(List<String> value) { }

	[CompilerGenerated]
	public void set_ItemKey(string value) { }

	[CompilerGenerated]
	private void set_ProducerType(string value) { }

	[CompilerGenerated]
	private void set_RandomMarker(string value) { }

	[CompilerGenerated]
	private void set_UseMaxLevel(bool value) { }

	[CompilerGenerated]
	private void set_Weight(List<Int32> value) { }

	public override OnFireFeatures ToConfigData(IProducerFactory producerFactory) { }

}

