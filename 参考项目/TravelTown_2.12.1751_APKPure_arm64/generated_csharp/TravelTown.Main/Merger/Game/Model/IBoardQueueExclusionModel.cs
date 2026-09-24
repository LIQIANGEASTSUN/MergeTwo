using System.Collections.Generic;
using Framework.Core.DataBinding;

namespace Merger.Game.Model
{
	public interface IBoardQueueExclusionModel
	{
		BindableProperty<HashSet<string>> ExcludedUUIDs { get; }

		bool TryAdd(IEnumerable<string> uuids);

		bool TryRemove(IEnumerable<string> uuids);

		void Clear();
	}
}
