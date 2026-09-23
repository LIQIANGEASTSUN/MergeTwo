using System;
using Zenject;

namespace MergeEngine.Model
{
	public class RandomNumberModel : IRandomNumberModel, IInitializable
	{
		[NonSerialized]
		public Random _random;

		public Random Random => null;

		public int NextInt()
		{
			return 0;
		}

		public void SetSeed(int seed)
		{
		}

		public int Range(int min, int max)
		{
			return 0;
		}

		public int Range(int max)
		{
			return 0;
		}

		public double NextDouble()
		{
			return 0.0;
		}

		void IInitializable.Initialize()
		{
		}
	}
}
