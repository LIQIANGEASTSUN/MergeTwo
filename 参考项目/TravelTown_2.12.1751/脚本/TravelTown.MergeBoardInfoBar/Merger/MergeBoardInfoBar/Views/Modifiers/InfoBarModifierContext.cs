using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoardInfoBar.Views.Modifiers
{
	public class InfoBarModifierContext
	{
		public Entity Entity { get; set; }

		public IMergeItem MergeItem { get; set; }

		public IMergeItem NextMergeItem { get; set; }

		public bool HasSelection => false;

		public InfoBarModifierContext(Entity entity, IMergeItem mergeItem, IMergeItem nextMergeItem)
		{
		}
	}
}
