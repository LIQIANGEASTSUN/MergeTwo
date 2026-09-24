namespace MergeEngine.ECS.Components.Items
{
	public interface ITimeDurationComponent
	{
		double Timeleft { get; set; }

		bool Active { get; set; }

		double Duration { get; set; }
	}
}
