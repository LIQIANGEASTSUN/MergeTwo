using Code.Bot.Model;
using Documentation;
using UnityEngine;

namespace Code.Bot.Conditions
{
	[CreateAssetMenu(fileName = "FreeBoardPlaceCondition", menuName = "Butler/Condition/FreeBoardPlace")]
	[Documentation("Condition Free Board Place", "Allows to change logic based on free cells count on the board", null)]
	public class FreeBoardPlaceCondition : NumericCondition
	{
		public override long GetCurrentValue(RuntimeModel runtimeModel)
		{
			return 0L;
		}
	}
}
