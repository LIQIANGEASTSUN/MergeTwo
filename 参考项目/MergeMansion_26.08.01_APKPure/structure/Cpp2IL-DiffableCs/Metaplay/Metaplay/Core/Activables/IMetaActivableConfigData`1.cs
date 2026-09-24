namespace Metaplay.Core.Activables;

public interface IMetaActivableConfigData : IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<TKey>, IHasGameConfigKey<TKey>, IMetaActivableInfo<TKey>
{

}

