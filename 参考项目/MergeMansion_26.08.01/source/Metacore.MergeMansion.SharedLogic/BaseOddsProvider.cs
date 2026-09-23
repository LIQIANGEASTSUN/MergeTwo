using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Player;

public sealed class BaseOddsProvider : IDiceOddsProvider
{
	public void GetWeights(RollTheDiceGameDice dice, IPlayer player, Span<int> outWeights)
	{
	}

	public void GetWeightsForAttempt(int attemptIndex, RollTheDiceGameDice dice, IReadOnlyDictionary<string, int> requirementByIngredient, IReadOnlyDictionary<string, int> progressByIngredient, IPlayer player, Span<int> outWeights)
	{
	}
}
