using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.Game.Views.Board;
using Merger.Game.Views.Data;
using Merger.MergeBoard.Data.TickResultArgs;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View.Animations
{
	public class MergeBoardParticlesView : BoardParticlesViewBase<MergeBoardParticlesViewModel>, IBoardControllerPostTickProcessor
	{
		[SerializeField]
		public MergeBoardLayout _layout;

		[SerializeField]
		public SpawnParticleType _spawnParticleType;

		[SerializeField]
		public Vector2 _position;

		[NonSerialized]
		public readonly HashSet<int> _handledPositionsThisTick;

		public void Process(TickArgs result)
		{
		}

		public void HandleExpendableResults<T>(TickArgs result) where T : IExpendableResult
		{
		}

		public void TrySpawnAtPosition(int position, SpawnParticleType particleType)
		{
		}

		public void ActivateParticles()
		{
		}
	}
}
