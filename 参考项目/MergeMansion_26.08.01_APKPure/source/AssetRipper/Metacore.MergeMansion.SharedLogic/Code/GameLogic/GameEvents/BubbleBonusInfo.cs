using GameLogic.Player;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class BubbleBonusInfo
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyType DivisorEnergyType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 DivisorOverride { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool DivisorEnabled { get; set; }

		public BubbleBonusInfo()
		{
		}

		public BubbleBonusInfo(EnergyType divisorEnergyType, F32 divisorOverride, bool divisorEnabled)
		{
		}
	}
}
