using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Fallbacks
{
	[MetaSerializable]
	public class FallbackPlayerRewardId : StringId<FallbackPlayerRewardId>
	{
		public static readonly FallbackPlayerRewardId None;

		public const string Prefix = "FallbackReward_";
	}
}
