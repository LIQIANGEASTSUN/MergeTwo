using fat.rawdata;

namespace FAT.Merge
{
	public class ItemSpawnContext
	{
		public enum SpawnType
		{
			None = 0,
			TapSource = 1,
			TapSourceDead = 2,
			AutoSource = 3,
			DyingItemDead = 4,
			ToolSource = 5,
			RewardList = 6,
			Undo = 7,
			Bubble = 8,
			Degrade = 9,
			Eat = 10,
			Cheat = 11,
			Upgrade = 12,
			DieInto = 13,
			SpecialBox = 14,
			ChoiceBox = 15,
			MixSource = 16,
			MixSourceExtract = 17,
			MagicHour = 18,
			TrigAutoSource = 19,
			OrderLike = 20,
			OrderRate = 21,
			ActiveSource = 22,
			Fishing = 23,
			Farm = 24,
			Fight = 25,
			WishBoard = 26,
			WishBoardTail = 27,
			MineCart = 28,
			Monopoly = 29,
			AreaBoard = 30,
			Express = 31,
			OrderMagic = 32,
			FestBoard = 33,
			RescueBoard = 34,
			ScoreBoard = 35,
			DiningBoard = 36
		}

		public Item spawner;

		public Item from1;

		public string spawnType;

		public SpawnType type;

		public Toast toastType;

		public ISpawnEffect spawnEffect;

		public static ItemSpawnContext Create()
		{
			return null;
		}

		public static ItemSpawnContext CreateWithSource(Item src, SpawnType type)
		{
			return null;
		}

		public static ItemSpawnContext CreateWithType(SpawnType type)
		{
			return null;
		}

		public ItemSpawnContext WithSpawnType(string tp)
		{
			return null;
		}

		public ItemSpawnContext WithToast(Toast _toastType)
		{
			return null;
		}

		public void Append()
		{
		}
	}
}
