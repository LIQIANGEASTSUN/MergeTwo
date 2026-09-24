using System;
using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11004)]
	public class DirectorTryMakeReadyForActivation : PlayerAction
	{
		[MetaSerializable]
		public enum DirectorActivationEventId
		{
			FirstToolBarrelActivation = 0,
			SecondToolBarrelActivation = 1
		}

		public readonly struct DirectorActivationEventDefinition
		{
			public readonly Func<PlayerModel, bool, MetaActionResult> Operation;

			public DirectorActivationEventDefinition(Func<PlayerModel, bool, MetaActionResult> operation)
			{
				Operation = null;
			}
		}

		public static readonly Dictionary<DirectorActivationEventId, DirectorActivationEventDefinition> definitions;

		public DirectorActivationEventId EventId { get; set; }

		static DirectorTryMakeReadyForActivation()
		{
		}

		public DirectorTryMakeReadyForActivation()
		{
		}

		public DirectorTryMakeReadyForActivation(DirectorActivationEventId id)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static MetaActionResult ApplyFirstToolBarrelActivation(PlayerModel player, bool commit)
		{
			return null;
		}

		public static MetaActionResult ApplySecondToolBarrelActivation(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
