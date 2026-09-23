using System;
using System.Collections.Generic;
using Code.Bot.Conditions;

namespace Code.Bot.Config
{
	[Serializable]
	public class SpecificRequiredItemDefinition
	{
		public string itemType;

		public int amount;

		public List<Condition> conditions;

		public SpecificRequiredItemDefinition()
		{
		}

		public SpecificRequiredItemDefinition(string itemType)
		{
		}

		public SpecificRequiredItemDefinition(string itemType, int amount)
		{
		}
	}
}
