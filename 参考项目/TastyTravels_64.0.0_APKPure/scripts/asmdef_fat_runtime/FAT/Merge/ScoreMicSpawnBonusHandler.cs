using System;
using System.Collections.Generic;

namespace FAT.Merge
{
	public class ScoreMicSpawnBonusHandler : ISpawnBonusHandler
	{
		public int priority;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsOneInfo;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsTwoInfo;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsFourInfo;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsEightInfo;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _outputsSixteenInfo;

		[NonSerialized]
		public bool _isDirty;

		[NonSerialized]
		public ActivityScoreMic _actInst;

		int ISpawnBonusHandler.priority => 0;

		public bool _isValid => false;

		public ScoreMicSpawnBonusHandler(ActivityScoreMic act)
		{
		}

		public void SetDirty()
		{
		}

		public void EnsureOutputMap()
		{
		}

		public void _InitOutputs(IList<(int, int, int)> container, IDictionary<int, int> outputs)
		{
		}

		void ISpawnBonusHandler.OnRegister()
		{
		}

		void ISpawnBonusHandler.OnUnRegister()
		{
		}

		void ISpawnBonusHandler.Process(SpawnBonusContext context)
		{
		}

		public void SimulateSpawn(SpawnBonusContext context)
		{
		}

		public void SimulateBubbleSpawn(SpawnBonusContext context)
		{
		}

		public void _SetActivityToken(SpawnBonusContext context, int tokenId, int tokenNum)
		{
		}
	}
}
