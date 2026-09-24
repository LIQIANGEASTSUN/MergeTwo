namespace GameLogic.Hotspots.Actions;

[MetaSerializableDerived(7)]
public class DiscoverMergeChain : IDirectorAction
{
	[CompilerGenerated]
	private MergeChainId <MergeChainId>k__BackingField; //Field offset: 0x10

	[IgnoreDataMember]
	public override bool IsVisualAction
	{
		 get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MergeChainId MergeChainId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private DiscoverMergeChain() { }

	public DiscoverMergeChain(MergeChainId mergeChainId) { }

	public override bool get_IsVisualAction() { }

	[CompilerGenerated]
	private MergeChainId get_MergeChainId() { }

	public override void Run(IPlayer playerModel, IDirectorActionContext actionContext) { }

	[CompilerGenerated]
	private void set_MergeChainId(MergeChainId value) { }

}

