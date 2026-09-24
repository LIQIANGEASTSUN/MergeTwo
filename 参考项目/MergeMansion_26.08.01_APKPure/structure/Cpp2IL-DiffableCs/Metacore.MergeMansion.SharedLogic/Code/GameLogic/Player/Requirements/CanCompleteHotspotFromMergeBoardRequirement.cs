namespace Code.GameLogic.Player.Requirements;

[MetaSerializableDerived(67)]
public class CanCompleteHotspotFromMergeBoardRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private HotspotId <HotspotId>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private HotspotId HotspotId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CanCompleteHotspotFromMergeBoardRequirement() { }

	public CanCompleteHotspotFromMergeBoardRequirement(HotspotId hotspotId) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public HotspotId get_HotspotId() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_HotspotId(HotspotId value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

