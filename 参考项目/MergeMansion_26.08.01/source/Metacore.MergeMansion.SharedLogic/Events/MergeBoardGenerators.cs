using System.Collections.Generic;

namespace Events
{
	public static class MergeBoardGenerators
	{
		public static readonly IDictionary<MergeBoardGeneratorId, IMergeBoardGenerator> knownGenerators;

		public static bool TryGet(MergeBoardGeneratorId mergeBoardGeneratorId, out IMergeBoardGenerator generator)
		{
			generator = null;
			return false;
		}
	}
}
