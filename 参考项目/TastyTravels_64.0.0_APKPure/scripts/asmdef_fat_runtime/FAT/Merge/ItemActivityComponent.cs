using fat.gamekitdata;

namespace FAT.Merge
{
	public class ItemActivityComponent : ItemComponentBase
	{
		public int activityId { get; set; }

		public int activityEnergy { get; set; }

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public void SetActivityEnergy(int actId, int energy)
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
