using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemBonusCompoent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeBonus mConfig;

		public int bonusId => 0;

		public int bonusCount => 0;

		public FuncType funcType => default(FuncType);

		public bool autoUse => false;

		public bool scaleAnim => false;

		public bool inventoryAutoUse => false;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public override void OnUpdate(int dt)
		{
		}

		public void _TryAutoUse()
		{
		}

		public bool CanUse()
		{
			return false;
		}

		public bool CanPutInInventory()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdate(int P0)
		{
		}
	}
}
