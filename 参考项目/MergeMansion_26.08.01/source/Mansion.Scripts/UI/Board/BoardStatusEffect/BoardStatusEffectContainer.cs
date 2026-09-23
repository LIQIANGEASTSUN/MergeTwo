using System;
using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Player;
using UnityEngine;

namespace UI.Board.BoardStatusEffect
{
	public class BoardStatusEffectContainer : MonoBehaviour
	{
		[SerializeField]
		public BoardStatusEffectUI boardStatusEffectUIPrefab;

		[SerializeField]
		public List<BoardStatusEffectType> _allowedEffectTypes;

		[NonSerialized]
		public Dictionary<BoardStatusEffectType, BoardStatusEffectUI> _activeEffects;

		public bool Accepts(BoardStatusEffectType type)
		{
			return false;
		}

		public void AddEffect(PlayerModel playerModel, BoardStatusEffectConfig effectConfig, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public void RemoveEffect(BoardStatusEffectType effectType)
		{
		}

		public void UpdateEffectTimer(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public void OnUpdate()
		{
		}

		public void RefreshContainerVisibility(bool canBeVisible)
		{
		}

		public void RefreshContainerVisibility()
		{
		}

		public void SetContainerVisibility(bool visible)
		{
		}

		public void OnContainerClicked()
		{
		}

		public void ShowSlideOutAnimation(BoardStatusEffectType effectType)
		{
		}

		public void ClearEffects()
		{
		}
	}
}
