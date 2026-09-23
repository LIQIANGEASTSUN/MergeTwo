using System.Runtime.Serialization;
using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(3)]
	public class ProduceItemTrigger : IExtraSpawnTrigger
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int EnergyConsumptionMultiplier { get; set; }

		[IgnoreDataMember]
		public ExtraSpawnTriggerType Type => default(ExtraSpawnTriggerType);

		public ProduceItemTrigger()
		{
		}

		public ProduceItemTrigger(int energyConsumptionMultiplier)
		{
		}

		public bool Matches(IExtraSpawnTrigger other)
		{
			return false;
		}

		public CurrencySource ToCurrencySource()
		{
			return default(CurrencySource);
		}

		public MergeBoardAct.ItemActSource ToItemActSource()
		{
			return default(MergeBoardAct.ItemActSource);
		}

		public override string ToString()
		{
			return null;
		}
	}
}
