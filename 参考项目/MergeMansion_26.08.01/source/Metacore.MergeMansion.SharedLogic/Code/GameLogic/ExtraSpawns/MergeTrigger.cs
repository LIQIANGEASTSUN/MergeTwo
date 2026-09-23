using System.Runtime.Serialization;
using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(1)]
	public class MergeTrigger : IExtraSpawnTrigger
	{
		[IgnoreDataMember]
		public ExtraSpawnTriggerType Type => default(ExtraSpawnTriggerType);

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
