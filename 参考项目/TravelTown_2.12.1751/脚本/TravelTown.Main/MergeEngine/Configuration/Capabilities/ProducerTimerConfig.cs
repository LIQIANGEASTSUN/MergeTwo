using System;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ProducerTimerConfig
	{
		[JsonIgnore]
		[NonSerialized]
		public int _duration;

		[JsonIgnore]
		[NonSerialized]
		public ProducerTimerTrigger _trigger;

		[JsonIgnore]
		[NonSerialized]
		public string _triggerString;

		[JsonIgnore]
		public ProducerTimerTrigger Trigger => default(ProducerTimerTrigger);

		[JsonProperty("Duration")]
		public int Duration
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonProperty("Trigger")]
		public string TriggerString
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public ProducerTimerConfig()
		{
		}

		public ProducerTimerConfig(ProducerTimerConfig other)
		{
		}

		public ProducerTimerConfig(int duration, ProducerTimerTrigger trigger, string triggerString)
		{
		}
	}
}
