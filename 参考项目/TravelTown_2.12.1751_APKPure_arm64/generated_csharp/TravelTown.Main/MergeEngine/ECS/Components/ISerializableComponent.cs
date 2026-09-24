using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public interface ISerializableComponent : IComponentBase
	{
		string ComponentKey { get; }

		string Serialize();

		object GetSerialize();

		void Deserialize(string componentJson);
	}
}
