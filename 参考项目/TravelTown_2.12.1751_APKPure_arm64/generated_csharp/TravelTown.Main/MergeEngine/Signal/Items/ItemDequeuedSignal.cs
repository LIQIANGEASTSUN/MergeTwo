using MergeEngine.Configuration;
using Merger.Boosters.Declarations.Definitions.Interfaces;

namespace MergeEngine.Signal.Items
{
	public class ItemDequeuedSignal : MergeItemSignalBase
	{
		public string BoosterUuid { get; }

		public IBoosterItem BoosterItem { get; }

		public ItemDequeuedSignal(IMergeItem item, int level, IBoosterItem boosterItem = null, string boosterUuid = null)
			: base(null)
		{
		}
	}
}
