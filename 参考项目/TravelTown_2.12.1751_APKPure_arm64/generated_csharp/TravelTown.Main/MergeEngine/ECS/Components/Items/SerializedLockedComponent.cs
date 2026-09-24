using System;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedLockedComponent
	{
		public bool Boxed;

		public bool Locked;

		public bool Bubbled;

		public bool Meteor;

		public int LevelLock;

		public long BubbleEndTime;

		public double BubbleTimeLeft;

		[JsonProperty("blasterableTier")]
		public int BlasterableTier;

		public long MeteorEndTime;

		public long MeteorDuration;

		public string MeteorCycleId;

		public int MeteorLocationItemIndex;

		[JsonProperty("boxedType")]
		public UnboxingType UnboxingType;

		[JsonProperty("interactionAmount")]
		public int InteractionAmount;

		[JsonProperty("totalInteractionAmount")]
		public int TotalInteractionAmount;

		[JsonProperty("resourceType")]
		public PlayerResourceEnum InteractionResource;
	}
}
