namespace MergePuzzle
{
	public readonly struct ItemLinkID
	{
		public const int LINK_BITS = 16;

		public const int CHAIN_MASK = -65536;

		public const int LINK_MASK = 65535;

		public readonly int Value;

		public int ChainIndex => 0;

		public int LinkIndex => 0;

		public ItemLinkID(int chainIndex, int linkIndex)
		{
			Value = 0;
		}

		public static implicit operator int(ItemLinkID linkID)
		{
			return 0;
		}

		public static implicit operator ItemLinkID(int value)
		{
			return default(ItemLinkID);
		}
	}
}
