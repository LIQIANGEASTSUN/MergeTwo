using System;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemActiveSourceComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeActiveSource _config;

		[NonSerialized]
		public int _itemCount;

		[NonSerialized]
		public int _dropCount;

		public ComMergeActiveSource Config => null;

		public bool CanOutput => false;

		public bool WillDead => false;

		public int DropCount => 0;

		public void Consume()
		{
		}

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
