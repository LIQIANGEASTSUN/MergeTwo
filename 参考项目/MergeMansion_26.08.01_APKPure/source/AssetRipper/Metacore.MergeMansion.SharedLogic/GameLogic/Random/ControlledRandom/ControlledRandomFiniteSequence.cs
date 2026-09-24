using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Random.ControlledRandom
{
	[MetaSerializable]
	public class ControlledRandomFiniteSequence
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ulong Seed { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Index { get; set; }

		public ControlledRandomFiniteSequence()
		{
		}

		public ControlledRandomFiniteSequence(ulong seed)
		{
		}

		public T Pick<T>(List<T> elements)
		{
			return default(T);
		}

		public T Pick<T>(List<T> elements, int index)
		{
			return default(T);
		}

		public int Pick(int maxExclusive)
		{
			return 0;
		}

		public int Pick(int maxExclusive, int index)
		{
			return 0;
		}
	}
}
