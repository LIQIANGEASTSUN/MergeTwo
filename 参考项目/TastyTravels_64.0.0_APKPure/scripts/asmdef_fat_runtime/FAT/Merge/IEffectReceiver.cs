namespace FAT.Merge
{
	public interface IEffectReceiver
	{
		bool WillReceiveEffect(SpeedEffect effect);
	}
}
