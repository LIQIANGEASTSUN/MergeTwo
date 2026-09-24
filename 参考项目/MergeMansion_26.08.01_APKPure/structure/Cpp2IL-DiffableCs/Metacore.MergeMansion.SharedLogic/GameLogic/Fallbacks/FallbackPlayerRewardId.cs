namespace GameLogic.Fallbacks;

[MetaSerializable]
public class FallbackPlayerRewardId : StringId<FallbackPlayerRewardId>
{
	public static readonly FallbackPlayerRewardId None; //Field offset: 0x0
	public const string Prefix = "FallbackReward_"; //Field offset: 0x0

	private static FallbackPlayerRewardId() { }

	public FallbackPlayerRewardId() { }

}

