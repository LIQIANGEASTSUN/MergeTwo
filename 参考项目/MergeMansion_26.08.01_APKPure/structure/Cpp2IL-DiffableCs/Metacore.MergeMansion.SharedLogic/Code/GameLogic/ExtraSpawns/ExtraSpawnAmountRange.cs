namespace Code.GameLogic.ExtraSpawns;

[MetaSerializable]
public struct ExtraSpawnAmountRange
{
	[CompilerGenerated]
	private F32 <Min>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private F32 <Max>k__BackingField; //Field offset: 0x4

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private F32 Max
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private F32 Min
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ExtraSpawnAmountRange(F32 min, F32 max) { }

	[CompilerGenerated]
	[IsReadOnly]
	public F32 get_Max() { }

	[CompilerGenerated]
	[IsReadOnly]
	public F32 get_Min() { }

	public F32 GetAmount(RandomPCG random) { }

	[CompilerGenerated]
	private void set_Max(F32 value) { }

	[CompilerGenerated]
	private void set_Min(F32 value) { }

}

