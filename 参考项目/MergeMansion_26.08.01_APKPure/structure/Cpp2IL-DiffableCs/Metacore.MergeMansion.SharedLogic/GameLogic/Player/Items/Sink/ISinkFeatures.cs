namespace GameLogic.Player.Items.Sink;

public interface ISinkFeatures
{

	public bool AllowReverseSinking
	{
		 get { } //Length: 0
	}

	public ISinkStateFactory Factory
	{
		 get { } //Length: 0
	}

	public bool HideProgressBar
	{
		 get { } //Length: 0
	}

	public bool HideUndiscoveredItemsInHints
	{
		 get { } //Length: 0
	}

	public bool IsSink
	{
		 get { } //Length: 0
	}

	public bool get_AllowReverseSinking() { }

	public ISinkStateFactory get_Factory() { }

	public bool get_HideProgressBar() { }

	public bool get_HideUndiscoveredItemsInHints() { }

	public bool get_IsSink() { }

}

