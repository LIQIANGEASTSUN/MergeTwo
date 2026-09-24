namespace FAT.Merge
{
	public interface ISpawnBonusHandler
	{
		int priority { get; }

		void Process(SpawnBonusContext context);

		void OnRegister();

		void OnUnRegister();
	}
}
