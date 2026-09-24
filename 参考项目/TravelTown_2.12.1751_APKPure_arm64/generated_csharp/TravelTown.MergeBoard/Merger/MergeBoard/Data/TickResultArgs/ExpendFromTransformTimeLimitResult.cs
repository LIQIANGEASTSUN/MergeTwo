using ContextualizedECS;
using Merger.Game.Views.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ExpendFromTransformTimeLimitResult : IExpendableResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public string Reason { get; set; }

		public bool SpawnParticles { get; set; }

		public SpawnParticleType ParticleType { get; set; }
	}
}
