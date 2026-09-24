using System;
using System.Collections.Generic;
using DragonPlus;
using DragonU3DSDK.Storage;
using Framework;
using IFix.Core;
using UnityEngine;

namespace Gameplay
{
	public sealed class UserData : GlobalSystem<UserData>
	{
		public enum ResourceId
		{
			None = -1,
			Diamond = 101,
			Coin = 102,
			Exp = 104,
			ThemeDeco = 105,
			Energy = 201,
			Infinity_Energy = 202,
			NoAds = 301,
			BagToken = 105,
			Fishpond_token = 501,
			Hammer = 601,
			NewbieRoomExp = 701,
			NewbieRoomKnife = 702,
			StarJourney = 801,
			DayLoop = 810,
			BalloonRacing = 811,
			MoleRacing = 812,
			AirplaneRacing = 813,
			BoatRacing = 814,
			DayLoop2 = 815,
			RabbitRacing = 816,
			SchoolRacing = 818,
			DayLoopCat = 817,
			RecoverCoinStar = 903,
			Brush = 904,
			Hoe = 905,
			GoldCardRandom = 909,
			GreenMine = 940,
			BlueMine = 941,
			RedMine = 942,
			Hoe_Six = 90,
			GreenMine_Six = 91,
			BlueMine_Six = 92,
			RedMine_Six = 93,
			Hoe_Eight = 94,
			GreenMine_Eight = 95,
			BlueMine_Eight = 96,
			RedMine_Eight = 97,
			CardPackageFreeLevel1 = 911,
			CardPackageFreeLevel2 = 912,
			CardPackageFreeLevel3 = 913,
			CardPackageFreeLevel4 = 914,
			CardPackageFreeLevel5 = 915,
			CardPackagePayLevel1 = 916,
			CardPackagePayLevel2 = 917,
			CardPackagePayLevel3 = 918,
			CardPackagePayLevel4 = 919,
			CardPackagePayLevel5 = 920,
			WildCard3 = 923,
			WildCard4 = 924,
			WildCard5 = 925,
			GardenShovel = 930,
			GardenBomb = 931,
			FishCultureScore = 932,
			CandyScore = 933,
			Candy1 = 934,
			Candy2 = 935,
			Candy3 = 936,
			Candy4 = 937,
			WatermelonAdd = 938,
			RaceWin = 950,
			MoleRaceWin = 951,
			CoinSpin = 952,
			CatSwimming = 953,
			PizzaTower = 957,
			GoldenEgg = 954,
			GoldenPearls = 971,
			AirPlaneRaceWin = 955,
			BoatRaceWin = 956,
			RabbitRaceWin = 958,
			SchoolRaceWin = 966,
			VegetableTreasureShovel = 959,
			VegetableTreasureBomb = 960,
			CardPackageBang1 = 961,
			CardPackageBang2 = 962,
			CardPackageBang3 = 963,
			CardPackageBang4 = 964,
			CardPackageBang5 = 965,
			EnergyMergeStage = 972,
			AirIsland = 973,
			BlindBoxExchangeTicket = 798,
			BlindBoxTicket = 799,
			BlindBox = 750,
			BlindBox1 = 751,
			BlindBox2 = 752,
			BlindBox3 = 753,
			BlindBox4 = 754,
			BlindBox5 = 755,
			EnergyMap = 3001
		}

		public enum ItemType
		{
			TypeNone = -1,
			TypeRandomBox = 7
		}

		public enum ResourceSubType
		{
			Normal = 0
		}

		[NonSerialized]
		public StorageHome _storageHome;

		public StorageHome storageHome => null;

		public StorageDictionary<int, int> Bag => null;

		[IDTag(1)]
		public bool CanAfford(ResData cost)
		{
			return false;
		}

		[IDTag(2)]
		public bool CanAfford(ResourceId id, int cout, out int needCount)
		{
			needCount = default(int);
			return false;
		}

		[IDTag(3)]
		public bool CanAfford(List<ResData> costList)
		{
			return false;
		}

		[IDTag(0)]
		public bool CanAfford(ResourceId id, int cout)
		{
			return false;
		}

		public void DebugSetResEnergy(int count)
		{
		}

		[IDTag(0)]
		public void ConsumeRes(ResourceId resourceId, int count, GameBIManager.ItemChangeReasonArgs reason, bool isIgnore = false)
		{
		}

		[IDTag(1)]
		public void ConsumeRes(ResData cost, GameBIManager.ItemChangeReasonArgs reason)
		{
		}

		[IDTag(2)]
		public void ConsumeRes(List<ResData> costList, GameBIManager.ItemChangeReasonArgs reason)
		{
		}

		[IDTag(3)]
		public void AddRes(int id, int count, GameBIManager.ItemChangeReasonArgs reason, bool isEvent = true, ShowRewardType rewardType = ShowRewardType.Common, bool isIgnore = false)
		{
		}

		[IDTag(2)]
		public void AddRes(ResourceId resourceId, int count, GameBIManager.ItemChangeReasonArgs reason, bool isEvent = true)
		{
		}

		[IDTag(0)]
		public void AddRes(ResData cost, GameBIManager.ItemChangeReasonArgs reason, bool isEvent = true, ShowRewardType rewardType = ShowRewardType.Common)
		{
		}

		[IDTag(1)]
		public void AddRes(List<ResData> costList, GameBIManager.ItemChangeReasonArgs reason, bool isEvent = true)
		{
		}

		public int GetTotalDecoCoin()
		{
			return 0;
		}

		public int GetRes(ResourceId resourceId)
		{
			return 0;
		}

		public void SetRes(ResourceId resourceId, int count, GameBIManager.ItemChangeReasonArgs reason)
		{
		}

		public bool IsResource(int resourceId)
		{
			return false;
		}

		public bool IsCardCollectionCard(int cardId)
		{
			return false;
		}

		[IDTag(1)]
		public static string ParseRewardNumText(int resourceId, int num)
		{
			return null;
		}

		[IDTag(0)]
		public static string ParseRewardNumText(ResourceId resourceId, int num)
		{
			return null;
		}

		public static string GetResourceName(ResourceId resourceId)
		{
			return null;
		}

		public static string GetResourceDesc(ResourceId resourceId)
		{
			return null;
		}

		[IDTag(2)]
		public static Sprite GetResourceIcon(int resourceId, ResourceSubType subType = ResourceSubType.Normal)
		{
			return null;
		}

		public static string GetResourceIconName(int resourceId, ResourceSubType subType = ResourceSubType.Normal)
		{
			return null;
		}

		[IDTag(1)]
		public static Sprite GetResourceIcon(ResourceId resourceId, ResourceSubType subType = ResourceSubType.Normal)
		{
			return null;
		}

		[IDTag(0)]
		public static Sprite GetResourceIcon(string fileName)
		{
			return null;
		}

		public string GetCurrencyKey(ResourceId resId)
		{
			return null;
		}

		public ItemType CheckItemType(int resourceId)
		{
			return default(ItemType);
		}
	}
}
