using System;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	[JsonConverter(typeof(StringEnumConverter))]
	public enum RewardDestinationType
	{
		None = 0,
		[EnumMember(Value = "Event")]
		Event = 1,
		[EnumMember(Value = "Core")]
		Core = 2,
		[EnumMember(Value = "Default")]
		Default = 3
	}
}
