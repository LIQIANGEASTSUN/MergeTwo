using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Fishing
{
	public class FishingSettingsSource : GameConfigKeyValue<FishingSettingsSource>
	{
		public class FishingSettingsTransformer : IKeyValueStructureTransformer<FishingSettings, FishingSettingsSource>
		{
			public IEnumerable<VariantConfigStructureMember> Transform(IEnumerable<VariantConfigStructureMember> source)
			{
				return null;
			}

			public VariantConfigStructureMember ChangeType(VariantConfigStructureMember source)
			{
				return default(VariantConfigStructureMember);
			}
		}

		public string SmallFishWaterDropletCounts;

		public string NonFishWaterDropletCounts;

		public string FishWeightCategoryOdds;

		public string FishWeightCategorySizePercentages;

		public static readonly IKeyValueStructureTransformer<FishingSettings, FishingSettingsSource> Transformer;
	}
}
