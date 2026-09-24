using System;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;

namespace GameLogic.Player.Items.ProgressionEvent
{
	public class PlayerBasedProgressionEventItemSpawner : IProgressionEventItemSpawner
	{
		[NonSerialized]
		public readonly PlayerModel player;

		public PlayerBasedProgressionEventItemSpawner(PlayerModel player)
		{
		}

		public IItemDefinition ShouldSpawn(IItemDefinition mergeFromItem, IItemDefinition mergeToItem, MetacoreTime currentTime)
		{
			return null;
		}

		public bool IsDisallowedItem(IItemDefinition item, ProgressionEventInfo progressionEvent)
		{
			return false;
		}
	}
}
