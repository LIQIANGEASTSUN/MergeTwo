using System;
using MergeEngine.Model;

namespace MergeEngine.Configuration
{
	[Serializable]
	public class SkipCooldownConfig
	{
		public float CoefficientA;

		public float CoefficientB;

		public PlayerResourceEnum SkipCooldownResource;
	}
}
