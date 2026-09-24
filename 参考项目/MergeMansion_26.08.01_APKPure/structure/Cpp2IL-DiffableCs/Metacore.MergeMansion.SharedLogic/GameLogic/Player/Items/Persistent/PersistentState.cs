namespace GameLogic.Player.Items.Persistent;

[MetaSerializable]
public class PersistentState
{
	[CompilerGenerated]
	private bool <HasItemStates>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <DecayCycles>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <ItemStates>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ItemDefinition <ResetToItem>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <StartCycles>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <CurrentState>k__BackingField; //Field offset: 0x2C

	[MetaMember(6, MetaMemberFlags::None (0))]
	public int CurrentState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int DecayCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public bool HasItemStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public int ItemStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public ItemDefinition ResetToItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int StartCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public PersistentState(bool hasItemStates, int decayCycles, int itemStates, IItemDefinition resetToItem, int startCycles, int currentState) { }

	public PersistentState() { }

	public bool AreCyclesFull() { }

	[CompilerGenerated]
	public int get_CurrentState() { }

	[CompilerGenerated]
	public int get_DecayCycles() { }

	[CompilerGenerated]
	public bool get_HasItemStates() { }

	[CompilerGenerated]
	public int get_ItemStates() { }

	[CompilerGenerated]
	public ItemDefinition get_ResetToItem() { }

	[CompilerGenerated]
	public int get_StartCycles() { }

	public void NextState() { }

	public void ResetCycles() { }

	[CompilerGenerated]
	public void set_CurrentState(int value) { }

	[CompilerGenerated]
	public void set_DecayCycles(int value) { }

	[CompilerGenerated]
	public void set_HasItemStates(bool value) { }

	[CompilerGenerated]
	public void set_ItemStates(int value) { }

	[CompilerGenerated]
	public void set_ResetToItem(ItemDefinition value) { }

	[CompilerGenerated]
	public void set_StartCycles(int value) { }

}

