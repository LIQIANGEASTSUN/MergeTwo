using System;

namespace MergeEngine.Model
{
	public interface IRandomNumberModel
	{
		Random Random { get; }

		int NextInt();

		void SetSeed(int seed);

		int Range(int min, int max);

		int Range(int max);

		double NextDouble();
	}
}
