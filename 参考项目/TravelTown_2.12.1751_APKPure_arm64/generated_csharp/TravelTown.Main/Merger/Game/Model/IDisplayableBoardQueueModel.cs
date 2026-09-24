using Framework.Core.DataBinding;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.Game.Model
{
	public interface IDisplayableBoardQueueModel
	{
		BindableProperty<int> EffectiveCount { get; }

		BindableProperty<AssetReferenceT<Sprite>> EffectiveHeadSprite { get; }
	}
}
