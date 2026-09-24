namespace GameLogic.Player.Items.Fishing;

public class FishingSettingsSource : GameConfigKeyValue<FishingSettingsSource>
{
	private class FishingSettingsTransformer : IKeyValueStructureTransformer<FishingSettings, FishingSettingsSource>
	{

		public FishingSettingsTransformer() { }

		[CompilerGenerated]
		private VariantConfigStructureMember <Transform>b__0_0(VariantConfigStructureMember member) { }

		private VariantConfigStructureMember ChangeType(VariantConfigStructureMember source) { }

		public override IEnumerable<VariantConfigStructureMember> Transform(IEnumerable<VariantConfigStructureMember> source) { }

	}

	public static readonly IKeyValueStructureTransformer<FishingSettings, FishingSettingsSource> Transformer; //Field offset: 0x0
	public string SmallFishWaterDropletCounts; //Field offset: 0x10
	public string NonFishWaterDropletCounts; //Field offset: 0x18
	public string FishWeightCategoryOdds; //Field offset: 0x20
	public string FishWeightCategorySizePercentages; //Field offset: 0x28

	private static FishingSettingsSource() { }

	public FishingSettingsSource() { }

}

