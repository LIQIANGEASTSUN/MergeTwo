using System.Collections.Generic;
using MergeEngine.Data;
using Sirenix.OdinInspector;
using Tools.Attributes;
using UnityEngine;

namespace MergeEngine.Configuration
{
	[CreateAssetMenu(fileName = "TimerColorConfiguration.asset", menuName = "Game/Cooldown Timer Color Configuration")]
	public class CooldownTimerColorConfiguration : SerializedScriptableObject
	{
		[SerializeField]
		[NonEmpty]
		public List<CooldownTimerColor> _colorSettings;

		public BoardItemTimerColor GetTimerColor(int seconds)
		{
			return default(BoardItemTimerColor);
		}
	}
}
