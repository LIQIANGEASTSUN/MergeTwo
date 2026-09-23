using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using Merger.Game.Views.BoardItem;
using UnityEngine;

namespace MergeEngine.Model.Configuration
{
	public class AnimatedBoardItemSpritesConfigurationModel : ModelBase, IAnimatedBoardItemSpritesConfigurationModel
	{
		public IReadOnlyDictionary<string, GameObject> AnimatedSprites { get; set; }

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public void ConfigLoaded(AnimatedBoardItemSpritesConfig config)
		{
		}

		public IReadOnlyDictionary<string, GameObject> CreatePrefabById(IEnumerable<AnimatedBoardItemSpriteData> data)
		{
			return null;
		}
	}
}
