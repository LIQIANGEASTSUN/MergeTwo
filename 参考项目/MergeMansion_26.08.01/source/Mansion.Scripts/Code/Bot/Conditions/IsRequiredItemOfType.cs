using System.Collections.Generic;
using Code.Bot.Model;
using Documentation;
using UnityEngine;

namespace Code.Bot.Conditions
{
	[CreateAssetMenu(fileName = "IsRequiredItemOfType", menuName = "Butler/Condition/IsRequiredItemOfType")]
	[Documentation("IsRequiredItemOfType", "Return true if required item is of specific item type.", null)]
	public class IsRequiredItemOfType : Condition
	{
		[SerializeField]
		public List<string> itemTypes;

		public override string ConditionName => null;

		public override bool FitCondition(RuntimeModel runtimeModel)
		{
			return false;
		}
	}
}
