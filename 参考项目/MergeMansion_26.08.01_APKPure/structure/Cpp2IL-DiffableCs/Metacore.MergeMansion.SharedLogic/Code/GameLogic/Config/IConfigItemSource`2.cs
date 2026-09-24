namespace Code.GameLogic.Config;

public interface IConfigItemSource : IGameConfigSourceItem<TKey, TConfigItem>, IHasGameConfigKey<TKey>
{

}

