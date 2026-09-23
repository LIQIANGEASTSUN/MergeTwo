using System;
using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.OverrideSpawnChance
{
	public class OverrideSpawnChanceFeaturesSource : IItemConfigPart<OverrideSpawnChanceFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		[NonSerialized]
		public List<string> TriggerType;

		[NonSerialized]
		public List<string> TriggerId;

		[NonSerialized]
		public List<string> TriggerAmount;

		[NonSerialized]
		public List<string> TriggerAux0;

		[NonSerialized]
		public List<string> TargetBoard;

		[NonSerialized]
		public List<string> ChanceToSpawn;

		[NonSerialized]
		public List<string> EndType;

		[NonSerialized]
		public List<string> EndId;

		[NonSerialized]
		public List<string> EndAmount;

		[NonSerialized]
		public List<string> EndAux0;

		public string ConfigKey => null;

		public string ItemType => null;

		public string ItemKey { get; set; }

		public OverrideSpawnChanceFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
