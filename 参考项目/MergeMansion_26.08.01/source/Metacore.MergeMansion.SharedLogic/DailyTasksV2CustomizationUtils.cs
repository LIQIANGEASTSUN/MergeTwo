using System;
using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;

public static class DailyTasksV2CustomizationUtils
{
	public static List<IItemDefinition> GetAllPossibleRequirementItems(PlayerModel playerModel)
	{
		return null;
	}

	public static int GetItemValueRequirementForDailyTasksV2(IPlayer player, ItemDefinition itemDefinition)
	{
		return 0;
	}

	public static void RemoveItemsNotMarkedAsRequirementInConfig(IPlayer player, List<IItemDefinition> items)
	{
	}

	public static void RemoveHighPriorityExclusiveRequirements(PlayerModel playerModel, List<IItemDefinition> items)
	{
	}

	public static void RemovePossibleRequirementsIfDoNotHaveProducer(PlayerModel playerModel, List<IItemDefinition> items)
	{
	}

	public static void RemovePossibleRequirementsIfDoNotHaveProducer(PlayerModel playerModel, List<IItemDefinition> items, Span<MergeBoard> boards, Span<IBoardInventory> inventories, Option<List<IPlayerReward>> rewards)
	{
	}
}
