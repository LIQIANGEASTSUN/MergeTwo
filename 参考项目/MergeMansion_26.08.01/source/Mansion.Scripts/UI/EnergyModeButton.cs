using System;
using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Modes;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Client;
using UnityEngine;

namespace UI
{
	public class EnergyModeButton : MonoBehaviour
	{
		[SerializeField]
		public Transform energyModeIconContainer;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public IPlayerClientContext playerContext;

		[NonSerialized]
		public MergeBoard mergeBoard;

		[NonSerialized]
		public EnergyModeIconLibrary energyModeIconLibrary;

		[NonSerialized]
		public EnergyModeInfo[] energyModeBuffer;

		[NonSerialized]
		public int energyModeCount;

		[NonSerialized]
		public int currentEnergyModeIndex;

		[NonSerialized]
		public Option<GameObject> instantiatedNoEnergyModeIconOption;

		[NonSerialized]
		public readonly List<(int energyConsumptionMultiplier, GameObject icon)> instantiatedEnergyModeIcons;

		public void Init(PlayerModel playerModel, IPlayerClientContext playerContext, Option<MergeBoard> mergeBoardOption, EnergyModeIconLibrary energyModeIconLibrary)
		{
		}

		public void Init(PlayerModel playerModel, IPlayerClientContext playerContext, MergeBoard mergeBoard, EnergyModeIconLibrary energyModeIconLibrary)
		{
		}

		public void SetupEnergyModeIcons()
		{
		}

		public void InstantiateMissingEnergyModeIcons()
		{
		}

		public void DestroyExcessEnergyModeIcons()
		{
		}

		public void RefreshActiveEnergyModeIcon()
		{
		}

		public int GetNextEnergyModeIndex()
		{
			return 0;
		}

		[PublicAPI]
		public void ButtonClicked()
		{
		}
	}
}
