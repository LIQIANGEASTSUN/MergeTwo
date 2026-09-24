using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	public abstract class BoosterItemData : ScriptableObject
	{
		public int ID;

		public string Name;

		[Multiline(2)]
		public string Description;

		public string NotUsableText;

		public int RequiredLevel;

		public int PackCount;

		public int RequiredGem;

		public Sprite BoosterImage;

		public Sprite BoosterImageSmall;

		public Sprite BoosterInactiveImage;

		public Sprite BoosterCountBackground;

		public Sprite BoosterInactiveCountBackground;

		public int GetRequiredPackGemCount()
		{
			return 0;
		}

		public string GetWarningText()
		{
			return null;
		}

		public string GetWarningText(string keySuffix)
		{
			return null;
		}

		public abstract List<BoardPositionEntity> GetAvailablePositions(BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, out string keySuffix);

		public BoosterItemData()
		{
		}
	}
}
