using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class WeightState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public F32 Weight { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public WeightCategory WeightCategory { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int RodUsed { get; set; }

		public WeightState()
		{
		}

		public WeightState(F32 weight, WeightCategory weightCategory, int rodUsed)
		{
		}
	}
}
