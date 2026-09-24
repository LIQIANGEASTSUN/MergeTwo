namespace Code.GameLogic.AutoMerge;

[MetaSerializable]
public interface IAutoMergeFeatureModel
{

	public Nullable<MetacoreTime> AvailableSince
	{
		 get { } //Length: 0
	}

	public Nullable<MetacoreTime> AvailableUntil
	{
		 get { } //Length: 0
	}

	public bool IsActive
	{
		 get { } //Length: 0
	}

	public bool IsAvailable
	{
		 get { } //Length: 0
	}

	public bool IsUserToggleOn
	{
		 get { } //Length: 0
	}

	public void AddDuration(MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source, IPlayerModelClientListener clientListener) { }

	public void ForceDeactivate(IPlayerModelClientListener clientListener) { }

	public Nullable<MetacoreTime> get_AvailableSince() { }

	public Nullable<MetacoreTime> get_AvailableUntil() { }

	public bool get_IsActive() { }

	public bool get_IsAvailable() { }

	public bool get_IsUserToggleOn() { }

	public void OnGameTick(MetaTime newTime, IPlayerModelClientListener clientListener) { }

	public void SetUserToggle(bool enabled, IPlayerModelClientListener clientListener) { }

}

