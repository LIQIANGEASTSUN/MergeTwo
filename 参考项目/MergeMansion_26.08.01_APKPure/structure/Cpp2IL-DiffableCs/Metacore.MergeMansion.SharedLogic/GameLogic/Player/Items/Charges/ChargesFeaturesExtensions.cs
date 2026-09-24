namespace GameLogic.Player.Items.Charges;

[Extension]
public static class ChargesFeaturesExtensions
{

	[Extension]
	public static ChargesState Combine(IChargesFeatures chargesFeatures, ChargesState sourceState, ChargesState targetState, MetaTime timestamp) { }

	[Extension]
	public static ChargesState FromExisting(IChargesFeatures chargesFeatures) { }

}

