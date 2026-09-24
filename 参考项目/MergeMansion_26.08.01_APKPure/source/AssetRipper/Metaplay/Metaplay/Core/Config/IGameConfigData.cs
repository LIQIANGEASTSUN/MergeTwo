namespace Metaplay.Core.Config
{
	public interface IGameConfigData
	{
		int ExperimentPriority => 0;
	}
	public interface IGameConfigData<TKey> : IGameConfigData, IHasGameConfigKey<TKey>
	{
	}
}
