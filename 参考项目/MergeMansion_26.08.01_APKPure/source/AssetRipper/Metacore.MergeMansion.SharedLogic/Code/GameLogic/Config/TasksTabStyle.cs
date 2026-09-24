using Metaplay.Core.Model;

namespace Code.GameLogic.Config
{
	[MetaSerializable]
	[ForceExplicitEnumValues]
	public enum TasksTabStyle
	{
		Default = 0,
		AllEventsVsTasks = 1,
		CoreSupportEventsAndTasksVsEvents = 2,
		OnlyEvents = 3
	}
}
