namespace GameLogic.Random.ControlledRandom;

[MetaSerializable]
public class ControlledRandomFiniteSequence
{
	[CompilerGenerated]
	private ulong <Seed>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Index>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int Index
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private ulong Seed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ControlledRandomFiniteSequence() { }

	public ControlledRandomFiniteSequence(ulong seed) { }

	[CompilerGenerated]
	public int get_Index() { }

	[CompilerGenerated]
	public ulong get_Seed() { }

	public T Pick(List<T> elements) { }

	public T Pick(List<T> elements, int index) { }

	public int Pick(int maxExclusive) { }

	public int Pick(int maxExclusive, int index) { }

	[CompilerGenerated]
	public void set_Index(int value) { }

	[CompilerGenerated]
	private void set_Seed(ulong value) { }

}

