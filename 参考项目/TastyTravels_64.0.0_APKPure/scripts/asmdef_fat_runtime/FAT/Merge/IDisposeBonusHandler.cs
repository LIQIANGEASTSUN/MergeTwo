namespace FAT.Merge
{
	public interface IDisposeBonusHandler
	{
		int priority { get; }

		void Process(DisposeBonusContext context);

		void OnRegister();

		void OnUnRegister();
	}
}
