using System;
using System.Runtime.Serialization;
using DysonCore.DynamicJson.EnhancedEnumParser;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public enum UnboxingType
	{
		[EnumMember(Value = "merge")]
		[EnumMember.Fallback]
		Merge = 0,
		[EnumMember(Value = "consume")]
		Consume = 1,
		[EnumMember(Value = "both")]
		Both = 2,
		[EnumMember(Value = "spentResource")]
		ResourceConsume = 3
	}
}
