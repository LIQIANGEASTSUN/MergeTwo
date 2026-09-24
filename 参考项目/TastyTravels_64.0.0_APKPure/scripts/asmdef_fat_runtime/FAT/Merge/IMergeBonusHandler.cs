namespace FAT.Merge
{
	public interface IMergeBonusHandler
	{
		int priority { get; }

		void Process(MergeBonusContext context);

		void OnRegister();

		void OnUnRegister();
	}
}
