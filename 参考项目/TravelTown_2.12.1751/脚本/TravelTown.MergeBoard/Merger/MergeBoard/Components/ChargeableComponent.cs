using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct ChargeableComponent : IComponent
	{
		public int MaxCharge { get; set; }

		public int CurrentState { get; set; }
	}
}
