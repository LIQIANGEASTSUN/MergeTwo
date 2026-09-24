namespace Metaplay.Core.Config
{
	public interface IGameConfigSourceItem<TGameConfigKey, TGameConfigData> : IHasGameConfigKey<TGameConfigKey> where TGameConfigData : IGameConfigData<TGameConfigKey>
	{
		int ExperimentPriority => 0;

		TGameConfigData ToConfigData(GameConfigBuildLog buildLog);
	}
}
