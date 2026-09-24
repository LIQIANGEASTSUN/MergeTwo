using System.Collections.Generic;
using System.Runtime.Serialization;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class DigEventItemInfo : IGameConfigData<DigEventItemId>, IGameConfigData, IHasGameConfigKey<DigEventItemId>
	{
		public const string ShinyAppendix = "_Shiny";

		[MetaMember(1, MetaMemberFlags.None)]
		public DigEventItemId ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string AssetId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool GoesMuseum { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int MuseumItemWidth { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int MuseumItemHeight { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool CanBeShiny { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public DigEventItemId ShinyReplaces { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<(int x, int y)> Coordinates { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int Weight { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public MuseumItemRotation MuseumItemRotation { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		[IgnoreDataMember]
		public string ResolvedShinyAssetId => null;

		public DigEventItemId ConfigKey => null;

		public DigEventItemInfo()
		{
		}

		public DigEventItemInfo(DigEventItemId configKey, string assetId, bool goesMuseum, int museumItemWidth, int museumItemHeight, bool canBeShiny, DigEventItemId shinyReplaces, List<(int x, int y)> coordinates, int weight, MuseumItemRotation museumItemRotation, int experimentPriority)
		{
		}
	}
}
