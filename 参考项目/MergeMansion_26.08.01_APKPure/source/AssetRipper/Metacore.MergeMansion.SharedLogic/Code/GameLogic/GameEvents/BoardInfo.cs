using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Config.Costs;
using GameLogic.ConfigPrefabs;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Requirements;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 12, 16 })]
	public class BoardInfo : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>
	{
		public MergeBoardId ConfigKey => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<BoardCell> BoardLayout { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int Width { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int Height { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public ICost ItemSellCost { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public ConfigPrefabId BoardPrefabId { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public MetaRef<BubblesSetup> BubbleSetup { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string BoardToggleSfxOverride { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public string BoardMusicOverride { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public int CobwebClearPoints { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public BoardActionRequirements ActionRequirements { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public int MaxEnergyConsumptionMultiplier { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public MergeBoardDisplay Display { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public MergeBoardUIStyle UIStyle { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public F32 Scale { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public int Offset { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public IBubbleLogic BubbleLogic => null;

		public IEnumerable<(ItemDefinition, ItemVisibility)> BoardTuples(IMergeMansionGameConfig config)
		{
			return null;
		}

		public BoardInfo()
		{
		}

		public BoardInfo(MergeBoardId boardId, string displayName, string description, List<(int, ItemVisibility)> boardLayout, ICost itemSellCost, ConfigPrefabId boardPrefabId, MetaRef<BubblesSetup> bubblesSetup, string boardToggleSfxOverride, string boardMusicOverride, string disableAutospawns, string disableSelling, string energyType, string cobwebClearPoints, int width, int height, int maxEnergyConsumptionMultiplier, string display, string uiStyle, string scale, string offset, int experimentPriority)
		{
		}

		public static TEnum ParseEnum<TEnum>(string valueStr) where TEnum : struct
		{
			return default(TEnum);
		}

		public BoardActionRequirements ConstructActionRequirements(string disableAutospawns, string disableSelling)
		{
			return null;
		}

		public List<PlayerRequirement> ParseActionRequirements(string disable)
		{
			return null;
		}
	}
}
