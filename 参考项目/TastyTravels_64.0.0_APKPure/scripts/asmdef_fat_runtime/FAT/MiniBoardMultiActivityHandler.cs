using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MiniBoardMultiActivityHandler : ActivityGroup
	{
		public override (bool, string) TryAdd(Activity activity_, (int, int) id_, EventType type_, ActivityInstance data_, in Option option_)
		{
			return default((bool, string));
		}

		public (bool, string) _TryCreateAct(LiteInfo lite_, EventType type_, out MiniBoardMultiActivity miniBoardAct)
		{
			miniBoardAct = null;
			return default((bool, string));
		}

		public void _TryCreateMiniBoardMultiData(MiniBoardMultiActivity activity, bool isNew)
		{
		}

		public override void End(Activity activity_, ActivityLike acti_, bool expire_)
		{
		}

		public (bool, string) _003C_003EiFixBaseProxy_TryAdd(Activity P0, (int, int) P1, EventType P2, ActivityInstance P3, ref Option P4)
		{
			return default((bool, string));
		}

		public void _003C_003EiFixBaseProxy_End(Activity P0, ActivityLike P1, bool P2)
		{
		}
	}
}
