using System.Runtime.Serialization;

namespace MergeEngine.Configuration.Capabilities
{
	public enum ProducerTimerTrigger
	{
		Undefined = 0,
		[EnumMember(Value = "created")]
		Created = 1,
		[EnumMember(Value = "firstTimeProduce")]
		FirstTimeProduce = 2
	}
}
