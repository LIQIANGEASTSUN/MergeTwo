namespace MergeEngine.ECS.Systems.State
{
	public interface IRemoteLoadedComponent<in TStatePayload>
	{
		void LoadComponent(TStatePayload componentData);
	}
}
