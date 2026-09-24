using Metaplay.Core.Config;

namespace Metaplay.Core.Activables
{
	public interface IMetaActivableConfigData : IGameConfigData, IMetaActivableInfo
	{
		string DisplayName { get; }

		string Description { get; }

		string DisplayShortInfo { get; }

		MetaActivableTimelineSettings Timeline => null;
	}
	public interface IMetaActivableConfigData<TKey> : IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<TKey>, IHasGameConfigKey<TKey>, IMetaActivableInfo<TKey> where TKey : IStringId
	{
	}
}
