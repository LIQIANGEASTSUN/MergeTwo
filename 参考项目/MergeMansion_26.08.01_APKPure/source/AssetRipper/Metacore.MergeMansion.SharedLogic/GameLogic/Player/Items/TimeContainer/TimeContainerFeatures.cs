using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.TimeContainer
{
	[MetaSerializable]
	public class TimeContainerFeatures : ITimeContainerFeatures
	{
		public static readonly TimeContainerFeatures NoContainer;

		MetacoreDuration ITimeContainerFeatures.DefaultInitialTime => default(MetacoreDuration);

		[MetaMember(1, MetaMemberFlags.None)]
		public bool StoresTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration DefaultInitialTime { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public TimeContainerMergeBehavior MergeBehavior { get; set; }
	}
}
