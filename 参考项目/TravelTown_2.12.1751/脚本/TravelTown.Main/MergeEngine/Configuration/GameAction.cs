using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.Assets;
using Framework.UIFSM.Model;
using Framework.UIFSM.Model.Navigation;
using MergeEngine.Configuration.Tooltips;
using MergeEngine.Configuration.Tutorial;
using MergeEngine.ECS;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Orders;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.Triggers;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.EventCenter.Models;
using Merger.Metagame.Data;
using Merger.Metagame.ECS;
using Merger.Metagame.Model;
using Merger.Models;
using Merger.Tooltips.Services;
using Merger.Tutorials.Models;
using Zenject;

namespace MergeEngine.Configuration
{
	public class GameAction
	{
		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IUIModel _uiModel;

		[Inject]
		[NonSerialized]
		public IMetagameModel _metagameModel;

		[Inject]
		[NonSerialized]
		public INavigationModel _navigationModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[Inject]
		[NonSerialized]
		public ITutorialModel _tutorialModel;

		[Inject]
		[NonSerialized]
		public IRewardGrantActionModel _rewardGrantActionModel;

		[Inject]
		[NonSerialized]
		public IEventCenterConfigurationModel _eventCenterConfigurationModel;

		[Inject]
		[NonSerialized]
		public ITutorialsConfigurationModel _tutorialsConfigurationModel;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public TooltipService _tooltipService;

		[NonSerialized]
		public TutorialProgressComponent _tutorialProgressComponent;

		[Inject]
		public SignalBus signalBus { get; }

		public ReadOnlyCollection<PositionComponent> _boardItems => null;

		public InventoryComponent _inventoryComponent => null;

		public UnboxingSystem _unboxingSystem => null;

		public BoardSystem _boardSystem => null;

		public OrdersSystem ordersSystem => null;

		public MetagameSystem _metagameSystem => null;

		public InventorySystem _inventorySystem => null;

		public ResourcesSystem _resourcesSystem => null;

		public PlayerEventLevelSystem _playerEventLevelSystem => null;

		public TutorialProgressComponent TutorialProgressComponent => null;

		public virtual void Execute()
		{
		}

		public void SpawnOverlay(Asset overlay)
		{
		}

		public void DestroyOverlay(Asset overlay)
		{
		}

		public void ClearForceEnabledIdentifiableGameObjectList(BlockUIFlag flag)
		{
		}

		public void EnableUIElementByPattern(string gameObjectIdsPattern, BlockUIFlag flag)
		{
		}

		public void DisableUIElementByPattern(string gameObjectIdsPattern, BlockUIFlag flag)
		{
		}

		public void EnableUIElement(string gameObjectId, BlockUIFlag flag)
		{
		}

		public void DisableUIElement(string gameObjectId, BlockUIFlag flag)
		{
		}

		public void DisableUI(BlockUIFlag flag)
		{
		}

		public void EnableUI(BlockUIFlag flag)
		{
		}

		public void SetReactiveButtonInteractable(string gameObjectId, bool interactable)
		{
		}

		public void ActivateGameObject(string gameObjectId)
		{
		}

		public void DeactivateGameObject(string gameObjectId)
		{
		}

		public void ClearDeactivatedGameObjectsList()
		{
		}

		public void EnableItemsOfType(IMergeItem item)
		{
		}

		public void EnableFirstItemOfType(IMergeItem item)
		{
		}

		public void EnableFirstTool()
		{
		}

		public void EnableItemAtPosition(int column, int row)
		{
		}

		public void DisableAllItems()
		{
		}

		public void EnableAllItems()
		{
		}

		public void ToggleLockedByTutorialForAllItems(bool locked)
		{
		}

		public void ToggleLockedByTutorial(PositionComponent component, bool locked)
		{
		}

		public void ToggleLockedByTutorial(LockedComponent component, bool locked)
		{
		}

		public void DisableDragOfAllItems()
		{
		}

		public void DisableInteractionOfAllItems()
		{
		}

		public void TapItemAtPosition(int column, int row)
		{
		}

		public void TapItemOfType(IMergeItem item)
		{
		}

		public void TapItem(PositionComponent positionComponent)
		{
		}

		public void NavigateTo(string transition)
		{
		}

		public void NavigateTo(string transition, object payload)
		{
		}

		public void EnableBubbledItems()
		{
		}

		public void EnableMeteorItems()
		{
		}

		public void CharacterSpeak(CharacterSpeechData speechDatas)
		{
		}

		public void EnableItemClosestToInventory()
		{
		}

		public void PreventBubbleExpiration()
		{
		}

		public void UnboxItemAtPosition(int column, int row, string reason)
		{
		}

		public void UnlockItemAtPosition(int column, int row)
		{
		}

		public void TryMakeSpaceOnBoard()
		{
		}

		public void ReorderOrdersList()
		{
		}

		public void ScrollOrderViewToMostLeftAndLock()
		{
		}

		public void ScrollOrderViewToEventCenterAndLock()
		{
		}

		public void BlockRewardGrandQueue()
		{
		}

		public void UnblockRewardGrandQueue()
		{
		}

		public void UnlockOrderView()
		{
		}

		public void ToggleIslandScrollingEnabled(bool enabled)
		{
		}

		public void EnableActionQueue()
		{
		}

		public void OpenMetagameBuildingMenu()
		{
		}

		public void OpenMetagameNarrativeView()
		{
		}

		public void TutorialDisableInventory()
		{
		}

		public void TutorialEnableInventory()
		{
		}

		public void SlideResource(PlayerResourceEnum resourceType, string slideFromGameObjectId)
		{
		}

		public void SetResourceDisplayValue(string resourceType, int displayValue)
		{
		}

		public void PlayParticleEffect(string gameObjectId)
		{
		}

		public void CompleteTutorialWithId(List<TutorialData> tutorials)
		{
		}

		public void DispatchTriggerWasActivatedSignal(TriggerType triggerType)
		{
		}

		public void ZoomMap(float fromZoom, float toZoom, float zoomDuration)
		{
		}

		public void MoveObjectToOverlay(string objectId, int overlayOffset, bool waitForSpawn)
		{
		}

		public void RemoveObjectFromOverlay(string objectId)
		{
		}

		public void ShowTooltipBySource(TooltipSource tooltipSource)
		{
		}

		public void FlameCardsShowGrandRewardTooltip()
		{
		}

		public void CloseAllTooltips()
		{
		}
	}
}
