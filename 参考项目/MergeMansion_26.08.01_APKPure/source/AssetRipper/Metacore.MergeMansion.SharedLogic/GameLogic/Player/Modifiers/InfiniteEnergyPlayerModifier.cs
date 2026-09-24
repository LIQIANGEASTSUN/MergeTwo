using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Modifiers
{
	[MetaSerializableDerived(1)]
	public class InfiniteEnergyPlayerModifier : BasePlayerModifier
	{
		public InfiniteEnergyPlayerModifier()
		{
		}

		public InfiniteEnergyPlayerModifier(MetaTime startTime, MetaDuration duration)
		{
		}
	}
}
