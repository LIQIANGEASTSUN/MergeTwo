using System;
using DysonCore.DynamicJson.PolymorphicParser;
using Merger.RemoteLiveOps.Data;
using Merger.RemoteLiveOps.Data.EventData;

namespace MergeEngine.ECS.Systems.RNG
{
	[Serializable]
	public class BoardRngRemoteEventData : RemoteLiveOpData
	{
		[PolymorphicProperty]
		public override RemoteEventType Type => default(RemoteEventType);
	}
}
