namespace Merger.MergeBoard.PowerBoost.Services
{
	public interface IPowerBoostPersistanceService
	{
		void Setup(string id);

		bool IsBoostLocallyUnlocked(int boostMode);

		void MarkBoostAsUnlocked(int boostMode);

		bool WasTooltipShownForBoost(int boostMode);

		void MarkTooltipAsShownForBoost(int boostMode);
	}
}
