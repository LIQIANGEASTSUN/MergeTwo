namespace FAT.Merge
{
	public interface IScoreActivity
	{
		void AddScore(int score, SpawnBonusContext context);

		int GetCost();
	}
}
