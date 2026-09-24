using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum FuncType
	{
		[OriginalName("FuncTypeNone")]
		None = 0,
		[OriginalName("FuncTypeReward")]
		Reward = 1,
		[OriginalName("FuncTypePetInteract")]
		PetInteract = 2,
		[OriginalName("FuncTypeCollect")]
		Collect = 3,
		[OriginalName("FuncTypeToken")]
		Token = 4
	}
}
