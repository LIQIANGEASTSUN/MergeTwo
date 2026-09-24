using System;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using UnityEngine;

namespace Merger.Game.Views.BoardItem.ViewBehaviours
{
	public class LockBehaviour : BoardItemViewBehaviourBase
	{
		[NonSerialized]
		public BlockerItemView _blockerItemView;

		[NonSerialized]
		public int _levelLock;

		public BlockerItemView BlockerItemView => null;

		public bool IsShaking => false;

		public override void OnInitialize()
		{
		}

		public override void OnDispose()
		{
		}

		public override void OnUpdate()
		{
		}

		public bool TryGetParticleSystemByType(SpawnParticleType spawnParticleType, out GameObject particleSystemReference)
		{
			particleSystemReference = null;
			return false;
		}

		public void InstantiateBlockerItem(BlockerItemView blockerItemReference)
		{
		}

		public override bool TryConsumeTap()
		{
			return false;
		}
	}
}
