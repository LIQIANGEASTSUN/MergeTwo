namespace Events;

public static class MergeBoardGenerators
{
	private static readonly IDictionary<MergeBoardGeneratorId, IMergeBoardGenerator> knownGenerators; //Field offset: 0x0

	private static MergeBoardGenerators() { }

	public static bool TryGet(MergeBoardGeneratorId mergeBoardGeneratorId, out IMergeBoardGenerator generator) { }

}

