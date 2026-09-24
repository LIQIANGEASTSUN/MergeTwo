using System.Runtime.Serialization;
using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(2)]
	public class PurchaseBubbleTrigger : IExtraSpawnTrigger
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int? Cost { get; set; }

		[IgnoreDataMember]
		public ExtraSpawnTriggerType Type => default(ExtraSpawnTriggerType);

		public PurchaseBubbleTrigger()
		{
		}

		public PurchaseBubbleTrigger(int? cost)
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
