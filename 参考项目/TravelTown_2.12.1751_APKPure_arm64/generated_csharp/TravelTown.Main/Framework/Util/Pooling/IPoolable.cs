namespace Framework.Util.Pooling
{
	public interface IPoolable
	{
		void Initialize();

		void Deactivated();
	}
}
