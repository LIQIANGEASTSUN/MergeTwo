namespace GameLogic.Player.Actions.Basic;

[ModelAction(11004)]
public class DirectorTryMakeReadyForActivation : PlayerAction
{
	[IsReadOnly]
	internal struct DirectorActivationEventDefinition
	{
		public readonly Func<PlayerModel, Boolean, MetaActionResult> Operation; //Field offset: 0x0

		public DirectorActivationEventDefinition(Func<PlayerModel, Boolean, MetaActionResult> operation) { }

	}

	[MetaSerializable]
	internal enum DirectorActivationEventId : int
	{
		FirstToolBarrelActivation = 0,
		SecondToolBarrelActivation = 1,
	}

	private static readonly Dictionary<DirectorActivationEventId, DirectorActivationEventDefinition> definitions; //Field offset: 0x0
	[CompilerGenerated]
	private DirectorActivationEventId <EventId>k__BackingField; //Field offset: 0x10

	private DirectorActivationEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static DirectorTryMakeReadyForActivation() { }

	private DirectorTryMakeReadyForActivation() { }

	public DirectorTryMakeReadyForActivation(DirectorActivationEventId id) { }

	private static MetaActionResult ApplyFirstToolBarrelActivation(PlayerModel player, bool commit) { }

	private static MetaActionResult ApplySecondToolBarrelActivation(PlayerModel player, bool commit) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private DirectorActivationEventId get_EventId() { }

	[CompilerGenerated]
	private void set_EventId(DirectorActivationEventId value) { }

}

