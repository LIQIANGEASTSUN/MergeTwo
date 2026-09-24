using DG.Tweening;

namespace FAT.Merge
{
	public interface ISpawnEffectWithTrail : ISpawnEffect
	{
		void AddTrail(MBItemView view, Tween tween);
	}
}
