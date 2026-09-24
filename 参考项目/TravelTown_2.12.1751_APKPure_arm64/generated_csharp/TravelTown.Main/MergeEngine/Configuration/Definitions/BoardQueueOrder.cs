using System.Runtime.Serialization;

namespace MergeEngine.Configuration.Definitions
{
	public enum BoardQueueOrder
	{
		[EnumMember(Value = "Back")]
		Back = 0,
		[EnumMember(Value = "Front")]
		Front = 1,
		[EnumMember(Value = "None")]
		None = 2
	}
}
