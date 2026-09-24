namespace MergeEngine.ECS.Components
{
	public interface IModifiableComponent<in TLoadable> where TLoadable : class, new()
	{
		void AppendToComponent(TLoadable componentData);
	}
}
