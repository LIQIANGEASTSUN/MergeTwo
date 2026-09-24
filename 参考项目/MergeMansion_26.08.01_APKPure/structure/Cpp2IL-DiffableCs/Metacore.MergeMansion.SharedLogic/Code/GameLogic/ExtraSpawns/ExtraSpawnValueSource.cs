namespace Code.GameLogic.ExtraSpawns;

public class ExtraSpawnValueSource : IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ExtraSpawnValueType <Type>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F32 <Value>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private List<String> <CustomValueIds>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<F32> <CustomValues>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	public private override string ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private List<String> CustomValueIds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private List<F32> CustomValues
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public private ExtraSpawnValueType Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private F32 Value
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ExtraSpawnValueSource() { }

	[CompilerGenerated]
	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public List<String> get_CustomValueIds() { }

	[CompilerGenerated]
	public List<F32> get_CustomValues() { }

	[CompilerGenerated]
	public int get_ExperimentPriority() { }

	[CompilerGenerated]
	public ExtraSpawnValueType get_Type() { }

	[CompilerGenerated]
	public F32 get_Value() { }

	private ValueTuple<MetaDictionary`2<Currencies, F32>, MetaDictionary`2<CoreSupportEventTokenId, F32>> ParseCustomValues() { }

	[CompilerGenerated]
	private void set_ConfigKey(string value) { }

	[CompilerGenerated]
	private void set_CustomValueIds(List<String> value) { }

	[CompilerGenerated]
	private void set_CustomValues(List<F32> value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Type(ExtraSpawnValueType value) { }

	[CompilerGenerated]
	private void set_Value(F32 value) { }

	public ExtraSpawnCardStackValueInfo ToCardStackValue() { }

	public ExtraSpawnCurrencyValueInfo ToCurrencyValue() { }

	public ExtraSpawnIllustrationValueInfo ToIllustrationValue() { }

	public ExtraSpawnItemValueInfo ToItemValue() { }

}

