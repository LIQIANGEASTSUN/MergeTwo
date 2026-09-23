using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using UnityEngine;

namespace Metacore.MergeMansion
{
	public class DefaultCollectibleBoardEventCard : BoardEventCard<CollectibleBoardEventModel>, ISpawnTarget
	{
		[Header("Collectible Board Event Card References")]
		[SerializeField]
		public EnergyTitleBar _energyTitleBar;

		[NonSerialized]
		public EnergyType _energyType;

		public override bool UpdateAfterEveryBoardAct => false;

		public Vector3 Target => default(Vector3);

		public override void InnerInitialize()
		{
		}

		public override void OnTap()
		{
		}

		public override BoardEventCardState InnerUpdateState()
		{
			return default(BoardEventCardState);
		}

		public bool IsTargetFor(SpawnTargetContext extraSpawn)
		{
			return false;
		}

		public void AnimateSpawn()
		{
		}
	}
}
