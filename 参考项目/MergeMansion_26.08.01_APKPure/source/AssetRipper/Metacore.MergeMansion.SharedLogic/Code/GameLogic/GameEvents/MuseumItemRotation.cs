using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[ForceExplicitEnumValues]
	public enum MuseumItemRotation
	{
		None = 0,
		CW = 1,
		CCW = 2
	}
}
