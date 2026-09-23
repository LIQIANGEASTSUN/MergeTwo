namespace MergeEngine.ECS.Components.Items
{
	public interface ITimeLimitedActivationComponent
	{
		long ExpirationTimeStamp { get; }

		long ActivationTimeStamp { get; }

		bool HasExpired { get; }
	}
}
