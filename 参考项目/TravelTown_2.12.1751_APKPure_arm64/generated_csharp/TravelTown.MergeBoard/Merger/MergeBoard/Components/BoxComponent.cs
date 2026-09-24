using ContextualizedECS;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;

namespace Merger.MergeBoard.Components
{
	public struct BoxComponent : IComponent
	{
		public bool Boxed { get; set; }

		public int InteractionAmount { get; set; }

		public int TotalInteractionAmount { get; set; }

		public UnboxingType UnboxingType { get; set; }

		public PlayerResourceEnum InteractionResource { get; set; }
	}
}
