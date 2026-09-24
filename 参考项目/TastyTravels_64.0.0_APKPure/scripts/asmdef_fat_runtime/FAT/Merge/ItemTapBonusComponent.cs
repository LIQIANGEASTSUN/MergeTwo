using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemTapBonusComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComTapBonus mConfig;

		public int bonusId => 0;

		public int bonusCount => 0;

		public FuncType funcType => default(FuncType);

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
