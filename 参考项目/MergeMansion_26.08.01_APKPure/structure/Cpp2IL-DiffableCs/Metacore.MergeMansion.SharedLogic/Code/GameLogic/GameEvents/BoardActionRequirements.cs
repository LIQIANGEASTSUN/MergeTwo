namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class BoardActionRequirements
{
	[CompilerGenerated]
	private List<PlayerRequirement> <AutospawnRequirements>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<PlayerRequirement> <ShopRequirements>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<PlayerRequirement> <EnergyModeRequirements>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<PlayerRequirement> <SellRequirements>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> AutospawnRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> EnergyModeRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> SellRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> ShopRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private BoardActionRequirements() { }

	public BoardActionRequirements(List<PlayerRequirement> autospawnRequirements, List<PlayerRequirement> shopRequirements, List<PlayerRequirement> energyModeRequirements, List<PlayerRequirement> sellRequirements) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_AutospawnRequirements() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_EnergyModeRequirements() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_SellRequirements() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_ShopRequirements() { }

	public List<PlayerRequirement> GetRequirements(BoardActionType actionType) { }

	public bool MatchesRequirements(IPlayer player, BoardActionType actionType) { }

	private bool MatchesRequirements(IPlayer player, List<PlayerRequirement> requirements) { }

	[CompilerGenerated]
	private void set_AutospawnRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_EnergyModeRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_SellRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_ShopRequirements(List<PlayerRequirement> value) { }

}

