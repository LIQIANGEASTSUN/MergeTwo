namespace GameLogic.Player.Items.Bubble;

[MetaSerializable]
public sealed class BubbleState
{
	[CompilerGenerated]
	private MetaTime <BubbleEndTime>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IBubbleBonus <Bonus>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<IBubbleBonus> <Bonuses>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private BubbleVariationId <VariationId>k__BackingField; //Field offset: 0x28

	[MetaMember(2, MetaMemberFlags::None (0))]
	[Obsolete("Bonuses should be used instead")]
	public IBubbleBonus Bonus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public List<IBubbleBonus> Bonuses
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaTime BubbleEndTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private BubbleVariationId VariationId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubbleState() { }

	public BubbleState(IPlayer player, IBubbleFeatures bubbleFeatures, MetaTime startTime, List<IBubbleBonus> bonuses) { }

	[CompilerGenerated]
	public IBubbleBonus get_Bonus() { }

	[CompilerGenerated]
	public List<IBubbleBonus> get_Bonuses() { }

	[CompilerGenerated]
	public MetaTime get_BubbleEndTime() { }

	[CompilerGenerated]
	public BubbleVariationId get_VariationId() { }

	[CompilerGenerated]
	public void set_Bonus(IBubbleBonus value) { }

	[CompilerGenerated]
	public void set_Bonuses(List<IBubbleBonus> value) { }

	[CompilerGenerated]
	private void set_BubbleEndTime(MetaTime value) { }

	[CompilerGenerated]
	private void set_VariationId(BubbleVariationId value) { }

}

