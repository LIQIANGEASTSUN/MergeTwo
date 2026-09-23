using System;
using System.Text;
using ContextualizedECS;
using MergeEngine.Configuration;
using Merger.MergeBoardInfoBar.Views;

namespace Merger.MergeBoardInfoBar.Logic.Labeling
{
	public class InfoBarLabelContext
	{
		[NonSerialized]
		public readonly StringBuilder _builder;

		public Entity Entity { get; }

		public IMergeItem MergeItem { get; }

		public IMergeItem NextLevelItem { get; }

		public InfoBarItemLabelConfigurationView Configuration { get; }

		public bool HasSelection => false;

		public bool HasCustomInfoText => false;

		public bool IsFinalized { get; set; }

		public InfoBarLabelContext(Entity entity, IMergeItem mergeItem, IMergeItem nextLevelItem, InfoBarItemLabelConfigurationView configuration)
		{
		}

		public bool TryGetComponent<T>(out T component) where T : struct, IComponent
		{
			component = default(T);
			return false;
		}

		public void Append(string value)
		{
		}

		public void OverrideLabel(string value, bool finalize = true)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
