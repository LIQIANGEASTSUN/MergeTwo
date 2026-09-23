using Metaplay.Core.Model;

namespace Code.GameLogic.AutoMerge
{
	[MetaSerializable]
	public enum AutoMergeSource
	{
		Unknown = 0,
		Event = 1,
		Booster = 2,
		Debug = 3
	}
}
