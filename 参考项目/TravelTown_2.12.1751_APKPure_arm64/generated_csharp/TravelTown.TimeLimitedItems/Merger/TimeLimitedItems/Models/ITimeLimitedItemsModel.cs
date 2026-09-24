using System.Collections.Generic;
using Framework.Core.DataBinding;

namespace Merger.TimeLimitedItems.Models
{
	public interface ITimeLimitedItemsModel
	{
		string EventId { get; }

		string EventName { get; }

		string ThemeId { get; }

		BindableProperty<bool> EventIsActive { get; }

		BindableProperty<double> EventTimeLeft { get; }

		HashSet<string> GraphIds { get; }
	}
}
