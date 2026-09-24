namespace FAT.Merge
{
	public class ItemDyingComponent : ItemComponentBase, IEffectReceiver
	{
		bool IEffectReceiver.WillReceiveEffect(SpeedEffect effect)
		{
			return false;
		}

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}
	}
}
