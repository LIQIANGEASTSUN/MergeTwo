using Code.Bot.Model;
using Documentation;
using UnityEngine;

namespace Code.Bot.Conditions
{
	[CreateAssetMenu(fileName = "RequiredItemOrBetterCount", menuName = "Butler/Condition/RequiredItemOrBetterCount")]
	[Documentation("Condition Required Item or Better Count", "Allows to change logic based on how much required or better items placed on the board. Uses chain key.", null)]
	public class RequiredItemOrBetter : NumericCondition
	{
		public override long GetCurrentValue(RuntimeModel runtimeModel)
		{
			return 0L;
		}
	}
}
