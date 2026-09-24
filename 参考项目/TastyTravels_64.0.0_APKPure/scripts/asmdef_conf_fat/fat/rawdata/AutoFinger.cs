using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum AutoFinger
	{
		[OriginalName("AutoFingerMeta")]
		Meta = 0,
		[OriginalName("AutoFingerOrder")]
		Order = 1,
		[OriginalName("AutoFingerGiftBox")]
		GiftBox = 2,
		[OriginalName("AutoFingerMergeBonus")]
		MergeBonus = 3,
		[OriginalName("AutoFingerMergeChest")]
		MergeChest = 4,
		[OriginalName("AutoFingerAutoSource")]
		AutoSource = 5,
		[OriginalName("AutoFingerTapSource")]
		TapSource = 6,
		[OriginalName("AutoFingerBag")]
		Bag = 7,
		[OriginalName("AutoFingerSaleUI")]
		SaleUi = 8,
		[OriginalName("AutoFingerSale")]
		Sale = 9
	}
}
