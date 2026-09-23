using System;
using System.Collections.Generic;

namespace MergeEngine.ECS.Components
{
	public abstract class DataComponent : SerializableComponent<SerializedDataComponent>
	{
		[NonSerialized]
		public Dictionary<string, string> _data;

		public DataComponent(Entity entity)
			: base((Entity)null)
		{
		}

		public T Get<T>(string key)
		{
			return default(T);
		}

		public void Set<T>(string key, T value)
		{
		}

		public override void OnBeforeSerialize()
		{
		}

		public override void OnAfterDeserialize()
		{
		}
	}
}
