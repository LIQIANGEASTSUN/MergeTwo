using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Codex;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.MergeChains
{
	[MetaSerializable]
	public class MergeChainDefinition : IGameConfigData<MergeChainId>, IGameConfigData, IHasGameConfigKey<MergeChainId>, IValidatable, IMergeChainDefinition
	{
		public static readonly HashSet<Type> allowedTypes;

		[IgnoreDataMember]
		CodexCategoryInfo IMergeChainDefinition.CodexCategory => null;

		[IgnoreDataMember]
		CodexDiscoveryRewardInfo IMergeChainDefinition.DiscoveryReward => null;

		[IgnoreDataMember]
		IReadOnlyList<IMergeChainElement> IMergeChainDefinition.PrimaryChain => null;

		[IgnoreDataMember]
		IReadOnlyList<IMergeChainElement> IMergeChainDefinition.FallbackChain => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public MergeChainId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<IMergeChainElement> PrimaryChain { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<IMergeChainElement> FallbackChain { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaRef<CodexCategoryInfo> CodexCategory { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaRef<CodexDiscoveryRewardInfo> DiscoveryRewardRef { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public string CompletionSfx { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int? InitialLevel { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public int? UnsellableUntilPlayerLevel { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int? ShowSellConfirmationUntilPlayerLevel { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string OverrideMergeChainSfx { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public int Length => 0;

		public int FallbackLength => 0;

		public IEnumerable<IItemDefinition> DefaultItems(IPlayer player)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> DefaultItems(IMergeMansionGameConfig config)
		{
			return null;
		}

		public MergeChainDefinition()
		{
		}

		public MergeChainDefinition(MergeChainId chainId, object[] items, int experimentPriority)
		{
		}

		public MergeChainDefinition(MergeChainId chainId, object[] items, object[] fallbacks)
		{
		}

		public MergeChainDefinition(MergeChainId configKey, IEnumerable<IMergeChainElement> primaryChain, IEnumerable<IMergeChainElement> fallbackChain, int? initialLevel, int? unsellableUntilPlayerLevel, int? showSellConfirmationUntilPlayerLevel, int experimentPriority)
		{
		}

		public static IMergeChainElement Convert(object sourceObject)
		{
			return null;
		}

		[Conditional("UNITY_EDITOR")]
		[Conditional("DO_EXTRA_CHECKS")]
		public static void CheckIfValidTypes(IEnumerable<object> entries)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void ValidateChainElementVariants(List<IMergeChainElement> chain, string field, GameConfigValidationResult variantEntries)
		{
		}
	}
}
