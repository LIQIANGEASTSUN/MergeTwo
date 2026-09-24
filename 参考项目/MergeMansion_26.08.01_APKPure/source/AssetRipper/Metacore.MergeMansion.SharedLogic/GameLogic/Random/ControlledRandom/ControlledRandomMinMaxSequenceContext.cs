using System.Collections.Generic;
using GameLogic.CardCollection;

namespace GameLogic.Random.ControlledRandom
{
	public class ControlledRandomMinMaxSequenceContext<T>
	{
		public int CardsToRoll;

		public CardsToRollFirst CardsToRollFirst;

		public List<FixedCardStars> FixedCardsStars;

		public List<ControlledRandomMinMaxSequence.ElementInfo<T>> Infos;

		public virtual bool FixElementsForFixedCardsStars(List<T> elements)
		{
			return false;
		}
	}
}
