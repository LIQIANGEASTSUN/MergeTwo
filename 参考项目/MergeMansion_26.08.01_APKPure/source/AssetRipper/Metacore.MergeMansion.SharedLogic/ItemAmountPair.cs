using Metaplay.Core.Model;

[MetaSerializable]
public sealed class ItemAmountPair
{
	[MetaMember(1, MetaMemberFlags.None)]
	public int itemId { get; set; }

	[MetaMember(2, MetaMemberFlags.None)]
	public int amount { get; set; }
}
