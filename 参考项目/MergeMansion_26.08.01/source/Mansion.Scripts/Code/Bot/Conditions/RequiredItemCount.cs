using Code.Bot.Model;
using Documentation;
using UnityEngine;

namespace Code.Bot.Conditions
{
	[CreateAssetMenu(fileName = "RequiredItemCount", menuName = "Butler/Condition/RequiredItemCount")]
	[Documentation("Condition Required Item Count", "Allows to change logic based on how much required item placed on the board", null)]
	public class RequiredItemCount : NumericCondition
	{
		public override long GetCurrentValue(RuntimeModel runtimeModel)
		{
			return 0L;
		}
	}
}
