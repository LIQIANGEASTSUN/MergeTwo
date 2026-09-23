using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public class ItemEffectFeatures : IItemEffectFeatures
	{
		public static readonly ItemEffectFeatures NoItemEffectFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public string ActivationVfxPoolTag { get; set; }

		public bool HasActivationVfx => false;

		public ItemEffectFeatures()
		{
		}

		public ItemEffectFeatures(string activationVfxPoolTag)
		{
		}
	}
}
