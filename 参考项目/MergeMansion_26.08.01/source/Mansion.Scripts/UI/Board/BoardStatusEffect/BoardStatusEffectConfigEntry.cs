using System;
using UnityEngine.AddressableAssets;

namespace UI.Board.BoardStatusEffect
{
	[Serializable]
	public class BoardStatusEffectConfigEntry
	{
		public BoardStatusEffectType EffectType;

		public AssetReferenceT<BoardStatusEffectConfig> ConfigRef;
	}
}
