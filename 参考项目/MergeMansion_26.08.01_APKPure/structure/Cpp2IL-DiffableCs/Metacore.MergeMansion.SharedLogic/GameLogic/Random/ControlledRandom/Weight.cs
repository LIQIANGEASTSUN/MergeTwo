namespace GameLogic.Random.ControlledRandom;

[MetaSerializable]
public struct Weight
{
	internal class CompareByNextTime : Comparer<Weight>
	{
		private readonly F32 referencePoint; //Field offset: 0x10

		public CompareByNextTime(F32 referencePoint) { }

		public virtual int Compare(Weight l, Weight r) { }

		public bool CompareBool(Weight l, Weight r) { }

	}

	[CompilerGenerated]
	private F32 <NextEventTime>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private F32 <AverageTimeBetweenEvents>k__BackingField; //Field offset: 0x4
	[CompilerGenerated]
	private int <OriginalIndex>k__BackingField; //Field offset: 0x8

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private F32 AverageTimeBetweenEvents
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private F32 NextEventTime
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int OriginalIndex
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public Weight(F32 frequency, int originalIndex) { }

	private Weight(F32 nextEventTime, F32 averageTimeBetweenEvents, int originalIndex) { }

	[CompilerGenerated]
	[IsReadOnly]
	public F32 get_AverageTimeBetweenEvents() { }

	[CompilerGenerated]
	[IsReadOnly]
	public F32 get_NextEventTime() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_OriginalIndex() { }

	[CompilerGenerated]
	private void set_AverageTimeBetweenEvents(F32 value) { }

	[CompilerGenerated]
	private void set_NextEventTime(F32 value) { }

	[CompilerGenerated]
	private void set_OriginalIndex(int value) { }

	public Weight SetNextEventTime(F32 value) { }

}

