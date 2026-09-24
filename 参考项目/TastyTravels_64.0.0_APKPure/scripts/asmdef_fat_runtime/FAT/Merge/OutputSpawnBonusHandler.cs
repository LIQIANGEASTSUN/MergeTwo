using System;
using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class OutputSpawnBonusHandler : ISpawnBonusHandler
	{
		public int priority;

		public int id;

		[NonSerialized]
		public IDictionary<int, int> weight;

		[NonSerialized]
		public int target;

		[NonSerialized]
		public (int lower, int upper) range;

		[NonSerialized]
		public int counter;

		[NonSerialized]
		public readonly HashSet<int> skip;

		int ISpawnBonusHandler.priority => 0;

		public bool Valid => false;

		public void Serialize(IList<AnyState> any_, int offset_)
		{
		}

		public void Deserialize(IList<AnyState> any_, int offset_)
		{
		}

		public void Init(int id_, IDictionary<int, int> weight_, int target_, IList<int> range_, IList<int> skip_)
		{
		}

		void ISpawnBonusHandler.OnRegister()
		{
		}

		void ISpawnBonusHandler.OnUnRegister()
		{
		}

		public void ResetCounter()
		{
		}

		public int Simulate(SpawnBonusContext context, bool dryrun)
		{
			return 0;
		}

		void ISpawnBonusHandler.Process(SpawnBonusContext context)
		{
		}
	}
}
