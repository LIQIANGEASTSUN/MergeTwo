namespace MergeEngine.ECS.Systems.State.Interfaces
{
	public interface IModifiableStateSystem<in TModel>
	{
		void AppendToState(params TModel[] objectsToAppend);
	}
}
