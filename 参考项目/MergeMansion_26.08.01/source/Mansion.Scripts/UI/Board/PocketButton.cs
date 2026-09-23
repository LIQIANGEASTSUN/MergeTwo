using Animations;
using UnityEngine;

namespace UI.Board
{
	public class PocketButton : MonoBehaviour, IRewardDestination
	{
		public void StartReceiving(int amount)
		{
		}

		public void FinishReceiving(bool updateToTargetAmount = true, bool playAudio = true)
		{
		}

		public void UpdateCompletion(float fillPercentage, bool increaseVisibleValue = false)
		{
		}

		public int GetAmount()
		{
			return 0;
		}
	}
}
