using MergeEngine.ECS.Components;

namespace MergeEngine.ECS.Systems.State
{
	public abstract class RemoteLoadedComponent<TSerializable, TLoadable> : SerializableComponent<TSerializable>, IRemoteLoadedComponent<TLoadable> where TSerializable : class, new() where TLoadable : class, new()
	{
		public RemoteLoadedComponent(Entity entity)
			: base((Entity)null)
		{
		}

		public abstract void LoadComponent(TLoadable componentData);
	}
	public abstract class RemoteLoadedComponent<TCapability, TSerializable, TLoadable> : SerializableComponent<TCapability, TSerializable>, IRemoteLoadedComponent<TLoadable> where TSerializable : class, new() where TLoadable : class, new()
	{
		public RemoteLoadedComponent(TCapability capability, Entity entity)
			: base(default(TCapability), (Entity)null)
		{
		}

		public abstract void LoadComponent(TLoadable componentData);
	}
}
