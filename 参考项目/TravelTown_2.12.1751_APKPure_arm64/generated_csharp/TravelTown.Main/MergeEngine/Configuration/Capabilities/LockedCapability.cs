using System;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class LockedCapability
	{
		public bool Locked;

		public bool Boxed;

		public int LevelLock;

		public bool Bubbled;

		public bool Meteor;

		public UnboxingType UnboxingType;

		public int InteractionAmount;

		public PlayerResourceEnum InteractionResource;

		public LockedCapability()
		{
		}

		public LockedCapability(bool locked, bool boxed, int lockedByLevel, bool bubbled, UnboxingType unboxingType, int interactionAmount, PlayerResourceEnum interactionResource = PlayerResourceEnum.Energy)
		{
		}
	}
}
