using Metacore.MergeMansion.Common.Options;

namespace Code.GameLogic.GameEvents
{
	public interface IEventSharedInfo
	{
		Option<EventGroupId> GroupIdOption { get; }

		int Priority { get; }

		string SharedEventId { get; }

		EventCategoryInfo CategoryInfo { get; }
	}
}
