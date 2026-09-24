using Metaplay.Core.Model;

[MetaSerializable]
public sealed class CurrencyAmountPair
{
	[MetaMember(1, MetaMemberFlags.None)]
	public Currencies currency { get; set; }

	[MetaMember(2, MetaMemberFlags.None)]
	public int amount { get; set; }
}
