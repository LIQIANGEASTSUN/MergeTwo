using System;
using Merge;
using Metacore.MergeMansion.Common.Options;
using UI.States;

namespace UI.EventCalendarEntry
{
	public interface IEventCalendarEntry
	{
		void Show(MergeBoardId eventType, EventCalendarPopupMenuState state);

		void Dispose();

		void AssignStartButtonPressedAction(Action action, Option<string> overrideButtonText = default(Option<string>));
	}
}
