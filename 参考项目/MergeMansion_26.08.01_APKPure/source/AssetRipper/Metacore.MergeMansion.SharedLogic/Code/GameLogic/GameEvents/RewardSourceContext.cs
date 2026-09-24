using Code.GameLogic.IAP;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public struct RewardSourceContext
	{
		public static RewardSourceContext MakeYourOwnOffer => default(RewardSourceContext);

		public static RewardSourceContext BigBundleOffer => default(RewardSourceContext);

		public static RewardSourceContext GenericOffer => default(RewardSourceContext);

		public static RewardSourceContext None => default(RewardSourceContext);

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsOffer { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string SourceId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int LevelNumber { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int PlayerLevel { get; set; }

		public bool IsValid => false;

		public RewardSourceContext(OfferType offerType)
		{
			IsOffer = false;
			SourceId = null;
			LevelNumber = 0;
			PlayerLevel = 0;
		}

		public RewardSourceContext(string sourceId, bool isOffer = false)
		{
			IsOffer = false;
			SourceId = null;
			LevelNumber = 0;
			PlayerLevel = 0;
		}

		public RewardSourceContext(string sourceId, int levelNumber, int playerLevel, bool isOffer = false)
		{
			IsOffer = false;
			SourceId = null;
			LevelNumber = 0;
			PlayerLevel = 0;
		}
	}
}
