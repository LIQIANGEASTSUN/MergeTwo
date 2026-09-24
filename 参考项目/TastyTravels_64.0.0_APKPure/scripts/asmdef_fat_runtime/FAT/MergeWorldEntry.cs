using Config;
using FAT.Merge;

namespace FAT
{
	public class MergeWorldEntry
	{
		public enum EntryType
		{
			MainGame = 0,
			MiniBoard = 1,
			MiniBoardMulti = 2,
			MineBoard = 3,
			FishingBoard = 4,
			FarmBoard = 5,
			FightBoard = 6,
			WishBoard = 7,
			MineCartBoard = 8,
			TrainMission = 9,
			IndepenBingo = 10,
			TileBingo = 11,
			MonopolyBoard = 12,
			AreaBoard = 13,
			FestBoard = 14,
			RescueBoard = 15,
			ScoreBoard = 16,
			DiningBoard = 17
		}

		public EntryType type;

		public MergeWorld world;

		public string nameKey;

		public AssetConfig icon;
	}
}
