using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum PopupType
	{
		[OriginalName("PopupTypeLogin")]
		Login = 0,
		[OriginalName("PopupTypeEnergy")]
		Energy = 1,
		[OriginalName("PopupTypeDiamond")]
		Diamond = 2,
		[OriginalName("PopupTypeTreasureEnterNoKey")]
		TreasureEnterNoKey = 3
	}
}
