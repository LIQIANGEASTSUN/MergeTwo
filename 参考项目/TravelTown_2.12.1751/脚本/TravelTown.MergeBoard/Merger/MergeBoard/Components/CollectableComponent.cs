using ContextualizedECS;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Items;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Components
{
	public struct CollectableComponent : IComponent, ICollectableComponent
	{
		public ItemCollectable ItemCollectable { get; set; }

		public ItemCollectableResource ItemCollectableResource { get; set; }

		public AfterCollectAnimation AfterCollectAnimation => default(AfterCollectAnimation);

		public Reward CollectableReward => null;

		public bool IsPlaygroundPoints => false;

		public bool IsImmediateReward => false;

		public bool ShouldRemoveFromBoard { get; set; }

		public bool Collected { get; set; }
	}
}
