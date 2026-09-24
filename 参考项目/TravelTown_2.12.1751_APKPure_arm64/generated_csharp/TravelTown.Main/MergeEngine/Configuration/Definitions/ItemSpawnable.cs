using System;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class ItemSpawnable
	{
		public MergeItemWeakReference ItemReference;

		public string Reason;

		public bool Locked;

		[JsonIgnore]
		public bool Bubbled;

		[JsonIgnore]
		public bool Boosted;
	}
}
