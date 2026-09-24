using Metaplay.Core.Config;

namespace Code.GameLogic.Config
{
	public interface IConfigItemSource<TConfigItem, TKey> : IGameConfigSourceItem<TKey, TConfigItem>, IHasGameConfigKey<TKey> where TConfigItem : IGameConfigData<TKey>
	{
	}
}
