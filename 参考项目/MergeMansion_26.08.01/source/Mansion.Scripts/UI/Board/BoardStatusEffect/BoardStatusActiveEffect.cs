using GameLogic.Config.Types;

namespace UI.Board.BoardStatusEffect
{
	public class BoardStatusActiveEffect
	{
		public BoardStatusEffectType EffectType { get; }

		public MetacoreTime EffectStartTime { get; set; }

		public MetacoreTime EffectEndTime { get; set; }

		public bool HasShownSlideOutAnimation { get; set; }

		public BoardStatusActiveEffect(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public bool IsFinished(MetacoreTime currentTime)
		{
			return false;
		}

		public bool HaveEffectTimesChanged(MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
			return false;
		}

		public void OnSlideOutAnimationShown()
		{
		}

		public void UpdateEffectTimes(MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}
	}
}
