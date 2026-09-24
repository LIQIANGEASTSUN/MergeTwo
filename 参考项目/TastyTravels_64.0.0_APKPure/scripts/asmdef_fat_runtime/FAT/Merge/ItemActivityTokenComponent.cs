using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class ItemActivityTokenComponent : ItemComponentBase
	{
		public bool CanShow_BL => false;

		public int ActivityId_BL { get; set; }

		public int TokenId_BL { get; set; }

		public int TokenNum_BL { get; set; }

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public void SetActivityInfo_BL(int activityId, int tokenId, int tokenNum)
		{
		}

		public void ClearActivityInfo_BL()
		{
		}

		public void _SerializeBL(ref int index, IList<AnyState> paramList)
		{
		}

		public void _DeserializeBL(ref int index, IList<AnyState> paramList)
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}
	}
}
