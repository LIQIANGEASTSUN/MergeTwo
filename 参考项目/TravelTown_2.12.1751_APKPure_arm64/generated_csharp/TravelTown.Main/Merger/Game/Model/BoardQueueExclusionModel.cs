using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;

namespace Merger.Game.Model
{
	public sealed class BoardQueueExclusionModel : ModelBase, IBoardQueueExclusionModel
	{
		[NonSerialized]
		public readonly MutableBindableProperty<HashSet<string>> _excludedUUIDs;

		public BindableProperty<HashSet<string>> ExcludedUUIDs => null;

		public bool TryAdd(IEnumerable<string> uuids)
		{
			return false;
		}

		public bool TryRemove(IEnumerable<string> uuids)
		{
			return false;
		}

		public void Clear()
		{
		}

		public bool TryNotify(bool hasChanged)
		{
			return false;
		}
	}
}
