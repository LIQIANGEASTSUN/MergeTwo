using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemTokenMultiComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeTokenMultiplier mConfig;

		public bool isCounting => false;

		public int countdown => 0;

		public ComMergeTokenMultiplier config => null;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public ItemEffectType GetBgEffectType()
		{
			return default(ItemEffectType);
		}

		public ItemEffectType GetTriggerEffectType()
		{
			return default(ItemEffectType);
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
