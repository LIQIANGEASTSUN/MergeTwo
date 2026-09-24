using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace FAT
{
	public class MBBoardInventoryEntry : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
	{
		[NonSerialized]
		public Animator animator;

		[NonSerialized]
		public GameObject RedPoint;

		public void Setup()
		{
		}

		public void InitOnPreOpen()
		{
		}

		public void CleanupOnPostClose()
		{
		}

		void IPointerEnterHandler.OnPointerEnter(PointerEventData eventData)
		{
		}

		void IPointerExitHandler.OnPointerExit(PointerEventData eventData)
		{
		}

		public void _RefreshEntry()
		{
		}

		public void _RefreshInventoryEntryScreenPos()
		{
		}

		public void _RefreshRedPoint()
		{
		}

		public void _OnBtnInventory()
		{
		}

		public void _OnMessageInventoryFeedback()
		{
		}

		public void _OnMessageInventoryFeedbackNew()
		{
		}
	}
}
