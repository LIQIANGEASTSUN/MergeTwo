using System;
using Merger.Data;
using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.Meteor
{
	public class MeteorClientCondition
	{
		[JsonProperty("condition")]
		public MeteorCondition Condition;

		[JsonProperty("value")]
		public int Value;

		public ComparisonOperator ComparisonOperator;

		[NonSerialized]
		public string _operator;

		[JsonProperty("operator")]
		public string Operator
		{
			set
			{
			}
		}

		public ComparisonOperator StringOperatorToEnum(string stringOperator)
		{
			return default(ComparisonOperator);
		}
	}
}
