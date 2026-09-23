using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Requirements;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializable]
	public class BubbleVariantsDefinition : IGameConfigData<BubbleVariationId>, IGameConfigData, IHasGameConfigKey<BubbleVariationId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public BubbleVariationId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration BubbleDuration { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public Currencies OpenCurrency { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int OpenCost { get; set; }

		[MetaOnMemberDeserializationFailure("FixItemRef")]
		[MetaMember(5, MetaMemberFlags.None)]
		public ItemDef ReplacementItem { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int SpawnOdds { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<PlayerSegmentId> Segments { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> PlayerRequirements { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public BubbleVariantsDefinition()
		{
		}

		public BubbleVariantsDefinition(BubbleVariationId configKey, MetaDuration bubbleDuration, Currencies openCurrency, int openCost, int replacementItem, int spawnOdds, int priority, List<PlayerSegmentId> segments, List<PlayerRequirement> playerRequirements, int experimentPriority)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
