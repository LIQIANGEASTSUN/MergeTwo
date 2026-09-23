using System;
using System.Collections.Generic;
using Merge;
using UI.EventCalendarEntry;
using UI.Popups;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

public class EventCalendarPopup : PopupBase<EventCalendarPopupMenuState>
{
	[Serializable]
	public struct References
	{
		public GameObject popup;

		public Image blueOverlay;

		public Transform scrollListContent;

		public ScrollRect scrollRect;

		public GameObject eventCaseyPrefab;

		public GameObject eventIgnatiusPrefab;

		public GameObject eventLindsayPrefab;
	}

	[SerializeField]
	public References refs;

	[NonSerialized]
	public List<IEventCalendarEntry> instantiatedItems;

	public override string MenuTag => null;

	public override GameObject Popup => null;

	public override Image BlueOverlay => null;

	public override ScrollRect ScrollRect => null;

	public override EventCalendarPopupMenuState MenuState { get; set; }

	public override bool NeedsBlockingLayer()
	{
		return false;
	}

	public override bool DoesSupportHardwareBackButton()
	{
		return false;
	}

	public override void PopulateContent()
	{
	}

	public override void DisposeContent(DisposeContentReason reason)
	{
	}

	public void AddCurrentEventBlock(MergeBoardId eventMergeBoardId, Transform parent)
	{
	}

	public GameObject EventPrefab(MergeBoardId boardId)
	{
		return null;
	}
}
