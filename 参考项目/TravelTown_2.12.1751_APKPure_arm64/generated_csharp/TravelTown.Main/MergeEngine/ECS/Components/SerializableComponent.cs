using System;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	[CacheAs(new Type[] { typeof(ISerializableComponent) })]
	public abstract class SerializableComponent<TCapability, TSerializable> : ComponentBase<TCapability>, ISerializableComponent, IComponentBase where TSerializable : class, new()
	{
		[NonSerialized]
		public TSerializable _serializable;

		public TSerializable serializable => null;

		public abstract string ComponentKey { get; }

		public SerializableComponent(TCapability capability, Entity entity)
			: base(default(TCapability), (Entity)null)
		{
		}

		public string Serialize()
		{
			return null;
		}

		public object GetSerialize()
		{
			return null;
		}

		public virtual void OnBeforeSerialize()
		{
		}

		public virtual void OnAfterDeserialize()
		{
		}

		public void Deserialize(string componentJson)
		{
		}
	}
	[CacheAs(new Type[] { typeof(ISerializableComponent) })]
	public abstract class SerializableComponent<TSerializable> : ComponentBase, ISerializableComponent, IComponentBase where TSerializable : class, new()
	{
		[NonSerialized]
		public TSerializable _serializable;

		public TSerializable serializable => null;

		public abstract string ComponentKey { get; }

		public SerializableComponent(Entity entity)
			: base(null)
		{
		}

		public virtual void OnBeforeSerialize()
		{
		}

		[Obsolete("we no longer support locally saved user progression, everything should come from backend ")]
		public virtual void OnAfterDeserialize()
		{
		}

		string ISerializableComponent.Serialize()
		{
			return null;
		}

		public object GetSerialize()
		{
			return null;
		}

		void ISerializableComponent.Deserialize(string componentJson)
		{
		}
	}
}
