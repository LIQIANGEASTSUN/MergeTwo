using System;
using System.Collections.Generic;
using GameLogic.Player.Board;
using GameLogic.Player.Items;

public static class MergeBoardFinder
{
	public static Coordinate FindFirst(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return default(Coordinate);
	}

	public static List<Coordinate> FindXFirst(MergeItem[,] boardItems, int limit, Predicate<MergeItem> pred)
	{
		return null;
	}

	public static List<Coordinate> FindAll(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return null;
	}

	public static List<MergeItem> FindAllMergeItems(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return null;
	}

	public static bool CheckIfExists(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return false;
	}

	public static int CountAllMatching(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return 0;
	}

	public static List<int> GetItemTypes(MergeItem[,] boardItems, Predicate<MergeItem> pred)
	{
		return null;
	}
}
