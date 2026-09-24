namespace MergePuzzle
{
	public interface IConfigAdaptor<T> : IConfigAdaptorBase where T : AdaptorBase
	{
		T GetConfigAdaptor();
	}
}
