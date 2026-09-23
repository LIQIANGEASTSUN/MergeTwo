using Merge;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

[MetaSerializable]
public sealed class TimedMergeBoardLiveConfig : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>
{
	[MetaMember(1, MetaMemberFlags.None)]
	public MergeBoardId MergeBoardId { get; set; }

	[MetaMember(2, MetaMemberFlags.None)]
	public bool IsEnabled { get; set; }

	[MetaSerializerOmitNull]
	[MetaMember(999, MetaMemberFlags.None)]
	public int ExperimentPriority { get; set; }

	public MergeBoardId ConfigKey => null;
}
