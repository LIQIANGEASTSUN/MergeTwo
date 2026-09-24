namespace Merger.CoinMultipliers.Services
{
	public interface ICoinMultiplierAmountResolver
	{
		bool TryResolveAmount(string itemId, out int amount);
	}
}
