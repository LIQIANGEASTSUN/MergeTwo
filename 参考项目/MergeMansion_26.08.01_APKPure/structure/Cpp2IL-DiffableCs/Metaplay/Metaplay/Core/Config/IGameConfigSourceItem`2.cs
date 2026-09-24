namespace Metaplay.Core.Config;

public interface IGameConfigSourceItem : IHasGameConfigKey<TGameConfigKey>
{

	public int ExperimentPriority
	{
		 get { } //Length: 8
	}

	public int get_ExperimentPriority() { }

	public TGameConfigData ToConfigData(GameConfigBuildLog buildLog) { }

}

