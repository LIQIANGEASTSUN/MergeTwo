namespace GameLogic.Player.Items.TimeContainer;

public interface ITimeContainerFeatures
{

	public MetacoreDuration DefaultInitialTime
	{
		 get { } //Length: 0
	}

	public TimeContainerMergeBehavior MergeBehavior
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool StoresTime
	{
		 get { } //Length: 0
	}

	public MetacoreDuration get_DefaultInitialTime() { }

	public TimeContainerMergeBehavior get_MergeBehavior() { }

	public bool get_StoresTime() { }

	public void set_MergeBehavior(TimeContainerMergeBehavior value) { }

}

