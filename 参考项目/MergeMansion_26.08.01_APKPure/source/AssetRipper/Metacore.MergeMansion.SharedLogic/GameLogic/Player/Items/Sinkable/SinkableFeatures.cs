using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sinkable
{
	[MetaSerializable]
	public class SinkableFeatures : ISinkableFeatures
	{
		public static readonly SinkableFeatures NoSinkableFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsSinkable { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<ISinkInAction> SinkInActions { get; set; }

		public SinkableFeatures()
		{
		}

		public SinkableFeatures(bool isSinkable, IEnumerable<ISinkInAction> sinkInActions)
		{
		}
	}
}
