using System.Collections.Generic;
using UnityEngine;

namespace MergeEngine.Model.Configuration
{
	public interface IAnimatedBoardItemSpritesConfigurationModel
	{
		IReadOnlyDictionary<string, GameObject> AnimatedSprites { get; }
	}
}
