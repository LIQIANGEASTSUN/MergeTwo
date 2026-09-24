namespace Code.GameLogic.Config;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum TasksTabStyle : int
{
	Default = 0,
	AllEventsVsTasks = 1,
	CoreSupportEventsAndTasksVsEvents = 2,
	OnlyEvents = 3,
}

