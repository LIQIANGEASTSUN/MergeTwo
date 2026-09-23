using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 7 })]
	public class OnFireFeatures : IOnFireFeatures
	{
		public static readonly OnFireFeatures NoOnFire;

		[IgnoreDataMember]
		[NonSerialized]
		public Option<IActivationFeatures> _maxLevelActivationFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public IItemSpawner OnFireSpawn { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public bool UseMaxLevel { get; set; }

		[IgnoreDataMember]
		public bool SupportsOnFire => false;

		public OnFireFeatures()
		{
		}

		public OnFireFeatures(IItemSpawner onFireSpawn, bool useMaxLevel)
		{
		}

		public IItemDefinition GetActivationItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public bool IsInInitialSequence(IPlayer player, ProducerContext producerContext)
		{
			return false;
		}

		public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, ProducerContext producerContext)
		{
			return null;
		}

		public int GetItemsPerActivation(IMergeItem mergeItem, IPlayer player)
		{
			return 0;
		}

		public Option<IActivationFeatures> TryGetMaxLevelActivationFeatures(IMergeItem item, IMergeMansionGameConfig config)
		{
			return default(Option<IActivationFeatures>);
		}
	}
}
