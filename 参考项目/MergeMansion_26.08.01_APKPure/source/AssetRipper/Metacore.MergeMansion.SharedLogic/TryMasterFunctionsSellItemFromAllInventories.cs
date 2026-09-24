using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Actions;
using GameLogic.Player.Items;
using Metaplay.Core.Model;

[ModelAction(10972)]
public class TryMasterFunctionsSellItemFromAllInventories : PlayerAction
{
	public List<IItemDefinition> ItemDefinitions { get; set; }

	public TryMasterFunctionsSellItemFromAllInventories()
	{
	}

	public TryMasterFunctionsSellItemFromAllInventories(List<IItemDefinition> itemDefinitions)
	{
	}

	public override MetaActionResult Execute(PlayerModel player, bool commit)
	{
		return null;
	}
}
