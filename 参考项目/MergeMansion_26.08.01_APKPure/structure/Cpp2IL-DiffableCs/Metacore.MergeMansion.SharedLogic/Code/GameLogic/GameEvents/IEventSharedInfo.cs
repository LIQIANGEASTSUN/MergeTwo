namespace Code.GameLogic.GameEvents;

public interface IEventSharedInfo
{

	public EventCategoryInfo CategoryInfo
	{
		 get { } //Length: 0
	}

	public Option<EventGroupId> GroupIdOption
	{
		 get { } //Length: 0
	}

	public int Priority
	{
		 get { } //Length: 0
	}

	public string SharedEventId
	{
		 get { } //Length: 0
	}

	public EventCategoryInfo get_CategoryInfo() { }

	public Option<EventGroupId> get_GroupIdOption() { }

	public int get_Priority() { }

	public string get_SharedEventId() { }

}

