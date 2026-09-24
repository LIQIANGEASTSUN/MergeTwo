namespace FAT.Merge
{
	public class ItemStateChangeContext
	{
		public enum ChangeReason
		{
			Default = 0,
			TrigAutoSourceDead = 1
		}

		public Item from;

		public MBItemView fromView;

		public ChangeReason reason;

		public static ItemStateChangeContext CreateWithFrom(Item from, ChangeReason reason)
		{
			return null;
		}

		public void SetFromView(MBItemView view)
		{
		}
	}
}
