namespace GameLogic.Player.Items.Sinkable;

[MetaSerializableDerived(1)]
public class LevelUpMergeChainSinkInAction : ISinkInAction
{
	[CompilerGenerated]
	private MergeChainId <MergeChainId>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MergeChainId MergeChainId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public LevelUpMergeChainSinkInAction() { }

	public LevelUpMergeChainSinkInAction(MergeChainId mergeChainId) { }

	[CompilerGenerated]
	private MergeChainId get_MergeChainId() { }

	[CompilerGenerated]
	private void set_MergeChainId(MergeChainId value) { }

	public override void SinkIn(IPlayer player, MergeItem itemToSinkIn) { }

}

