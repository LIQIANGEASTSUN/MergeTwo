namespace GameLogic.Merge;

[MetaSerializable]
public class MergeCollection
{
	[MetaSerializable]
	internal class ItemPair
	{
		[CompilerGenerated]
		private int <First>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private int <Second>k__BackingField; //Field offset: 0x14

		[MetaMember(1, MetaMemberFlags::None (0))]
		public private int First
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		[MetaMember(2, MetaMemberFlags::None (0))]
		public private int Second
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public ItemPair() { }

		public ItemPair(int first, int second) { }

		protected bool Equals(ItemPair other) { }

		public virtual bool Equals(object obj) { }

		[CompilerGenerated]
		public int get_First() { }

		[CompilerGenerated]
		public int get_Second() { }

		public virtual int GetHashCode() { }

		public static ItemPair op_Implicit(ValueTuple<Int32, Int32> pair) { }

		[CompilerGenerated]
		private void set_First(int value) { }

		[CompilerGenerated]
		private void set_Second(int value) { }

	}

	[CompilerGenerated]
	private MetaDictionary<ItemPair, IItemProducer> <Collection>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaDictionary<ItemPair, IItemProducer> Collection
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeCollection() { }

	public MergeCollection(IEnumerable<ValueTuple`3<Int32, Int32, IItemProducer>> list) { }

	public MergeCollection(ValueTuple<Int32, Int32, IItemProducer>[] list) { }

	public bool ContainsPair(ValueTuple<Int32, Int32> pair) { }

	protected bool Equals(MergeCollection other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public MetaDictionary<ItemPair, IItemProducer> get_Collection() { }

	public virtual int GetHashCode() { }

	public IItemProducer GetPairResult(ValueTuple<Int32, Int32> pair) { }

	[CompilerGenerated]
	public void set_Collection(MetaDictionary<ItemPair, IItemProducer> value) { }

}

