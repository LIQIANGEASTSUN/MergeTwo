using System.Runtime.Serialization;
using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializableDerived(4)]
	public class CompleteTaskTrigger : IExtraSpawnTrigger
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public HotspotId? Hotspot { get; set; }

		[IgnoreDataMember]
		public ExtraSpawnTriggerType Type => default(ExtraSpawnTriggerType);

		public CompleteTaskTrigger()
		{
		}

		public CompleteTaskTrigger(HotspotId? hotspot)
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
