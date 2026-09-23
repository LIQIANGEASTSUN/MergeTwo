using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents.CardCollectionSupportingEvent;
using Common;
using GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metaplay.Core.Activables;
using UnityEngine;

namespace UI
{
	public class CardCollectionSupportingEventButtonGroup : MonoBehaviour
	{
		[SerializeField]
		public EventButtonGroupLayout buttonGroupLayout;

		[NonSerialized]
		public Option<Transform> _targetParent;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public CardCollectionSupportingEventManager cardCollectionSupportingEventManager;

		[NonSerialized]
		public IScheduler scheduler;

		[NonSerialized]
		public readonly List<(CardCollectionSupportingEventMainHubBadge badge, Rollback rollback)> instantiatedItems;

		[NonSerialized]
		public ISafeRollback rollback;

		public void OnDestroyInner()
		{
		}

		public void OnChanged(IReadOnlyCollection<CardCollectionSupportingEventInfo> added, IReadOnlyCollection<CardCollectionSupportingEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel playerModel, IMenuController menuController, CardCollectionSupportingEventManager cardCollectionSupportingEventManager, IScheduler scheduler, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<CardCollectionSupportingEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<IMetaActivableConfigData> removed)
		{
		}

		public void DisposeAll()
		{
		}

		public void SetVisible(bool mansionViewVisibility)
		{
		}

		public void UpdateButtonVisibility()
		{
		}

		public (CardCollectionSupportingEventMainHubBadge, Rollback) CreateItem(CardCollectionSupportingEventInfo eventInfo, CardCollectionSupportingEventPrefabs prefabs)
		{
			return default((CardCollectionSupportingEventMainHubBadge, Rollback));
		}

		public void OnButtonClicked(CardCollectionSupportingEventMainHubBadge button)
		{
		}
	}
}
