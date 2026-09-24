using DysonCore.DynamicJson.EnhancedEnumParser;

namespace Merger.Boosters.Declarations.Enums
{
	public enum BoosterType
	{
		[EnumMember.Fallback]
		Undefined = 0,
		TimeTwister = 1,
		OrderSurpriseBox = 2,
		TimeLimitedOrder = 3,
		JokerCard = 4,
		CardsBoomBooster = 5
	}
}
