using System;
using Paxie;
using UnityEngine;

namespace MergePuzzle.EnergyMultiplier
{
	public class EnergyMultiplierController : BaseSubscriber, IEventReceiver<BoardEvent.InitializeBoard>, IEventReceiverBase, IEventReceiver<EnergyMultiplierEvents.PopupClosed>, IEventReceiver<CameraEvent.CameraChangeCompletedPostEvent>, IEventReceiver<EntityUpdateEvent.EnergyUpdateUI>, IEventReceiver<CanvasEvent.OpenEventScreen>, IEventReceiver<EnergyMultiplierEvents.CheckMultiplierPopups>
	{
		[SerializeField]
		public EnergyMultiplierAssetContainer assets;

		[NonSerialized]
		public EnergyMultiplierEntity _entity;

		[NonSerialized]
		public KiteEnergyMultiplierConfig _config;

		[NonSerialized]
		public EnergyMultiplierHandler _handler;

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public BoardData _boardData;

		[NonSerialized]
		public bool _isEventBoard;

		[NonSerialized]
		public bool _isGameplayEnabled;

		[NonSerialized]
		public bool _isActivated;

		[NonSerialized]
		public bool _isIconCreated;

		[NonSerialized]
		public int _uiEnergy;

		[NonSerialized]
		public EnergyMultiplierFloatingText _floatingText;

		public Transform FloatingTextParent => null;

		public void OnEvent(BoardEvent.InitializeBoard e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangeCompletedPostEvent e)
		{
		}

		public void OnEvent(EntityUpdateEvent.EnergyUpdateUI e)
		{
		}

		public void OnEvent(EnergyMultiplierEvents.PopupClosed e)
		{
		}

		public override void OnEvent(CanvasEvent.GameplayStatusUpdate e)
		{
		}

		public void OnEvent(CanvasEvent.OpenEventScreen e)
		{
		}

		public void OnEvent(EnergyMultiplierEvents.CheckMultiplierPopups e)
		{
		}

		public void Initialize(bool isEventBoard)
		{
		}

		public void FixEntityMultiplier()
		{
		}

		public void CheckMultipliers()
		{
		}

		public void ActivateMultiplier()
		{
		}

		public void CreateIcon()
		{
		}

		public void TriggerFloatingText()
		{
		}
	}
}
