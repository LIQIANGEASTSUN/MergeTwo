using Code.Bot.Model;
using Documentation;
using UnityEngine;

namespace Code.Bot.Conditions
{
	[CreateAssetMenu(fileName = "HasAllRequiredItems", menuName = "Butler/Condition/HasAllRequiredItems")]
	[Documentation("HasAllRequiredItems", "Return true if the game board contains all required items", null)]
	public class HasAllRequiredItems : Condition
	{
		public override string ConditionName => null;

		public override bool FitCondition(RuntimeModel runtimeModel)
		{
			return false;
		}
	}
}
