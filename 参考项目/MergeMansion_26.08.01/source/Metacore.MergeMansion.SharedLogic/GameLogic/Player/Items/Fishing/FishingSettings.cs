using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class FishingSettings : GameConfigKeyValue<FishingSettings>, IValidatable, IFishingSettings
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDictionary<int, int> SmallFishWaterDropletCounts { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDictionary<int, int> NonFishWaterDropletCounts { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int[] FishWeightCategoryOdds { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int[] FishWeightCategorySizePercentages { get; set; }

		[IgnoreDataMember]
		IReadOnlyDictionary<int, int> IFishingSettings.SmallFishWaterDropletCounts => null;

		[IgnoreDataMember]
		IReadOnlyDictionary<int, int> IFishingSettings.NonFishWaterDropletCounts => null;

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
