using System.Runtime.Serialization;
using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(5)]
	public class CompleteDailyTaskV2Trigger : IExtraSpawnTrigger
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int? Item { get; set; }

		[IgnoreDataMember]
		public ExtraSpawnTriggerType Type => default(ExtraSpawnTriggerType);

		public CompleteDailyTaskV2Trigger()
		{
		}

		public CompleteDailyTaskV2Trigger(int? item)
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
	}
}
