using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Merger.RemoteLiveOps.Model;
using Merger.TimeLimitedItems.Data;

namespace Merger.TimeLimitedItems.Models
{
	public class TimeLimitedItemsModel : ITimeLimitedItemsModel, IEventDataHolder<TimeLimitedItemsEventData>
	{
		[NonSerialized]
		public HashSet<string> _graphIds;

		[NonSerialized]
		public MutableBindableProperty<double> _timeLeft;

		[NonSerialized]
		public readonly MutableBindableProperty<bool> _eventIsActive;

		public string EventId { get; set; }

		public string EventName { get; set; }

		public string ThemeId { get; set; }

		public BindableProperty<bool> EventIsActive => null;

		public BindableProperty<double> EventTimeLeft => null;

		public HashSet<string> GraphIds => null;

		public void SetStartEventData(string eventId, TimeLimitedItemsEventData eventData, MutableBindableProperty<double> timeLeft)
		{
		}

		public void UpdateEventData(TimeLimitedItemsEventData eventData)
		{
		}

		public void EndEvent()
		{
		}
	}
}
