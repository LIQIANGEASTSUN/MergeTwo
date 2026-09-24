namespace GameLogic.Player.MergeTasks;

public interface ITaskCardView
{

	public bool CanBeCompleted
	{
		 get { } //Length: 0
	}

	public IHotspotDefinition Hotspot
	{
		 get { } //Length: 0
	}

	public IEnumerable<PlayerRequirement> Requirements
	{
		 get { } //Length: 0
	}

	public MergeTask Task
	{
		 get { } //Length: 0
	}

	public bool get_CanBeCompleted() { }

	public IHotspotDefinition get_Hotspot() { }

	public IEnumerable<PlayerRequirement> get_Requirements() { }

	public MergeTask get_Task() { }

	public void RefreshCanBeCompleted() { }

}

